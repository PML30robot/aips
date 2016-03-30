/* 
 * File:                   object_track.cpp
 * Author:                 Vladislav Kupyrin
 *                         Anton Fedotov
 * Export/import settings: Razuvaev Daniil
 * 
 * Created on 14 Ноябрь 2015 г., 17:42
 */

#include <opencv2/opencv.hpp>
#include "../connecter/connector.h"
#include "../settings/settings.h"

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
   double get_saturation() const;
   double get_hue() const;
   double get_contrast() const;
   double get_gain() const;
   double get_exposure() const;

   double get_brightness_s() const;
   double get_contrast_s() const;

   void printwindowinfo();
   
public slots:
   void export_settings_slt();
   void import_settings_slt();   
   
   void set_brightness_h_slt(double brightness);
   void set_saturation_h_slt(double saturation);
   void set_hue_h_slt       (double hue);
   void set_contrast_h_slt  (double contrast);
   void set_gain_h_slt      (double gain);
   void set_exposure_h_slt  (double gain);
   
   void set_brightness_s_slt(double brightness_s);
   void set_contrast_s_slt  (double saturation_s);

public:
   Q_SIGNAL void set_brightness_h_sig(double);
   Q_SIGNAL void set_hue_h_sig       (double);
   Q_SIGNAL void set_contrast_h_sig  (double);
   Q_SIGNAL void set_gain_h_sig      (double);
   Q_SIGNAL void set_exposure_h_sig  (double);
   Q_SIGNAL void set_saturation_h_sig(double);
   
   Q_SIGNAL void set_brightness_s_sig(double);
   Q_SIGNAL void set_contrast_s_sig  (double);

private:
   VideoCapture * capture_;

   double brightness_, saturation_, hue_, contrast_, gain_, exposure_;                                // hardware
   double brightness_s_, contrast_s_;                                                                 // software
   double work_brightness_, work_saturation_, work_hue_, work_contrast_, work_gain_, work_exposure_;  // hardware work
   double work_brightness_s_, work_contrast_s_;                                                       // software work
   
   connector_t * connector_;
   settings_t * settings_;
};