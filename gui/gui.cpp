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
   
   connect(ui_->ot_obj_params     , SIGNAL(triggered()), this, SLOT(call_obj_params()));
   connect(ui_->ot_camera_settings, SIGNAL(triggered()), this, SLOT(call_camera_settings()));
   
   connect(ui_->Import_settings, SIGNAL(triggered()),connector_, SLOT(import_settings_slt()));
   connect(ui_->Export_settings, SIGNAL(triggered()),this, SLOT(export_settings_slt()));
   
   connect(this, SIGNAL(export_settings_sig2()), connector_, SLOT(export_settings_slt()));
   
   connect(connector_, SIGNAL(send_image(QImage)), this, SLOT(redraw_image(QImage)));
}

void gui_t::closeEvent(QCloseEvent* event)
{
   emit connector_->stop_all_sig();

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
   //std::cout << "Q_SLOT void gui_t::redraw_image(QImage image) on gui.cpp is working" << endl;
   ui_->label->setPixmap(QPixmap::fromImage(image));
}

object_params_t::object_params_t( connector_t * connector, QWidget * parent ) :
   obj_params_ ( new Ui::obj_params )
 , connector_  ( connector )
{
   obj_params_->setupUi(this);
   
   connect(obj_params_->min_hue,        SIGNAL(valueChanged(int)), connector_, SLOT(set_min_h_q_slt_g_ot(int)));
   connect(obj_params_->max_hue,        SIGNAL(valueChanged(int)), connector_, SLOT(set_max_h_q_slt_g_ot(int)));
   connect(obj_params_->min_saturation, SIGNAL(valueChanged(int)), connector_, SLOT(set_min_s_q_slt_g_ot(int)));
   connect(obj_params_->max_saturation, SIGNAL(valueChanged(int)), connector_, SLOT(set_max_s_q_slt_g_ot(int)));
   connect(obj_params_->min_value,      SIGNAL(valueChanged(int)), connector_, SLOT(set_min_v_q_slt_g_ot(int)));
   connect(obj_params_->max_value,      SIGNAL(valueChanged(int)), connector_, SLOT(set_max_v_q_slt_g_ot(int)));
   connect(obj_params_->min_size,       SIGNAL(valueChanged(int)), connector_, SLOT(set_min_size_q_slt_g_ot(int)));
   connect(obj_params_->max_size,       SIGNAL(valueChanged(int)), connector_, SLOT(set_max_size_q_slt_g_ot(int)));
   
   connect(connector_, SIGNAL(set_min_h_q_sig_ot_g(int)),    this, SLOT(set_min_h_q_slt_ot_g(int)));
   connect(connector_, SIGNAL(set_max_h_q_sig_ot_g(int)),    this, SLOT(set_max_h_q_slt_ot_g(int)));
   connect(connector_, SIGNAL(set_min_s_q_sig_ot_g(int)),    this, SLOT(set_min_s_q_slt_ot_g(int)));
   connect(connector_, SIGNAL(set_max_s_q_sig_ot_g(int)),    this, SLOT(set_max_s_q_slt_ot_g(int)));
   connect(connector_, SIGNAL(set_min_v_q_sig_ot_g(int)),    this, SLOT(set_min_v_q_slt_ot_g(int)));
   connect(connector_, SIGNAL(set_max_v_q_sig_ot_g(int)),    this, SLOT(set_max_v_q_slt_ot_g(int)));
   connect(connector_, SIGNAL(set_min_size_q_sig_ot_g(int)), this, SLOT(set_min_size_q_slt_ot_g(int)));
   connect(connector_, SIGNAL(set_max_size_q_sig_ot_g(int)), this, SLOT(set_max_size_q_slt_ot_g(int)));
}

camera_settings_t::camera_settings_t( connector_t * connector, QWidget * parent ) :
     camera_settings_(new Ui::camera_settings)
   , connector_      (connector)
{
   camera_settings_->setupUi(this);
   
   connect(camera_settings_->hContrast,   SIGNAL(valueChanged(double)), connector_, SLOT(set_contrast_h_q_slt_g_cam  (double)));
   connect(camera_settings_->hSaturation, SIGNAL(valueChanged(double)), connector_, SLOT(set_saturation_h_q_slt_g_cam(double)));
   connect(camera_settings_->hHue,        SIGNAL(valueChanged(double)), connector_, SLOT(set_hue_h_q_slt_g_cam       (double)));
   connect(camera_settings_->hGain,       SIGNAL(valueChanged(double)), connector_, SLOT(set_gain_h_q_slt_g_cam      (double)));
   connect(camera_settings_->hExposure,   SIGNAL(valueChanged(double)), connector_, SLOT(set_exposure_h_q_slt_g_cam  (double)));
   connect(camera_settings_->hBrightness, SIGNAL(valueChanged(double)), connector_, SLOT(set_brightness_h_q_slt_g_cam(double)));
   connect(camera_settings_->sBrightness, SIGNAL(valueChanged(double)), connector_, SLOT(set_brightness_s_q_slt_g_cam(double)));
   connect(camera_settings_->sContrast,   SIGNAL(valueChanged(double)), connector_, SLOT(set_contrast_s_q_slt_g_cam  (double)));
   
   connect(connector_, SIGNAL(set_brightness_h_q_sig_cam_g(double)), this, SLOT(set_brightness_h_slt(double)));
   connect(connector_, SIGNAL(set_hue_h_q_sig_cam_g       (double)), this, SLOT(set_hue_h_slt       (double)));
   connect(connector_, SIGNAL(set_contrast_h_q_sig_cam_g  (double)), this, SLOT(set_contrast_h_slt  (double)));
   connect(connector_, SIGNAL(set_gain_h_q_sig_cam_g      (double)), this, SLOT(set_gain_h_slt      (double)));
   connect(connector_, SIGNAL(set_exposure_h_q_sig_cam_g  (double)), this, SLOT(set_exposure_h_slt  (double)));
   connect(connector_, SIGNAL(set_saturation_h_q_sig_cam_g(double)), this, SLOT(set_saturation_h_slt(double)));
   connect(connector_, SIGNAL(set_brightness_s_q_sig_cam_g(double)), this, SLOT(set_brightness_s_slt(double)));
   connect(connector_, SIGNAL(set_contrast_s_q_sig_cam_g  (double)), this, SLOT(set_contrast_s_slt  (double)));
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

Q_SLOT void object_params_t::set_min_h_q_slt_ot_g(int min_h){
   obj_params_->min_hue->setValue(min_h);
}

Q_SLOT void object_params_t::set_max_h_q_slt_ot_g(int max_h){
   obj_params_->max_hue->setValue(max_h);
}

Q_SLOT void object_params_t::set_min_s_q_slt_ot_g(int min_s){
   obj_params_->min_saturation->setValue(min_s);
}

Q_SLOT void object_params_t::set_max_s_q_slt_ot_g(int max_s){
   obj_params_->max_saturation->setValue(max_s);
}

Q_SLOT void object_params_t::set_min_v_q_slt_ot_g(int min_v){
   obj_params_->min_value->setValue(min_v);
}

Q_SLOT void object_params_t::set_max_v_q_slt_ot_g(int max_v){
   obj_params_->max_value->setValue(max_v);
}

Q_SLOT void object_params_t::set_min_size_q_slt_ot_g(int min_obj_size){
   obj_params_->min_size->setValue(min_obj_size);
}

Q_SLOT void object_params_t::set_max_size_q_slt_ot_g(int max_size){
   obj_params_->max_size->setValue(max_size);
}

////////////////////////////////////////camera_settings////////////////////////////////////////////////////////////////////

Q_SLOT void camera_settings_t::set_brightness_h_slt(double brightness_h){
   camera_settings_->hBrightness->setValue(brightness_h);
   std::cout << "GUI.CPP : Q_SLOT void camera_settings_t::set_brightness_h_slt(" << brightness_h << ")  (inported)" << endl;
}

Q_SLOT void camera_settings_t::set_hue_h_slt(double hue_h){
   camera_settings_->hHue->setValue(hue_h);
   std::cout << "GUI.CPP : Q_SLOT void camera_settings_t::set_hue_h_slt       (" << hue_h << ")  (inported)" << endl;
}

Q_SLOT void camera_settings_t::set_contrast_h_slt(double contrast_h){
   camera_settings_->hContrast->setValue(contrast_h);
   std::cout << "GUI.CPP : Q_SLOT void camera_settings_t::set_contrast_h_slt  (" << contrast_h << ")  (inported)" << endl;
}

Q_SLOT void camera_settings_t::set_gain_h_slt(double gain_h){
   camera_settings_->hGain->setValue(gain_h);
   std::cout << "GUI.CPP : Q_SLOT void camera_settings_t::set_gain_h_slt      (" << gain_h << ")  (inported)" << endl;
}

Q_SLOT void camera_settings_t::set_exposure_h_slt(double exposure_h){
   camera_settings_->hExposure->setValue(exposure_h);
   std::cout << "GUI.CPP : Q_SLOT void camera_settings_t::set_exposure_h_slt  (" << exposure_h << ")  (inported)" << endl;
}

Q_SLOT void camera_settings_t::set_saturation_h_slt(double saturation_h){
   camera_settings_->hSaturation->setValue(saturation_h);
   std::cout << "GUI.CPP : Q_SLOT void camera_settings_t::set_saturation_h_slt(" << saturation_h << ")  (inported)" << endl;
}


Q_SLOT void camera_settings_t::set_brightness_s_slt(double brightness_s){
   camera_settings_->sBrightness->setValue(brightness_s);
   std::cout << "GUI.CPP : Q_SLOT void camera_settings_t::set_brightness_s_slt(" << brightness_s << ")  (inported)" << endl;
}

Q_SLOT void camera_settings_t::set_contrast_s_slt(double contrast_s){
   camera_settings_->sContrast->setValue(contrast_s);
   std::cout << "GUI.CPP : Q_SLOT void camera_settings_t::set_contrast_s_slt  (" << contrast_s << ")  (inported)" << endl;
}
