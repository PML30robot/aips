/* 
 * File:                   obj_detect.cpp
 * Author:                 Anton Fedotov
 * 
 * Created on 30.01.2016
 */

#include <vector>

#include "obj_detect.h"

obj_detect_t::obj_detect_t( connector_t * connector ) :
     min_h_(0)
   , min_s_(0)
   , min_v_(0)
   , max_h_(255)
   , max_s_(255)
   , max_v_(255)
   , min_obj_size_(0)
   , max_obj_size_(10000)
   , connector_   (connector)
{
   settings_ = new settings_t("object_track");

   settings_->add_setting("min_h", &min_h_);
   settings_->add_setting("min_s", &min_s_);
   settings_->add_setting("min_v", &min_v_);
   settings_->add_setting("max_h", &max_h_);
   settings_->add_setting("max_s", &max_s_);
   settings_->add_setting("max_v", &max_v_);
   settings_->add_setting("min_obj_size", &min_obj_size_);
   settings_->add_setting("max_obj_size", &max_obj_size_);

   connect(connector_, SIGNAL (export_settings_s()), this, SLOT (export_settings_slt()));
   connect(connector_, SIGNAL (import_settings_s()), this, SLOT (import_settings_slt()));

   connect(connector_, SIGNAL (set_min_h_q_sig_g_ot(int)),    this,  SLOT(set_min_h(int)));
   connect(connector_, SIGNAL (set_max_h_q_sig_g_ot(int)),    this,  SLOT(set_max_h(int)));
   connect(connector_, SIGNAL (set_min_s_q_sig_g_ot(int)),    this,  SLOT(set_min_s(int)));
   connect(connector_, SIGNAL (set_max_s_q_sig_g_ot(int)),    this,  SLOT(set_max_s(int)));
   connect(connector_, SIGNAL (set_min_v_q_sig_g_ot(int)),    this,  SLOT(set_min_v(int)));
   connect(connector_, SIGNAL (set_max_v_q_sig_g_ot(int)),    this,  SLOT(set_max_v(int)));
   connect(connector_, SIGNAL (set_min_size_q_sig_g_ot(int)), this,  SLOT(set_min_obj_size(int)));
   connect(connector_, SIGNAL (set_max_size_q_sig_g_ot(int)), this,  SLOT(set_max_obj_size(int)));
   
   connect(this, SIGNAL (get_min_h_sig(int)), connector_, SLOT(set_min_h_q_slt_ot_g(int)));
   connect(this, SIGNAL (get_max_h_sig(int)), connector_, SLOT(set_max_h_q_slt_ot_g(int)));
   connect(this, SIGNAL (get_min_s_sig(int)), connector_, SLOT(set_min_s_q_slt_ot_g(int)));
   connect(this, SIGNAL (get_max_s_sig(int)), connector_, SLOT(set_max_s_q_slt_ot_g(int)));
   connect(this, SIGNAL (get_min_v_sig(int)), connector_, SLOT(set_min_v_q_slt_ot_g(int)));
   connect(this, SIGNAL (get_max_v_sig(int)), connector_, SLOT(set_max_v_q_slt_ot_g(int)));
   connect(this, SIGNAL (get_min_size_sig(int)), connector_, SLOT(set_min_size_q_slt_ot_g(int)));
   connect(this, SIGNAL (get_max_size_sig(int)), connector_, SLOT(set_max_size_q_slt_ot_g(int)));
}

Point obj_detect_t::detect( const Mat & frame )
{  
   Mat origin_frame;
   
   frame.copyTo(origin_frame);

   cvtColor(origin_frame, origin_frame, CV_BGR2HSV);

   inRange(origin_frame, Scalar(min_h_, min_s_, min_v_), Scalar(max_h_, max_s_, max_v_), origin_frame);

   findContours(origin_frame, contours_, hierarchy_, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE);

   double area;

   center_.x = 0;
   center_.y = 0;

   size_t contours_num = 0;

   if (hierarchy_.size())
   {
      for (int idx = 0; idx >= 0; idx = hierarchy_[idx][0])
      {
         Moments moment = moments((Mat)contours_[idx]);
         area = moment.m00;

         if (area > min_obj_size_ && area < max_obj_size_)
         {
            center_.x += moment.m10 / area;
            center_.y += moment.m01 / area;

            contours_num++;
         }
      }

      if(contours_num == 0)
      {
         center_.x = 0;
         center_.y = 0;
      }
      else
      {
         center_.x /= contours_num;
         center_.y /= contours_num;
      }
      
   }
   return center_;
}

Q_SLOT size_t obj_detect_t::get_max_v( ) const
{
   return max_v_;
}

Q_SLOT size_t obj_detect_t::get_min_v( ) const
{
   return min_v_;
}

Q_SLOT size_t obj_detect_t::get_max_s( ) const
{
   return max_s_;
}

Q_SLOT size_t obj_detect_t::get_min_s( ) const
{
   return min_s_;
}

Q_SLOT size_t obj_detect_t::get_max_h( ) const
{
   return max_h_;
}

Q_SLOT size_t obj_detect_t::get_min_h( ) const
{
   return min_h_;
}

Q_SLOT size_t obj_detect_t::get_min_obj_size( ) const
{
   return  min_obj_size_;
}

Q_SLOT size_t obj_detect_t::get_max_obj_size( ) const
{
   return  max_obj_size_;
}

Q_SLOT void obj_detect_t::set_min_h( int min_h )
{
   if (min_h<max_h_)
   {
      std::cout << "ObjDetect : set_min_h( "<< min_h  << " )" << endl;
      min_h_ = min_h;
   }
   else
   {
      emit get_min_h_sig    (min_h_);
   }
}

Q_SLOT void obj_detect_t::set_max_h( int max_h )
{
   if (min_h_<max_h)
   {
      std::cout << "ObjDetect : set_max_h( "<< max_h  << " )" << endl;
      max_h_ = max_h;
   }
   else
   {
      emit get_max_h_sig    (max_h_);
   }
}

Q_SLOT void obj_detect_t::set_min_v( int min_v )
{
   if (min_v<max_v_)
   {
      std::cout << "ObjDetect : set_min_v( "<< min_v  << " )" << endl;
      min_v_ = min_v;
   }
   else
   {
      emit get_min_v_sig    (min_v_);
   }
}

Q_SLOT void obj_detect_t::set_max_v( int max_v )
{
   if (min_v_<max_v)
   {
      std::cout << "ObjDetect : set_max_v( "<< max_v  << " )" << endl;
      max_v_ = max_v;
   }
   else
   {
      emit get_max_v_sig    (max_v_);
   }
}

Q_SLOT void obj_detect_t::set_min_s( int min_s )
{
   if (min_s<max_s_)
   {
      std::cout << "ObjDetect : set_min_s( "<< min_s  << " )" << endl;
      min_s_ = min_s;
   }
   else
   {
      emit get_min_s_sig    (min_s_);
   }
}

Q_SLOT void obj_detect_t::set_max_s( int max_s )
{
   if (min_s_<max_s)
   {
      std::cout << "ObjDetect : set_max_s( "<< max_s  << " )" << endl;
      max_s_ = max_s;
   }
   else
   {
      emit get_max_s_sig    (max_s_);
   }
}

Q_SLOT void obj_detect_t::set_min_obj_size( int min_obj_size )
{
   if (min_obj_size<max_obj_size_)
   {
      std::cout << "ObjDetect : set_min_obj_size( "<< min_obj_size  << " )" << endl;
      this->min_obj_size_ = min_obj_size;
   }
   else
   {
      emit get_min_size_sig    (min_obj_size_);
   }
}

Q_SLOT void obj_detect_t::set_max_obj_size( int max_obj_size )
{
   if (min_obj_size_<max_obj_size)
   {
      std::cout << "ObjDetect : set_max_obj_size( "<< max_obj_size  << " )" << endl;
      this->max_obj_size_ = max_obj_size;
   }
   else
   {
      emit get_max_size_sig    (max_obj_size_);
   }
}

Q_SLOT void obj_detect_t::export_settings_slt()
{
   settings_->export_settings();
}

Q_SLOT void obj_detect_t::import_settings_slt()
{
   settings_->import_settings();
   
   emit get_min_h_sig    (min_h_);
   emit get_max_h_sig    (max_h_);
   emit get_min_s_sig    (min_s_);
   emit get_max_s_sig    (max_s_);
   emit get_min_v_sig    (min_v_);
   emit get_max_v_sig    (max_v_);
   emit get_min_size_sig (min_obj_size_);
   emit get_max_size_sig (max_obj_size_);
}

void obj_detect_t::drawContour (Mat & frame)
{
   if (hierarchy_.size())
   {
      for (int idx = 0; idx >= 0; idx = hierarchy_[idx][0])
         drawContours(frame, contours_, idx, Scalar(0, 255, 0), 3, 8, hierarchy_);
   }
}

void obj_detect_t::drawPosition(Mat & frame)// Центр обьекта
{
   circle(frame, center_, 3, Scalar(0, 0, 255), 3);
}