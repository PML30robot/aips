/* 
 * File:   object_track.h
 * Author: Vladislav Kupyrin
 *         Anton Fedotov
 *
 * Created on 14 Ноябрь 2015 г., 17:42
 */

#include <opencv2/opencv.hpp>

#include <vector>

#include "object_track.h"

using namespace cv;
using namespace std;

void object_track_t::loop( )
{
   object_track_t obj;
   
   VideoCapture capture(0);
   
   Mat frame;
   
   namedWindow("Capture", WINDOW_NORMAL);
   namedWindow("Color_detection", WINDOW_NORMAL);
   namedWindow("Contours", WINDOW_NORMAL);
   
   vector< vector<Point> > contours;
   vector< Vec4i >         hierarchy;

   while (true)
   {
      capture >> frame;

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

            if (area > min_obj_size && area < max_obj_size)
            {
               center.x += moment.m10 / area;
               center.y += moment.m01 / area;

               contours_num++;
            }

            drawContours(frame, contours, idx, Scalar(255, 255, 255), 1, 8, hierarchy);
         }

         center.x /= contours_num;
         center.y /= contours_num;

         circle(frame, center, 2, Scalar(0, 0, 255)); 
      }
      
      if (waitKey(30) == 27)
         break;
   }
}

object_track_t::object_track_t( ) :
     min_h_(0)
   , min_s_(255)
   , min_v_(0)
   , max_h_(255)
   , max_s_(0)
   , max_v_(255)
   , min_obj_size(0)
   , max_obj_size(10000)
 
{
}

object_track_t::~object_track_t( )
{
   
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
