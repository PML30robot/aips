/* 
 * File:   gui.cpp
 * Author: Daniil Razuvaev
 *         Anton Fedotov
 * Created on 14 ноября 2015 г., 20:18
 */

#include <iostream>

#include <QPixmap>

#include "gui.h"
#include "../settings/settings.h"


gui_t::gui_t( connector_t * connector, QWidget * parent ) :
     ui_       (new Ui::gui)
   , connector_(connector)
{
   object_params_ = new object_params_t(connector);
   camera_settings_ = new camera_settings_t(connector);
   ui_->setupUi(this);
   
   connect(ui_->ot_obj_params, SIGNAL(triggered()), this, SLOT(call_obj_params()));
   connect(ui_->ot_camera_settings, SIGNAL(triggered()), this, SLOT(call_camera_settings()));
   
   connect(ui_->Import_settings, SIGNAL(triggered()),connector_, SLOT(import_settings_slt()));
   connect(ui_->Export_settings, SIGNAL(triggered()),this, SLOT(export_settings_slt()));
   
   connect(this, SIGNAL(export_settings_sig2()),connector_, SLOT(export_settings_slt()));
   
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

Q_SLOT void gui_t::call_camera_settings()
{
   camera_settings_->show();
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
   connect(obj_params_->max_value,      SIGNAL(valueChanged(int)), connector_, SLOT(set_max_v(int)));
   connect(obj_params_->min_size,       SIGNAL(valueChanged(int)), connector_, SLOT(set_min_size(int)));
   connect(obj_params_->max_size,       SIGNAL(valueChanged(int)), connector_, SLOT(set_max_size(int)));
   
   connect(connector_, SIGNAL(get_min_h_sig(int)),    this, SLOT(get_min_h_slt(int)));
   connect(connector_, SIGNAL(get_max_h_sig(int)),    this, SLOT(get_max_h_slt(int)));
   connect(connector_, SIGNAL(get_min_s_sig(int)),    this, SLOT(get_min_s_slt(int)));
   connect(connector_, SIGNAL(get_max_s_sig(int)),    this, SLOT(get_max_s_slt(int)));
   connect(connector_, SIGNAL(get_min_v_sig(int)),    this, SLOT(get_min_v_slt(int)));
   connect(connector_, SIGNAL(get_max_v_sig(int)),    this, SLOT(get_max_v_slt(int)));
   connect(connector_, SIGNAL(get_min_size_sig(int)), this, SLOT(get_min_size_slt(int)));
   connect(connector_, SIGNAL(get_max_size_sig(int)), this, SLOT(get_max_size_slt(int)));
}

camera_settings_t::camera_settings_t( connector_t * connector, QWidget * parent ) :
     camera_settings_(new Ui::camera_settings)
   , connector_      (connector)
{
   camera_settings_->setupUi(this);
   
   connect(camera_settings_->hContrast,  SIGNAL(valueChanged(double)), connector_, SLOT (set_contrast_hardware_slt(double)));
   connect(camera_settings_->hSaturation,SIGNAL(valueChanged(double)), connector_, SLOT (set_saturation_hardware(double)));
   connect(camera_settings_->hHue,       SIGNAL(valueChanged(double)), connector_, SLOT (set_hue_hardware(double)));
   connect(camera_settings_->hGain,      SIGNAL(valueChanged(double)), connector_, SLOT (set_gain_hardware(double)));
   connect(camera_settings_->hExposure,  SIGNAL(valueChanged(double)), connector_, SLOT (set_exposure_hardware(double)));
   connect(camera_settings_->hBrightness,SIGNAL(valueChanged(double)), connector_, SLOT(set_brightness_hardware_slt( double)));
   connect(camera_settings_->sBrightness,SIGNAL(valueChanged(double)), connector_, SLOT (set_brightness_software(double)));
   connect(camera_settings_->sContrast,  SIGNAL(valueChanged(double)), connector_, SLOT (set_contrast_software(double)));
   
   connect(connector_, SIGNAL(get_brightness_h(double)), this, SLOT(get_brightness_h_slt(double)));
   connect(connector_, SIGNAL(get_hue_h(double)),        this, SLOT(get_hue_h_slt(double)));
   connect(connector_, SIGNAL(get_contrast_h(double)),   this, SLOT(get_contrast_h_slt(double)));
   connect(connector_, SIGNAL(get_gain_h(double)),       this, SLOT(get_gain_h_slt(double)));
   connect(connector_, SIGNAL(get_exposure_h(double)),   this, SLOT(get_exposure_h_slt(double)));
   connect(connector_, SIGNAL(get_saturation_h(double)), this, SLOT(get_saturation_h_slt(double)));
   connect(connector_, SIGNAL(get_brightness_s(double)), this, SLOT(get_brightness_s_slt(double)));
   connect(connector_, SIGNAL(get_contrast_s(double)),   this, SLOT(get_contrast_s_slt(double)));
}

void gui_t::export_settings_slt()
{
   settings_t::clean_settings_file();
   emit export_settings_sig2();
}

void gui_t::import_settings_slt()
{
   emit import_settings_sig();
}

Q_SLOT void object_params_t::get_min_h_slt(int min_h){
   obj_params_->min_hue->setValue(min_h);
}

Q_SLOT void object_params_t::get_max_h_slt(int max_h){
   obj_params_->max_hue->setValue(max_h);
}

Q_SLOT void object_params_t::get_min_s_slt(int min_s){
   obj_params_->min_saturation->setValue(min_s);
}

Q_SLOT void object_params_t::get_max_s_slt(int max_s){
   obj_params_->max_saturation->setValue(max_s);
}

Q_SLOT void object_params_t::get_min_v_slt(int min_v){
   obj_params_->min_value->setValue(min_v);
}

Q_SLOT void object_params_t::get_max_v_slt(int max_v){
   obj_params_->max_value->setValue(max_v);
}

Q_SLOT void object_params_t::get_min_size_slt(int min_obj_size){
   obj_params_->min_size->setValue(min_obj_size);
}

Q_SLOT void object_params_t::get_max_size_slt(int max_size){
   obj_params_->max_size->setValue(max_size);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Q_SLOT void camera_settings_t::get_brightness_h_slt(double brightness_h){
   camera_settings_->hBrightness->setValue(brightness_h);
}

Q_SLOT void camera_settings_t::get_hue_h_slt(double hue_h){
   camera_settings_->hHue->setValue(hue_h);
}

Q_SLOT void camera_settings_t::get_contrast_h_slt(double contrast_h){
   camera_settings_->hContrast->setValue(contrast_h);
}

Q_SLOT void camera_settings_t::get_gain_h_slt(double gain_h){
   camera_settings_->hGain->setValue(gain_h);
}

Q_SLOT void camera_settings_t::get_exposure_h_slt(double exposure_h){
   camera_settings_->hExposure->setValue(exposure_h);
}

Q_SLOT void camera_settings_t::get_saturation_h_slt(double saturation_h){
   camera_settings_->hSaturation->setValue(saturation_h);
}


Q_SLOT void camera_settings_t::get_brightness_s_slt(double brightness_s){
   camera_settings_->sBrightness->setValue(brightness_s);
}

Q_SLOT void camera_settings_t::get_contrast_s_slt(double contrast_s){
   camera_settings_->sContrast->setValue(contrast_s);
}
