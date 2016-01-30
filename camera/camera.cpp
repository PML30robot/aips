/* 
 * File:                   object_track.cpp
 * Author:                 Vladislav Kupyrin
 *                         Anton Fedotov
 * Export/import settings: Razuvaev Daniil
 *
 * Created on 14 Ноябрь 2015 г., 17:42
 */

#include <opencv2/opencv.hpp>
#include <opencv2/videoio.hpp>

#include "../settings/settings.h"                                //add settings

#include "../camera/camera.h"
#include "../connecter/connector.h"

using namespace cv;

camera_t::camera_t( connector_t * connector) :
     connector_   (connector)
   , saturation_  (0)
   , hue_         (0)
   , contrast_    (0)
   , gain_        (0)
   , exposure_    (0)
   , brightness_s_(0)
   , contrast_s_  (0)
   , brightness_  (0)
   
   , work_saturation_  (0)
   , work_hue_         (0)
   , work_contrast_    (0)
   , work_gain_        (0)
   , work_exposure_    (0)
   , work_brightness_s_(0)
   , work_contrast_s_  (0)
   , work_brightness_  (0)
{
   capture_ = new VideoCapture(0);
   
   brightness_   = capture_->get(CV_CAP_PROP_BRIGHTNESS);
   contrast_     = capture_->get(CV_CAP_PROP_CONTRAST);
   saturation_   = capture_->get(CV_CAP_PROP_SATURATION);
   hue_          = capture_->get(CV_CAP_PROP_HUE);
   gain_         = capture_->get(CV_CAP_PROP_GAIN);
   exposure_     = capture_->get(CV_CAP_PROP_EXPOSURE);
   brightness_s_ = brightness_;
   contrast_s_   = contrast_;
   work_brightness_   = brightness_;
   work_contrast_     = contrast_;
   work_saturation_   = saturation_ ;
   work_hue_          = hue_;
   work_gain_         = gain_;
   work_exposure_     = exposure_;
   work_brightness_s_ = brightness_s_;
   work_contrast_s_   = contrast_s_;
   
   
   settings_ = new settings_t("camera");
   
   settings_->add_setting("hardware brightness", &work_brightness_);
   settings_->add_setting("hardware saturation", &work_saturation_);
   settings_->add_setting("hardware hue", &work_hue_);
   settings_->add_setting("hardware contrast", &work_contrast_);
   settings_->add_setting("hardware gain", &work_gain_);
   settings_->add_setting("hardware exposure", &work_exposure_);
   
   settings_->add_setting("software brightness", &work_brightness_s_);
   settings_->add_setting("software contrast", &work_contrast_s_);
   
   connect(connector_, SIGNAL(export_settings_s()), this,  SLOT(export_settings_slt()));
   connect(connector_, SIGNAL(import_settings_s()), this,  SLOT(import_settings_slt()));
      
   connect(this,SIGNAL(get_brightness_h(double))  ,connector_ ,  SLOT(get_brightness_h_slt(double)));
   connect(this,SIGNAL(get_hue_h(double))         ,connector_ ,  SLOT(get_hue_h_slt(double)));
   connect(this,SIGNAL(get_contrast_h(double))    ,connector_ ,  SLOT(get_contrast_h_slt(double)));
   connect(this,SIGNAL(get_gain_h(double))        ,connector_ ,  SLOT(get_gain_h_slt(double)));
   connect(this,SIGNAL(get_exposure_h(double))    ,connector_ ,  SLOT(get_exposure_h_slt(double)));
   connect(this,SIGNAL(get_saturation_h(double))  ,connector_ ,  SLOT(get_saturation_h_slt(double)));
   
   connect(this,SIGNAL(get_brightness_s(double))  ,connector_ ,  SLOT(get_brightness_s_slt(double)));
   connect(this,SIGNAL(get_contrast_s(double))    ,connector_ ,  SLOT(get_contrast_s_slt(double)));
   
}

camera_t::~camera_t()
{
   capture_->set(CV_CAP_PROP_BRIGHTNESS, brightness_);
   capture_->set(CV_CAP_PROP_CONTRAST, contrast_);
   capture_->set(CV_CAP_PROP_SATURATION, saturation_);
   capture_->set(CV_CAP_PROP_HUE, hue_);
   capture_->set(CV_CAP_PROP_GAIN, gain_);
   capture_->set(CV_CAP_PROP_EXPOSURE, exposure_);
   
   delete capture_;
}

void camera_t::set_gain( double work_gain )
{
   capture_->set(CV_CAP_PROP_GAIN, work_gain);
   work_gain_ = work_gain;
}

double camera_t::get_gain( ) const
{
   return capture_->get(CV_CAP_PROP_GAIN);
}

void camera_t::set_exposure( double work_exposure)
{
   capture_->set(CV_CAP_PROP_EXPOSURE, work_exposure);
   work_exposure_ = work_exposure;
}

double camera_t::get_exposure( ) const
{
   return capture_->get(CV_CAP_PROP_EXPOSURE);
}

void camera_t::set_contrast( double work_contrast )
{
   capture_->set(CV_CAP_PROP_CONTRAST, work_contrast);
   work_contrast_ = work_contrast;
}

double camera_t::get_contrast( ) const
{
   return capture_->get(CV_CAP_PROP_CONTRAST);
}

void camera_t::set_hue( double work_hue )
{
   capture_->set(CV_CAP_PROP_HUE, work_hue);
   work_hue_ = work_hue;
}

double camera_t::get_hue( ) const
{
   return capture_->get(CV_CAP_PROP_HUE);
}

void camera_t::set_saturation( double work_saturation )
{
   capture_->set(CV_CAP_PROP_SATURATION, work_saturation);
   work_saturation_ = work_saturation;
}

double camera_t::get_saturation( ) const
{
   return capture_->get(CV_CAP_PROP_SATURATION);
}

void camera_t::set_brightness( double work_brightness )
{
   work_brightness_ = work_brightness;
   capture_->set(CV_CAP_PROP_BRIGHTNESS, work_brightness);
}

double camera_t::get_brightness( ) const
{
   return capture_->get(CV_CAP_PROP_BRIGHTNESS);
}

void camera_t::get_frame( Mat & frame )
{
   capture_->read(frame);
   frame.convertTo(frame, -1, contrast_s_, brightness_s_);
}

void camera_t::set_brightness_s( double work_brightness_s )
{
   brightness_s_ = work_brightness_s;
   work_brightness_s_ = work_brightness_s;
}

double camera_t::get_brightness_s( ) const
{
   return brightness_s_;
}

void camera_t::set_contrast_s( double work_contrast_s )
{
   contrast_s_ = work_contrast_s;
   work_contrast_s_ = work_contrast_s;
}

double camera_t::get_contrast_s( ) const
{
   return contrast_s_;
}

Q_SLOT void camera_t::export_settings_slt()
{
   settings_->export_settings();
}

Q_SLOT void camera_t::import_settings_slt()
{
//   std::cout << work_brightness_<< endl;

   settings_->import_settings();
   
   capture_->set(CV_CAP_PROP_BRIGHTNESS, work_brightness_);
   capture_->set(CV_CAP_PROP_CONTRAST, work_contrast_);
   capture_->set(CV_CAP_PROP_SATURATION, work_saturation_);
   capture_->set(CV_CAP_PROP_HUE, work_hue_);
   capture_->set(CV_CAP_PROP_GAIN, work_gain_);
   capture_->set(CV_CAP_PROP_EXPOSURE, work_exposure_);

//   std::cout << work_brightness_<< endl;

   emit this->get_brightness_h(work_brightness_);               // hardware
   emit this->get_hue_h(work_hue_);
   emit this->get_contrast_h(work_contrast_);
   emit this->get_gain_h(work_gain_);
   emit this->get_exposure_h(work_exposure_);
   emit this->get_saturation_h(work_saturation_);
   
   emit this->get_brightness_s(work_brightness_s_);             // software
   emit this->get_contrast_s(work_contrast_s_);

}