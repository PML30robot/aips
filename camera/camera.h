/* 
 * File:            object_track.cpp
 * Author:          Vladislav Kupyrin
 *                  Anton Fedotov
 * Export settings: Razuvaev Daniil
 * 
 * Created on 14 Ноябрь 2015 г., 17:42
 */

#include <opencv2/opencv.hpp>
#include "../connecter/connector.h"
#include "../settings/settings.h"
//#include "../connecter/connector.h"

using namespace cv;

#pragma once

class camera_t: public QObject
{
   Q_OBJECT
public:
   camera_t( connector_t * connector );
   ~camera_t();
   
   void get_frame( Mat & frame );
   double get_brightness() const;
   void set_brightness( double brightness_ );
   double get_saturation() const;
   void set_saturation( double saturation_ );
   double get_hue() const;
   void set_hue( double hue_ );
   double get_contrast() const;
   void set_contrast( double contrast_ );
   double get_gain() const;
   void set_gain( double gain_ );
   double get_exposure() const;
   void set_exposure( double gain_ );
   
   double get_brightness_s() const;
   void set_brightness_s( double brightness_s );
   double get_contrast_s() const;
   void set_contrast_s( double saturation_s );
   
   //slot for signal export settings
   Q_SLOT void export_settings_slt();
   
private:
   VideoCapture * capture_;
   double brightness_, saturation_, hue_, contrast_, gain_, exposure_; // hardware
   double brightness_s_, contrast_s_;                                  // software
   
   connector_t * connector_;
   settings_t * settings_;
};