/* 
 * File:                   object_track.cpp
 * Author:                 Anton Fedotov
 *                         Razuvaev Daniil
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
   , hue_         (0.5)
   , contrast_    (0)
   , gain_        (0)
   , exposure_    (0)
   , brightness_s_(1)
   , contrast_s_  (1)
   , brightness_  (0.5)
   , work_saturation_  (1)
   , work_hue_         (0.5)
   , work_contrast_    (1)
   , work_gain_        (1)
   , work_exposure_    (1)
   , work_brightness_s_(1)
   , work_contrast_s_  (1)
   , work_brightness_  (0.5)
{
   capture_ = new VideoCapture(0);// 0 - встроенная камера, 1 - внешняя камера ...
   
   brightness_   = capture_->get(CV_CAP_PROP_BRIGHTNESS);
   contrast_     = capture_->get(CV_CAP_PROP_CONTRAST);
   saturation_   = capture_->get(CV_CAP_PROP_SATURATION);
   hue_          = capture_->get(CV_CAP_PROP_HUE);
   gain_         = capture_->get(CV_CAP_PROP_GAIN);
   exposure_     = capture_->get(CV_CAP_PROP_EXPOSURE);

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

   connect(this, SIGNAL(set_brightness_h_sig(double)), connector_, SLOT(set_brightness_h_q_slt_cam_g(double)));
   connect(this, SIGNAL(set_hue_h_sig       (double)), connector_, SLOT(set_hue_h_q_slt_cam_g(double)));
   connect(this, SIGNAL(set_contrast_h_sig  (double)), connector_, SLOT(set_contrast_h_q_slt_cam_g(double)));
   connect(this, SIGNAL(set_gain_h_sig      (double)), connector_, SLOT(set_gain_h_q_slt_cam_g(double)));
   connect(this, SIGNAL(set_exposure_h_sig  (double)), connector_, SLOT(set_exposure_h_q_slt_cam_g(double)));
   connect(this, SIGNAL(set_saturation_h_sig(double)), connector_, SLOT(set_saturation_h_q_slt_cam_g(double)));
   
   connect(this, SIGNAL(set_brightness_s_sig(double)), connector_, SLOT(set_brightness_s_q_slt_cam_g(double)));
   connect(this, SIGNAL(set_contrast_s_sig  (double)), connector_, SLOT(set_contrast_s_q_slt_cam_g(double)));
   
   connect(connector_, SIGNAL(set_brightness_h_q_sig_g_cam(double)), this, SLOT(set_brightness_h_slt(double)));
   connect(connector_, SIGNAL(set_hue_h_q_sig_g_cam(double))       , this, SLOT(set_hue_h_slt       (double)));
   connect(connector_, SIGNAL(set_contrast_h_q_sig_g_cam(double))  , this, SLOT(set_contrast_h_slt  (double)));
   connect(connector_, SIGNAL(set_gain_h_q_sig_g_cam(double))      , this, SLOT(set_gain_h_slt      (double)));
   connect(connector_, SIGNAL(set_exposure_h_q_sig_g_cam(double))  , this, SLOT(set_exposure_h_slt  (double)));
   connect(connector_, SIGNAL(set_saturation_h_q_sig_g_cam(double)), this, SLOT(set_saturation_h_slt(double)));
   
   connect(connector_, SIGNAL(set_brightness_s_q_sig_g_cam(double)), this, SLOT(set_brightness_s_slt(double)));
   connect(connector_, SIGNAL(set_contrast_s_q_sig_g_cam(double))  , this, SLOT(set_contrast_s_slt  (double)));
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

Q_SLOT void camera_t::set_gain_h_slt( double work_gain )
{
   capture_->set(CV_CAP_PROP_GAIN, work_gain);
   work_gain_ = work_gain;
   camera_t::printwindowinfo();
}

double camera_t::get_gain( ) const
{
   return capture_->get(CV_CAP_PROP_GAIN);
}

Q_SLOT void camera_t::set_exposure_h_slt( double work_exposure)
{
   capture_->set(CV_CAP_PROP_EXPOSURE, work_exposure);
   work_exposure_ = work_exposure;
   camera_t::printwindowinfo();
}

double camera_t::get_exposure( ) const
{
   return capture_->get(CV_CAP_PROP_EXPOSURE);
}

Q_SLOT void camera_t::set_contrast_h_slt( double work_contrast )
{
   capture_->set(CV_CAP_PROP_CONTRAST, work_contrast);
   work_contrast_ = work_contrast;
   camera_t::printwindowinfo();
}

double camera_t::get_contrast( ) const
{
   return capture_->get(CV_CAP_PROP_CONTRAST);
}

Q_SLOT void camera_t::set_hue_h_slt( double work_hue )
{
   capture_->set(CV_CAP_PROP_HUE, work_hue);
   work_hue_ = work_hue;
   camera_t::printwindowinfo();
}

double camera_t::get_hue( ) const
{
   return capture_->get(CV_CAP_PROP_HUE);
}

Q_SLOT void camera_t::set_saturation_h_slt( double work_saturation )
{
   capture_->set(CV_CAP_PROP_SATURATION, work_saturation);
   work_saturation_ = work_saturation;
   camera_t::printwindowinfo();
}

double camera_t::get_saturation( ) const
{
   return capture_->get(CV_CAP_PROP_SATURATION);
}

Q_SLOT void camera_t::set_brightness_h_slt( double work_brightness )
{
   work_brightness_ = work_brightness;
   capture_->set(CV_CAP_PROP_BRIGHTNESS, work_brightness);
   camera_t::printwindowinfo();
}

double camera_t::get_brightness( ) const
{
   return capture_->get(CV_CAP_PROP_BRIGHTNESS);
}

void camera_t::get_frame( Mat & frame )
{
   capture_->read(frame);
   //frame = cv::imread("picture.png");
   frame.convertTo(frame, -1, contrast_s_, brightness_s_);
}

Q_SLOT void camera_t::set_brightness_s_slt( double work_brightness_s )
{
   brightness_s_ = work_brightness_s;
   work_brightness_s_ = work_brightness_s;
   camera_t::printwindowinfo();
}

double camera_t::get_brightness_s( ) const
{
   return brightness_s_;
}

Q_SLOT void camera_t::set_contrast_s_slt( double work_contrast_s )
{
   contrast_s_ = work_contrast_s;
   work_contrast_s_ = work_contrast_s;
   camera_t::printwindowinfo();
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
   settings_->import_settings();
  
   capture_->set(CV_CAP_PROP_BRIGHTNESS, work_brightness_);
   capture_->set(CV_CAP_PROP_CONTRAST, work_contrast_);
   capture_->set(CV_CAP_PROP_SATURATION, work_saturation_);
   capture_->set(CV_CAP_PROP_HUE, work_hue_);
   capture_->set(CV_CAP_PROP_GAIN, work_gain_);
   capture_->set(CV_CAP_PROP_EXPOSURE, work_exposure_);
   

   emit this->set_brightness_h_sig (work_brightness_);               // hardware
   emit this->set_hue_h_sig        (work_hue_);
   emit this->set_contrast_h_sig   (work_contrast_);
   emit this->set_gain_h_sig       (work_gain_);
   emit this->set_exposure_h_sig   (work_exposure_);
   emit this->set_saturation_h_sig (work_saturation_);
   
   emit this->set_brightness_s_sig (work_brightness_s_);             // software
   emit this->set_contrast_s_sig   (work_contrast_s_);
   
   std::cout<<endl<<"CAMERA.cpp - Q_SLOT void camera_t::import_settings_slt() :"<<endl<<"  hardware settings:"<<endl;
   std::cout<<"           - work_brightness_   "<< work_brightness_ <<endl;
   std::cout<<"           - work_contrast_     "<< work_contrast_ <<endl;
   std::cout<<"           - work_saturation_   "<< work_saturation_ <<endl;
   std::cout<<"           - work_hue_          "<< work_hue_ <<endl;
   std::cout<<"           - work_gain_         "<< work_gain_ <<endl;
   std::cout<<"           - work_exposure_     "<< work_exposure_ <<endl;
   std::cout<<"  software settings:"<<endl;
   std::cout<<"           - work_brightness_s_ "<< work_brightness_s_ <<endl;
   std::cout<<"           - work_contrast_s_   "<< work_contrast_s_ <<endl <<endl;
}

void camera_t::printwindowinfo ()
{
   std::cout << "-------------------camera.cpp-------------------"<<endl
             << "WINDOW  : Change image parameters in the window:"<<endl
             << "          - contrast:   "<< work_contrast_   <<endl
             << "          - brightness: "<< work_brightness_ <<endl
             << "          - saturation: "<< work_saturation_ <<endl
             << "          - hue:        "<< work_hue_        <<endl
             << "          - gain:       "<< work_gain_       <<endl
             << "          - exposure:   "<< work_exposure_   <<endl
             << "------------------------------------------------"<<endl;
}