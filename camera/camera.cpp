/* 
 * File:   object_track.cpp
 * Author: Vladislav Kupyrin
 *         Anton Fedotov
 *
 * Created on 14 Ноябрь 2015 г., 17:42
 */

#include <opencv2/opencv.hpp>
#include <opencv2/videoio.hpp>

#include "camera.h"
#include "../connecter/../connecter/../connecter/connector.h"


using namespace cv;

camera_t::camera_t()
{
   capture_ = new VideoCapture(0);
   
   brightness_ = capture_->get(CV_CAP_PROP_BRIGHTNESS);
   contrast_ = capture_->get(CV_CAP_PROP_CONTRAST);
   saturation_ = capture_->get(CV_CAP_PROP_SATURATION);
   hue_ = capture_->get(CV_CAP_PROP_HUE);
   gain_ = capture_->get(CV_CAP_PROP_GAIN);
}

camera_t::~camera_t()
{
   brightness_ = capture_->get(CV_CAP_PROP_BRIGHTNESS);
   contrast_ = capture_->get(CV_CAP_PROP_CONTRAST);
   saturation_ = capture_->get(CV_CAP_PROP_SATURATION);
   hue_ = capture_->get(CV_CAP_PROP_HUE);
   gain_ = capture_->get(CV_CAP_PROP_GAIN);
   delete capture_;
}


void camera_t::set_gain( double gain_ )
{
   capture_->set(CV_CAP_PROP_GAIN, gain_);

}

double camera_t::get_gain( ) const
{
   return capture_->get(CV_CAP_PROP_GAIN);
}

void camera_t::set_contrast( double contrast_ )
{
   capture_->set(CV_CAP_PROP_CONTRAST, contrast_);
}

double camera_t::get_contrast( ) const
{
   return capture_->get(CV_CAP_PROP_CONTRAST);
}

void camera_t::set_hue( double hue_ )
{
   capture_->set(CV_CAP_PROP_HUE, hue_);
}

double camera_t::get_hue( ) const
{
   return capture_->get(CV_CAP_PROP_HUE);
}

void camera_t::set_saturation( double saturation_ )
{
   capture_->set(CV_CAP_PROP_SATURATION, saturation_);
}

double camera_t::get_saturation( ) const
{
   return capture_->get(CV_CAP_PROP_SATURATION);
}

void camera_t::set_brightness( double brightness_ )
{
   capture_->set(CV_CAP_PROP_BRIGHTNESS, brightness_);
}

double camera_t::get_brightness( ) const
{
   return capture_->get(CV_CAP_PROP_BRIGHTNESS);
}

void camera_t::get_frame( Mat & frame )
{
   capture_->read(frame); 
}

