/* 
 * File:   gui.cpp
 * Author: Anton Fedotov
 *         Daniil Razuvaev
 *
 * Created on 14 ноября 2015 г., 20:18
 */

#include <iostream>

#include <QPixmap>

#include "gui.h"


gui_t::gui_t( connector_t * connector, QWidget * parent ) :
     ui_       (new Ui::gui)
   , connector_(connector)
{
   object_params_ = new object_params_t(connector);
   camera_settings_ = new camera_settings_t(connector);
   ui_->setupUi(this);
   
   connect(ui_->ot_obj_params, SIGNAL(triggered()), this, SLOT(call_obj_params()));
   connect(ui_->ot_camera_settings, SIGNAL(triggered()), this, SLOT(call_camera_settings()));
   
   connect(connector_,  SIGNAL(send_image(QImage)), this, SLOT(redraw_image(QImage)));
}

void gui_t::closeEvent(QCloseEvent* event)
{
   connector_->stop_obj_track();
   object_params_->close();
   camera_settings_->close();
   delete object_params_;
   delete camera_settings_;
}

Q_SLOT void gui_t::call_obj_params()
{
   object_params_->show();
}


Q_SLOT void gui_t::redraw_image(QImage image)
{
   ui_->label->setPixmap(QPixmap::fromImage(image));
}

object_params_t::object_params_t( connector_t * connector, QWidget * parent ) :
   obj_params_ ( new Ui::obj_params )
 , connector_  (connector)
{
   obj_params_->setupUi(this);
   
   connect(obj_params_->min_hue,        SIGNAL(valueChanged(int)), connector_, SLOT(set_min_h(int)));
   connect(obj_params_->max_hue,        SIGNAL(valueChanged(int)), connector_, SLOT(set_max_h(int)));
   connect(obj_params_->min_saturation, SIGNAL(valueChanged(int)), connector_, SLOT(set_min_s(int)));
   connect(obj_params_->max_saturation, SIGNAL(valueChanged(int)), connector_, SLOT(set_max_s(int)));
   connect(obj_params_->min_value,      SIGNAL(valueChanged(int)), connector_, SLOT(set_min_v(int)));
   connect(obj_params_->min_value,      SIGNAL(valueChanged(int)), connector_, SLOT(set_max_v(int)));
   connect(obj_params_->min_size,       SIGNAL(valueChanged(int)), connector_, SLOT(set_min_size(int)));
   connect(obj_params_->max_size,       SIGNAL(valueChanged(int)), connector_, SLOT(set_max_size(int)));
}

Q_SLOT void gui_t::call_camera_settings()
{
   camera_settings_->show();
}

camera_settings_t::camera_settings_t( connector_t * connector, QWidget * parent ) :
     camera_settings_(new Ui::camera_settings)
   , connector_      (connector)
{
   camera_settings_->setupUi(this);
   
   connect(camera_settings_->hContrast,  SIGNAL(valueChanged(double)), connector_, SLOT (set_contrast_hardware(double)));
   connect(camera_settings_->hSaturation,SIGNAL(valueChanged(double)), connector_, SLOT (set_saturation_hardware(double)));
   connect(camera_settings_->hHue,       SIGNAL(valueChanged(double)), connector_, SLOT (set_hue_hardware(double)));
   connect(camera_settings_->hGain,      SIGNAL(valueChanged(double)), connector_, SLOT (set_gain_hardware(double)));
   connect(camera_settings_->hExposure,  SIGNAL(valueChanged(double)), connector_, SLOT (set_exposure_hardware(double)));
   connect(camera_settings_->hBrightness,SIGNAL(valueChanged(double)), connector_, SLOT(set_brightness_hardware( double)));
   
   connect(camera_settings_->sBrightness,SIGNAL(valueChanged(double)), connector_, SLOT (set_brightness_software(double)));
   connect(camera_settings_->sContrast,  SIGNAL(valueChanged(double)), connector_, SLOT (set_contrast_software(double)));
   
}