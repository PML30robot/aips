/* 
 * File:   object_track.cpp
 * Author: Vladislav Kupyrin
 *         Anton Fedotov
 *
 * Created on 14 Ноябрь 2015 г., 17:42
 */

#include <opencv2/opencv.hpp>

#include <vector>

#include "object_track.h"
#include "../camera/camera.h"

using namespace cv;
using namespace std;

object_track_t::object_track_t( connector_t * connector ) :
     min_h_(0)
   , min_s_(255)
   , min_v_(0)
   , max_h_(255)
   , max_s_(0)
   , max_v_(255)
   , min_obj_size_(0)
   , max_obj_size_(10000)
   , connector_   (connector)
   , is_working_   (1)
{
   connect(this, SIGNAL(send_image(QImage)), connector_, SLOT(get_image(QImage)));

   connect(connector_, SIGNAL(stop_obj_track_s()), this, SLOT(stop_loop()));
   
   connect(connector_, SIGNAL (set_brightness_hardware_sig(double)), this,  SLOT(set_brightness_hardware(double)));
   connect(connector_, SIGNAL (set_contrast_hardware_sig(double)), this,  SLOT(set_contrast_hardware(double)));
//   connect(camera_t_->hHue,       SIGNAL(valueChanged(double)), connector_, SLOT (set_hue_hardware(double)));
//   connect(camera_t_->hGain,      SIGNAL(valueChanged(double)), connector_, SLOT (set_gain_hardware(double)));
//   connect(camera_t_->hExposure,  SIGNAL(valueChanged(double)), connector_, SLOT (set_exposure_hardware(double)));
//   connect(camera_t_->hBrightness,SIGNAL(valueChanged(double)), connector_, SLOT(set_brightness_hardware( double)));
//   
//   connect(camera_t_->sBrightness,SIGNAL(valueChanged(double)), connector_, SLOT (set_brightness_software(double)));
//   connect(camera_t_->sContrast,  SIGNAL(valueChanged(double)), connector_, SLOT (set_contrast_software(double)));
}

object_track_t::~object_track_t( )
{
}

extern QImage cvMatToQImage( cv::Mat const & frame );

void object_track_t::loop( )
{
   Mat frame, origin_frame;
   
   vector< vector<Point> > contours;
   vector< Vec4i >         hierarchy;

   while (is_working_)
   {
      camera_.get_frame(origin_frame);
      
      origin_frame.copyTo(frame);

      cvtColor(frame, frame, CV_BGR2HSV);
      
      inRange(frame, Scalar(min_h_, min_s_, min_v_), Scalar(max_h_, max_s_, max_v_), frame);

      findContours(frame, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE);
      
      double area;
      
      Point center;

      center.x = 0;
      center.y = 0;

      size_t contours_num = 0;
      
      if (hierarchy.size())
      {
         for (int idx = 0; idx >= 0; idx = hierarchy[idx][0])
			{
            Moments moment = moments((Mat)contours[idx]);
				area = moment.m00;

            if (area > min_obj_size_ && area < max_obj_size_)
            {
               center.x += moment.m10 / area;
               center.y += moment.m01 / area;

               contours_num++;
            }

            drawContours(origin_frame, contours, idx, Scalar(255, 255, 255), 1, 8, hierarchy);
         }

         center.x /= contours_num;
         center.y /= contours_num;

         circle(origin_frame, center, 2, Scalar(0, 0, 255)); 
      }
      
      emit send_image(cvMatToQImage(origin_frame));
   }
}

void object_track_t::set_max_v( size_t max_v_ )
{
   this->max_v_ = max_v_;
}

size_t object_track_t::get_max_v( ) const
{
   return max_v_;
}

void object_track_t::set_min_v( size_t min_v_ )
{
   this->min_v_ = min_v_;
}

size_t object_track_t::get_min_v( ) const
{
   return min_v_;
}

void object_track_t::set_max_s( size_t max_s_ )
{
   this->max_s_ = max_s_;
}

size_t object_track_t::get_max_s( ) const
{
   return max_s_;
}

void object_track_t::set_min_s( size_t min_s_ )
{
   this->min_s_ = min_s_;
}

size_t object_track_t::get_min_s( ) const
{
   return min_s_;
}

void object_track_t::set_max_h( size_t max_h_ )
{
   this->max_h_ = max_h_;
}

size_t object_track_t::get_max_h( ) const
{
   return max_h_;
}

void object_track_t::set_min_h( size_t min_h_ )
{
   this->min_h_ = min_h_;
}

size_t object_track_t::get_min_h( ) const
{
   return min_h_;
}

void object_track_t::set_min_obj_size( size_t min_obj_size_ )
{
   this->min_obj_size_ = min_obj_size_;
}

size_t object_track_t::get_min_obj_size( ) const
{
   return  min_obj_size_;
}

void object_track_t::set_max_obj_size( size_t  max_obj_size_ )
{
   this->max_obj_size_ = max_obj_size_;
}

size_t object_track_t::get_max_obj_size( ) const
{
   return  max_obj_size_;
}

Q_SLOT void object_track_t::stop_loop()
{
   is_working_ = 0;
}


Q_SLOT void object_track_t::set_brightness_hardware( double hbrightness )
{
   camera_.set_brightness( hbrightness );
}

Q_SLOT void object_track_t::set_contrast_hardware( double hcontrast )
{
   camera_.set_contrast( hcontrast );
}

//Q_SLOT void set_saturation_hardware( double hsaturation )
//{
//   this->saturation_ = hsaturation;
//}
//
//Q_SLOT void set_hue_hardware( double hhue )
//{
//   this->hue_ = hhue;
//}
//
//Q_SLOT void set_gain_hardware( double hgain )
//{
//   this->gain_ = hgain;
//}
//
//Q_SLOT void set_exposure_hardware( double hexposure)
//{
//   this->exposure_ = hexposure;
//}

QImage cvMatToQImage( cv::Mat const & frame )
{
   QImage img;
   
   if (frame.channels()== 3)
   {
      cv::cvtColor(frame, frame, CV_BGR2RGB);
      img = QImage((const unsigned char*)(frame.data), frame.cols, frame.rows, QImage::Format_RGB888);
   }
   else
   {
      img = QImage((const unsigned char*)(frame.data), frame.cols, frame.rows, QImage::Format_Indexed8);
   }
   
   return img;
}