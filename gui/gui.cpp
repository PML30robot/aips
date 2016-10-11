/* 
 * File:   gui.cpp
 * Author: Daniil Razuvaev
 *         Anton Fedotov
 * Created on 14 ноября 2015 г., 20:18
 */

#include <iostream>

#include <iostream>
#include <sstream>

#include <QPixmap>
#include <unistd.h>
#include <stdlib.h>
#include <opencv2/imgproc/imgproc_c.h>
#include <opencv2/imgproc.hpp>

#include "gui.h"
#include "math.h"
#include "../settings/settings.h"


gui_t::gui_t( connector_t * connector, QWidget * parent ) :
     ui_       (new Ui::gui)
   , connector_(connector)
{
   StartSize = 0;
   StopSetStartSize = 0;

/////////////////////////////////////////MENU/////////////////////////////////////////
   m_pContextMenu = new QMenu(this);                                                //
                                                                                    //
// setWindowTitle("Show Menu on Right Click and Trigger Actions");                  //
   setContextMenuPolicy(Qt::CustomContextMenu);                                     //
                                                                                    //
   m_pAction1 = m_pContextMenu->addAction("Set marker 1");                          //
   m_pAction2 = m_pContextMenu->addAction("Set marker 2");                          //
   m_pAction3 = m_pContextMenu->addAction("Set marker 3");                          //
   m_pAction4 = m_pContextMenu->addAction("Set color mask");                          //
                                                                                    //
   connect(this, SIGNAL(customContextMenuRequested(const QPoint)),this,             //
      SLOT(contextMenuRequested(const QPoint&)));                                   //
   connect(m_pAction1,SIGNAL(triggered()),this,SLOT(setMarker1()));                 //
   connect(m_pAction2,SIGNAL(triggered()),this,SLOT(setMarker2()));                 //
   connect(m_pAction3,SIGNAL(triggered()),this,SLOT(setMarker3()));                 //
   connect(m_pAction4,SIGNAL(triggered()),this,SLOT(setColor()));                 //
//////////////////////////////////////////////////////////////////////////////////////
   object_params_   = new object_params_t(connector);
   camera_settings_ = new camera_settings_t(connector);
   calibration_coordinates_ = new calibration_coordinates_t(connector);
   setMouseTracking(true);
   ui_->setupUi(this);
   
   connect(ui_->ot_obj_params     ,         SIGNAL(triggered()), this, SLOT(call_obj_params()));
   connect(ui_->ot_camera_settings,         SIGNAL(triggered()), this, SLOT(call_camera_settings()));
   connect(ui_->ot_calibration_coordinates, SIGNAL(triggered()), this, SLOT(call_calibration_coordinates()));
   
   connect(ui_->Import_settings, SIGNAL(triggered()),connector_, SLOT(import_settings_slt()));
   connect(ui_->Export_settings, SIGNAL(triggered()),this      , SLOT(export_settings_slt()));
   
   connect(this, SIGNAL(export_settings_sig2()), connector_, SLOT(export_settings_slt()));
   
   connect(connector_, SIGNAL(send_image(QImage)), this, SLOT(redraw_image(QImage)));

   ui_->label->setMinimumSize(1,1);
   
   VideoLayout_ = new VideoLayout_t;
   VideoLayout_->setScaledContents(true);
   VideoLayout_->setMinimumSize(1,1);
   VideoLayout_->move(0, 0); // Переместить в нужные координаты.
   VideoLayout_->setParent(ui_->label);
   VideoLayout_->show();
   SizeProportionCoordinates = 1;
}

void gui_t::closeEvent(QCloseEvent* event)
{
   emit connector_->stop_all_sig();

   object_params_->close();
   camera_settings_->close();
   calibration_coordinates_->close();

   delete object_params_;
   delete camera_settings_;
   delete calibration_coordinates_;
}

Q_SLOT void gui_t::call_obj_params()
{
   object_params_->show();
}

Q_SLOT void gui_t::call_camera_settings()
{
   camera_settings_->show();
}

Q_SLOT void gui_t::call_calibration_coordinates()
{
   calibration_coordinates_->show();
}

Q_SLOT void gui_t::redraw_image(QImage image)
{
   IMAGE_ = image;
   VideoLayout_->setPixmap(QPixmap::fromImage(image));
   StartSize = 1;
   // берем пропорцию отсюда и сохраняем ее
   double H = image.size().height();
   double W = image.size().width();
   SizeImage = image.size();
   SizeProportion = H/W;
   if(StopSetStartSize == 0)
      setStartSize();
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
   std::cout << "GUI.CPP : Q_SLOT void camera_settings_t::setx = cursor().pos().x()_contrast_s_slt  (" << contrast_s << ")  (inported)" << endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void gui_t::mousePressEvent(QMouseEvent * event)
{
   QPoint coord = event->pos();
   //cout << coord.x() << " " << coord.y() << endl;
}
void VideoLayout_t::mousePressEvent(QMouseEvent * event)//слушатель VideoLayout_t - нажатие
{
   QPoint coord = event->pos();
   
   cout <<"Video ( "<< coord.x() << " x " << coord.y() <<" )" << endl;
   ClickPos = coord;
}
void gui_t::resizeEvent(QResizeEvent* event)
{
   QSize WindowSize = event->size();
   
   WindowSize.setWidth(WindowSize.width()-50);
   
   QSize NewLableSize;
   NewLableSize.setWidth(WindowSize.width());
   NewLableSize.setHeight(((WindowSize.width())*SizeProportion));
   
   static int flag = 1;
   if (flag)
   {
      flag = 0;
      int x = gui_t::window()->geometry().x();
      int y = gui_t::window()->geometry().y();
      gui_t::window()->setGeometry(x,y,NewLableSize.width()+50,NewLableSize.height()+50);
   }
   else
   {
      flag = 1;
      return;
   }
   if ((NewLableSize.width()>0)&&(NewLableSize.height()>0))
   {
      ui_->label->setFixedSize(NewLableSize);
      VideoLayout_->setFixedSize (NewLableSize);
      double NLSw = NewLableSize.width();
      double SIw  = SizeImage.width();
      SizeProportionCoordinates = NLSw/SIw;
      //cout<<SizeProportionCoordinates<<endl;
   }
}

void gui_t::setStartSize()
{
   if(StartSize != 0)
   {
      StopSetStartSize = 1;
      QSize WindowSize;
      WindowSize.setWidth(START_WINDOW_SIZE);
      QSize NewLableSize;
      NewLableSize.setWidth(WindowSize.width());
      NewLableSize.setHeight(((WindowSize.width())*SizeProportion));
      int x = gui_t::window()->geometry().x();
      int y = gui_t::window()->geometry().y();
      gui_t::window()->setGeometry(x,y,NewLableSize.width()+50,NewLableSize.height()+50);
      ui_->label->setFixedSize(NewLableSize);
      VideoLayout_->setFixedSize (NewLableSize);
   }
}

//////////////////////////////////////////MENU//////////////////////////////////////////
Q_SLOT void gui_t::contextMenuRequested(const QPoint& point)
{
   m_pContextMenu->popup(mapToGlobal(point));//painting ContextMenu
}

Q_SLOT void gui_t::setMarker1()
{
   QPoint ClickVar = VideoLayout_->getClickPos();
   double xx = ClickVar.x();
   double yy = ClickVar.y();
   double SPC = SizeProportionCoordinates; 
   xx = xx/SPC;
   yy = yy/SPC;
   int xint = xx/1;
   int yint = yy/1;
   calibration_coordinates_->set_Marker1_cam_coord(xint,yint);
}

Q_SLOT void gui_t::setMarker2()
{
   QPoint ClickVar = VideoLayout_->getClickPos();
   double xx = ClickVar.x();
   double yy = ClickVar.y();
   double SPC = SizeProportionCoordinates; 
   xx = xx/SPC;
   yy = yy/SPC;
   int xint = xx/1;
   int yint = yy/1;
   calibration_coordinates_->set_Marker2_cam_coord(xint,yint);
}

Q_SLOT void gui_t::setMarker3()
{
   QPoint ClickVar = VideoLayout_->getClickPos();
   double xx = ClickVar.x();
   double yy = ClickVar.y();
   double SPC = SizeProportionCoordinates; 
   xx = xx/SPC;
   yy = yy/SPC;
   int xint = xx/1;
   int yint = yy/1;
   calibration_coordinates_->set_Marker3_cam_coord(xint,yint);
}

Q_SLOT void gui_t::setColor()
{
   QPoint ClickVar = VideoLayout_->getClickPos();
   double xx = ClickVar.x();
   double yy = ClickVar.y();
   double SPC = SizeProportionCoordinates; 
   xx = xx/SPC;
   yy = yy/SPC;
   int x = xx/1;
   int y = yy/1;
   //////////////////
   QImage image = gui_t::IMAGE_;
   
   QPoint PixelPoint;
   PixelPoint.setX(x);
   PixelPoint.setY(y);
   
   QRgb RGB = image.pixel(PixelPoint);
   
   QColor color; color.setRgb(RGB);
   
   int R,G,B,A;
   color.getRgb(&R, &G, &B, &A);
   int H,S,V;
   color.getHsv(&H, &S, &V);
   if (H=-1)
      H = 0;
   cout << "Red =   " << R << endl
      <<   "Green = " << G << endl
      <<   "Blue =  " << B << endl;
   int SProcent = (int) S/255*100; // %
   int VProcent = (int) V/255*100; // %
   cout << "H (цветовой тон) = " << H << endl
      <<   "S (насыщенность) = " << SProcent << "%" << endl
      <<   "V (яркость) =      " << VProcent << "%" << endl;
   
   const int POGRESHNOST = 25;
   
   if (H<POGRESHNOST)
   {
      gui_t::object_params_->set_min_h_q_slt_ot_g(H);
      gui_t::object_params_->set_max_h_q_slt_ot_g(H+POGRESHNOST);
      gui_t::object_params_->set_min_h_q_slt_ot_g(H);
      gui_t::object_params_->set_max_h_q_slt_ot_g(H+POGRESHNOST);
      
   }
   if (H>255-POGRESHNOST)
   {
      gui_t::object_params_->set_min_h_q_slt_ot_g(H-POGRESHNOST);
      gui_t::object_params_->set_max_h_q_slt_ot_g(H);
      gui_t::object_params_->set_min_h_q_slt_ot_g(H-POGRESHNOST);
      gui_t::object_params_->set_max_h_q_slt_ot_g(H);
   }
   if ((H>POGRESHNOST) && (H<(255-POGRESHNOST)))
   {
      gui_t::object_params_->set_min_h_q_slt_ot_g(H-POGRESHNOST);
      gui_t::object_params_->set_max_h_q_slt_ot_g(H+POGRESHNOST);
      gui_t::object_params_->set_min_h_q_slt_ot_g(H-POGRESHNOST);
      gui_t::object_params_->set_max_h_q_slt_ot_g(H+POGRESHNOST);
   }
   
   if (S<POGRESHNOST)
   {
      gui_t::object_params_->set_min_s_q_slt_ot_g(S);
      gui_t::object_params_->set_max_s_q_slt_ot_g(S+POGRESHNOST);
      gui_t::object_params_->set_min_s_q_slt_ot_g(S);
      gui_t::object_params_->set_max_s_q_slt_ot_g(S+POGRESHNOST);
      
   }
   if (S>255-POGRESHNOST)
   {
      gui_t::object_params_->set_min_s_q_slt_ot_g(S-POGRESHNOST);
      gui_t::object_params_->set_max_s_q_slt_ot_g(S);
      gui_t::object_params_->set_min_s_q_slt_ot_g(S-POGRESHNOST);
      gui_t::object_params_->set_max_s_q_slt_ot_g(S);
   }
   if ((S>POGRESHNOST) && (S<(255-POGRESHNOST)))
   {
      gui_t::object_params_->set_min_s_q_slt_ot_g(S-POGRESHNOST);
      gui_t::object_params_->set_max_s_q_slt_ot_g(S+POGRESHNOST);
      gui_t::object_params_->set_min_s_q_slt_ot_g(S-POGRESHNOST);
      gui_t::object_params_->set_max_s_q_slt_ot_g(S+POGRESHNOST);
   }
   
   if (V<POGRESHNOST)
   {
      gui_t::object_params_->set_min_v_q_slt_ot_g(V);
      gui_t::object_params_->set_max_v_q_slt_ot_g(V+POGRESHNOST);
      gui_t::object_params_->set_min_v_q_slt_ot_g(V);
      gui_t::object_params_->set_max_v_q_slt_ot_g(V+POGRESHNOST);
   }
   if (V>255-POGRESHNOST)
   {
      gui_t::object_params_->set_min_v_q_slt_ot_g(V-POGRESHNOST);
      gui_t::object_params_->set_max_v_q_slt_ot_g(V);
      gui_t::object_params_->set_min_v_q_slt_ot_g(V-POGRESHNOST);
      gui_t::object_params_->set_max_v_q_slt_ot_g(V);
   }
   if ((V>POGRESHNOST) && (V<(255-POGRESHNOST)))
   {
      gui_t::object_params_->set_min_v_q_slt_ot_g(V-POGRESHNOST);
      gui_t::object_params_->set_max_v_q_slt_ot_g(V+POGRESHNOST);
      gui_t::object_params_->set_min_v_q_slt_ot_g(V-POGRESHNOST);
      gui_t::object_params_->set_max_v_q_slt_ot_g(V+POGRESHNOST);
   }
}

//void object_params_t::set_min_max_hue_ui_obj_params (int min, int max)
//{
//   Ui_obj_params->min_hue->setValue(min);
//   Ui_obj_params->max_hue->setValue(max);
//}
////////////////////////////////////////////////////////////////////////////////////////

calibration_coordinates_t::calibration_coordinates_t( connector_t * connector, QWidget * parent ) :
   calibration_coordinates_ ( new Ui::calibration_coordinates )
  , connector_  ( connector )
{
//   QPoint Marker1_CamCoordinates;                |
//   QPoint Marker2_CamCoordinates;                |
//   QPoint Marker3_CamCoordinates;                |
//                                                 |>   MARKERS   <<<<<-----
//   QPoint Marker1_WorldCoordinates;              |
//   QPoint Marker2_WorldCoordinates;              |
//   QPoint Marker3_WorldCoordinates;              |
   
   calibration_coordinates_->setupUi(this);
   
   connect(this, SIGNAL(set_Marker1_cam_coord_sig(int, int)), connector_, SLOT(set_Marker1_cam_coord_slt(int, int)));
   connect(this, SIGNAL(set_Marker2_cam_coord_sig(int, int)), connector_, SLOT(set_Marker2_cam_coord_slt(int, int)));
   connect(this, SIGNAL(set_Marker3_cam_coord_sig(int, int)), connector_, SLOT(set_Marker3_cam_coord_slt(int, int)));
   
   connect(calibration_coordinates_->WorldCoordMark1_X, SIGNAL(valueChanged(double)),
               this, SLOT(set_Marker1_X_world_coord_slt(double)));
   connect(calibration_coordinates_->WorldCoordMark2_X, SIGNAL(valueChanged(double)),
               this, SLOT(set_Marker2_X_world_coord_slt(double)));
   connect(calibration_coordinates_->WorldCoordMark3_X, SIGNAL(valueChanged(double)),
               this, SLOT(set_Marker3_X_world_coord_slt(double)));
   connect(calibration_coordinates_->WorldCoordMark1_Y, SIGNAL(valueChanged(double)),
               this, SLOT(set_Marker1_Y_world_coord_slt(double)));
   connect(calibration_coordinates_->WorldCoordMark2_Y, SIGNAL(valueChanged(double)),
               this, SLOT(set_Marker2_Y_world_coord_slt(double)));
   connect(calibration_coordinates_->WorldCoordMark3_Y, SIGNAL(valueChanged(double)),
               this, SLOT(set_Marker3_Y_world_coord_slt(double)));
   
   connect(this, SIGNAL(set_Marker1_X_world_coord_sig(double)), connector_, SLOT(set_Marker1_X_world_coord_slt(double)));
   connect(this, SIGNAL(set_Marker2_X_world_coord_sig(double)), connector_, SLOT(set_Marker2_X_world_coord_slt(double)));
   connect(this, SIGNAL(set_Marker3_X_world_coord_sig(double)), connector_, SLOT(set_Marker3_X_world_coord_slt(double)));
   connect(this, SIGNAL(set_Marker1_Y_world_coord_sig(double)), connector_, SLOT(set_Marker1_Y_world_coord_slt(double)));
   connect(this, SIGNAL(set_Marker2_Y_world_coord_sig(double)), connector_, SLOT(set_Marker2_Y_world_coord_slt(double)));
   connect(this, SIGNAL(set_Marker3_Y_world_coord_sig(double)), connector_, SLOT(set_Marker3_Y_world_coord_slt(double)));
   
   
}

void calibration_coordinates_t::set_Marker1_cam_coord(int x, int y)
{
   if(Marker_Cam_Set(x,y))
   {
      Marker1_CamCoordinates.setX(x);
      Marker1_CamCoordinates.setY(y);
      calibration_coordinates_->CameraCoordMark1_X->setNum(x);
      calibration_coordinates_->CameraCoordMark1_Y->setNum(y);
      
      emit set_Marker1_cam_coord_sig(x, y);//GUI >>CONNECTER >>PosSys
      
      cout<<"The position marker was successfully updated"<<endl;
   }
}

void calibration_coordinates_t::set_Marker2_cam_coord(int x, int y)
{
   if(Marker_Cam_Set(x,y))
   {
      Marker2_CamCoordinates.setX(x);
      Marker2_CamCoordinates.setY(y);
      calibration_coordinates_->CameraCoordMark2_X->setNum(x);
      calibration_coordinates_->CameraCoordMark2_Y->setNum(y);
      
      emit set_Marker2_cam_coord_sig(x, y);//GUI >>CONNECTER >>PosSys
      
      cout<<"The position marker was successfully updated"<<endl;
   }
}

void calibration_coordinates_t::set_Marker3_cam_coord(int x, int y)
{
   if(Marker_Cam_Set(x,y))
   {
      Marker3_CamCoordinates.setX(x);
      Marker3_CamCoordinates.setY(y);
      calibration_coordinates_->CameraCoordMark3_X->setNum(x);
      calibration_coordinates_->CameraCoordMark3_Y->setNum(y);
      
      emit set_Marker3_cam_coord_sig(x, y);//GUI >> CONNECTER >> PosSys
      
      cout<<"The position marker was successfully updated"<<endl;
   }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Q_SLOT void calibration_coordinates_t::set_Marker1_X_world_coord_slt (double x)
{
      Marker1_WorldCoordinates.setX(x);
      emit set_Marker1_X_world_coord_sig(x);
      
      cout<<"The position marker was successfully updated"<<endl;
}

Q_SLOT void calibration_coordinates_t::set_Marker2_X_world_coord_slt (double x)
{
      Marker2_WorldCoordinates.setX(x);
      emit set_Marker2_X_world_coord_sig(x);
      
      cout<<"The position marker was successfully updated"<<endl;
}

Q_SLOT void calibration_coordinates_t::set_Marker3_X_world_coord_slt (double x)
{
      Marker3_WorldCoordinates.setX(x);
      emit set_Marker3_X_world_coord_sig(x);
      
      cout<<"The position marker was successfully updated"<<endl;
}

Q_SLOT void calibration_coordinates_t::set_Marker1_Y_world_coord_slt (double y)
{
      Marker1_WorldCoordinates.setY(y);
      emit set_Marker1_Y_world_coord_sig(y);
      
      cout<<"The position marker was successfully updated"<<endl;
}

Q_SLOT void calibration_coordinates_t::set_Marker2_Y_world_coord_slt (double y)
{
      Marker2_WorldCoordinates.setY(y);
      emit set_Marker2_Y_world_coord_sig(y);
      
      cout<<"The position marker was successfully updated"<<endl;
}

Q_SLOT void calibration_coordinates_t::set_Marker3_Y_world_coord_slt (double y)
{
      Marker3_WorldCoordinates.setY(y);
      emit set_Marker3_Y_world_coord_sig(y);
      
      cout<<"The position marker was successfully updated"<<endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool calibration_coordinates_t::Marker_Cam_Set(int x, int y){
   if ((x==Marker1_CamCoordinates.x())&&(y==Marker1_CamCoordinates.y())){
      cout<<"The marker position has not been changed!"<<endl;
      return false;
   }
   if ((x==Marker2_CamCoordinates.x())&&(y==Marker2_CamCoordinates.y())){
      cout<<"The marker position has not been changed!"<<endl;
      return false;
   }
   if ((x==Marker3_CamCoordinates.x())&&(y==Marker3_CamCoordinates.y())){
      cout<<"The marker position has not been changed!"<<endl;
      return false;
   }
   return true;
}

VideoLayout_t::VideoLayout_t(){
   setScaledContents(true);
   setMinimumSize(1,1);
   setMouseTracking(true);
}
QPoint VideoLayout_t::getClickPos(){
   return ClickPos;
}