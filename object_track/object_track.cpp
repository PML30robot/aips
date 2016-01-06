/* 
 * File:            object_track.cpp
 * Author:          Vladislav Kupyrin
 *                  Anton Fedotov
 * Export settings: Razuvaev Daniil
 * 
 * Created on 14 Ноябрь 2015 г., 17:42
 */

#include <opencv2/opencv.hpp>

#include <vector>
 
#include "../settings/settings.h"

#include "../object_track/object_track.h"
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
   camera_   = new camera_t (connector_);
   settings_ = new settings_t("object_track");
   
   settings_->add_setting("min_h",&min_h_);
   settings_->add_setting("min_s",&min_s_);
   settings_->add_setting("min_v",&min_v_);
   settings_->add_setting("max_h",&max_h_);
   settings_->add_setting("max_s",&max_s_);
   settings_->add_setting("max_v",&max_v_);
   settings_->add_setting("min_obj_size",&min_obj_size_);
   settings_->add_setting("max_obj_size",&max_obj_size_);
   
   connect(connector_, SIGNAL (export_settings_s()), this,  SLOT (export_settings_slt()));
   
   connect(this, SIGNAL(send_image(QImage)), connector_, SLOT(get_image(QImage)));

   connect(connector_, SIGNAL(stop_obj_track_s()), this, SLOT(stop_loop()));
   
   connect(connector_, SIGNAL (set_brightness_hardware_sig(double)), this,  SLOT (set_brightness_hardware(double)));
   connect(connector_, SIGNAL (set_contrast_hardware_sig(double)),   this,  SLOT (set_contrast_hardware(double)));
   connect(connector_, SIGNAL (set_hue_hardware_sig(double)),        this,  SLOT (set_hue_hardware(double)));
   connect(connector_, SIGNAL (set_saturation_hardware_sig(double)), this,  SLOT (set_saturation_hardware(double)));
   connect(connector_, SIGNAL (set_gain_hardware_sig(double)),       this,  SLOT (set_gain_hardware(double)));
   connect(connector_, SIGNAL (set_exposure_hardware_sig(double)),   this,  SLOT (set_exposure_hardware(double)));
   
   connect(connector_, SIGNAL (set_min_h_sig(int)),    this,  SLOT (set_min_h(int)));
   connect(connector_, SIGNAL (set_max_h_sig(int)),    this,  SLOT (set_max_h(int)));
   connect(connector_, SIGNAL (set_min_s_sig(int)),    this,  SLOT (set_min_s(int)));
   connect(connector_, SIGNAL (set_max_s_sig(int)),    this,  SLOT (set_max_s(int)));
   connect(connector_, SIGNAL (set_min_v_sig(int)),    this,  SLOT (set_min_v(int)));
   connect(connector_, SIGNAL (set_max_v_sig(int)),    this,  SLOT (set_max_v(int)));
   connect(connector_, SIGNAL (set_min_size_sig(int)), this,  SLOT (set_min_size(int)));
   connect(connector_, SIGNAL (set_max_size_sig(int)), this,  SLOT (set_max_size(int)));
   
   connect(connector_, SIGNAL (set_brightness_software_sig(double)), this,  SLOT (set_brightness_software(double)));
   connect(connector_, SIGNAL (set_contrast_software_sig(double)),   this,  SLOT (set_contrast_software(double)));
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
      camera_->get_frame(origin_frame);
      
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
            
               drawContours(origin_frame, contours, idx, Scalar(255, 255, 255), 3, 8, hierarchy);
            }
         }

         if(contours_num == 0)
         {
            center.x = 0;
            center.y = 0;
         }
         else
         {
            center.x /= contours_num;
            center.y /= contours_num;
         }

         circle(origin_frame, center, 3, Scalar(0, 0, 255), 3); 
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

void object_track_t::set_max_obj_size( size_t max_obj_size_ )
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
   camera_->set_brightness( hbrightness );
}

Q_SLOT void object_track_t::set_contrast_hardware( double hcontrast )
{
   camera_->set_contrast( hcontrast );
}

Q_SLOT void object_track_t::set_saturation_hardware( double hsaturation )
{
   camera_->set_saturation( hsaturation );
}

Q_SLOT void object_track_t::set_hue_hardware( double hhue )
{
   camera_->set_hue( hhue );
}

Q_SLOT void object_track_t::set_gain_hardware( double hgain )
{
   camera_->set_gain( hgain );
}

Q_SLOT void object_track_t::set_exposure_hardware( double hexposure)
{
  camera_->set_exposure( hexposure );
}

Q_SLOT void object_track_t::set_brightness_software( double hbrightness )
{
   camera_->set_brightness_s( hbrightness );
}

Q_SLOT void object_track_t::set_contrast_software( double hcontrast )
{
   camera_->set_contrast_s( hcontrast );
}

Q_SLOT void object_track_t::set_min_h( int min_h )
{
   set_min_h((size_t)min_h);
}

Q_SLOT void object_track_t::set_max_h( int max_h )
{
   set_max_h((size_t)max_h);
}

Q_SLOT void object_track_t::set_min_v( int min_v )
{
   set_min_v((size_t)min_v);
}

Q_SLOT void object_track_t::set_max_v( int max_v )
{
   set_max_v((size_t)max_v);
}

Q_SLOT void object_track_t::set_min_s( int min_s )
{
   set_min_s((size_t)min_s);
}

Q_SLOT void object_track_t::set_max_s( int max_s )
{
   set_max_s((size_t)max_s);
}

Q_SLOT void object_track_t::set_min_size( int min_size )
{
   set_min_obj_size((size_t)min_size);
}

Q_SLOT void object_track_t::set_max_size( int max_size )
{
   set_max_obj_size((size_t)max_size);
}


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

Q_SLOT void object_track_t::export_settings_slt()
{
   cout << "ot" << endl;
   settings_->export_settings();
}