/* 
 * File:   connecter.h
 * Author: Razuvaev Daniil
 *
 * Created on 28 ноября 2015 г., 17:06
 */

#pragma once 

#include <QObject>
#include <QImage>

class connector_t : public QObject
{
   Q_OBJECT

public:
   connector_t( );

   /////////////
/////  SLOTS  /////////////////////////////////////////////////////////////////////////////////////////////
   /////////////

   // common

   Q_SLOT void export_settings_slt();
   Q_SLOT void import_settings_slt();

   Q_SLOT void get_image( QImage image );
   
//                           gui --> camera
   
   Q_SLOT void set_brightness_h_q_slt_g_cam(double brightness);
   Q_SLOT void set_contrast_h_q_slt_g_cam  (double contrast);
   Q_SLOT void set_saturation_h_q_slt_g_cam(double saturation);
   Q_SLOT void set_hue_h_q_slt_g_cam       (double hue);
   Q_SLOT void set_gain_h_q_slt_g_cam      (double gain);
   Q_SLOT void set_exposure_h_q_slt_g_cam  (double exposure);

   Q_SLOT void set_brightness_s_q_slt_g_cam(double brightness);
   Q_SLOT void set_contrast_s_q_slt_g_cam  (double contrast);

//                           camera --> gui
   
   Q_SLOT void set_brightness_h_q_slt_cam_g(double brightness);
   Q_SLOT void set_contrast_h_q_slt_cam_g  (double contrast);
   Q_SLOT void set_saturation_h_q_slt_cam_g(double saturation);
   Q_SLOT void set_hue_h_q_slt_cam_g       (double hue);
   Q_SLOT void set_gain_h_q_slt_cam_g      (double gain);
   Q_SLOT void set_exposure_h_q_slt_cam_g  (double exposure);

   Q_SLOT void set_brightness_s_q_slt_cam_g(double brightness);
   Q_SLOT void set_contrast_s_q_slt_cam_g  (double contrast);

//                   gui --> object detect (treck)
   
   Q_SLOT void set_min_h_q_slt_g_ot( int min_h );
   Q_SLOT void set_max_h_q_slt_g_ot( int max_h );
   Q_SLOT void set_min_s_q_slt_g_ot( int min_s );
   Q_SLOT void set_max_s_q_slt_g_ot( int max_s );
   Q_SLOT void set_min_v_q_slt_g_ot( int min_v );
   Q_SLOT void set_max_v_q_slt_g_ot( int max_v );
   Q_SLOT void set_min_size_q_slt_g_ot( int min_size );
   Q_SLOT void set_max_size_q_slt_g_ot( int max_size );
   
//                   object detect (treck) --> gui
   
   Q_SLOT void set_min_h_q_slt_ot_g( int min_h );
   Q_SLOT void set_max_h_q_slt_ot_g( int max_h );
   Q_SLOT void set_min_s_q_slt_ot_g( int min_s );
   Q_SLOT void set_max_s_q_slt_ot_g( int max_s );
   Q_SLOT void set_min_v_q_slt_ot_g( int min_v );
   Q_SLOT void set_max_v_q_slt_ot_g( int max_v );
   Q_SLOT void set_min_size_q_slt_ot_g( int min_size );
   Q_SLOT void set_max_size_q_slt_ot_g( int max_size );
  
//                                     gui --> PosSys
   Q_SLOT void set_Marker1_cam_coord_slt(int, int);
   Q_SLOT void set_Marker2_cam_coord_slt(int, int);
   Q_SLOT void set_Marker3_cam_coord_slt(int, int);
   
   Q_SLOT void set_Marker1_X_world_coord_slt (double);
   Q_SLOT void set_Marker2_X_world_coord_slt (double);
   Q_SLOT void set_Marker3_X_world_coord_slt (double);
   Q_SLOT void set_Marker1_Y_world_coord_slt (double);
   Q_SLOT void set_Marker2_Y_world_coord_slt (double);
   Q_SLOT void set_Marker3_Y_world_coord_slt (double);
   
   /////////////
///// SIGNALS /////////////////////////////////////////////////////////////////////////////////////////////
   /////////////

   // common 
   Q_SIGNAL void send_image( QImage image );

   Q_SIGNAL void stop_all_sig();
   
   Q_SIGNAL void export_settings_s();
   Q_SIGNAL void import_settings_s();
   
//                           gui --> camera

   Q_SIGNAL void set_brightness_h_q_sig_g_cam(double value);
   Q_SIGNAL void set_contrast_h_q_sig_g_cam  (double value);
   Q_SIGNAL void set_hue_h_q_sig_g_cam       (double value);
   Q_SIGNAL void set_saturation_h_q_sig_g_cam(double value);
   Q_SIGNAL void set_gain_h_q_sig_g_cam      (double value);
   Q_SIGNAL void set_exposure_h_q_sig_g_cam  (double value);
   
   Q_SIGNAL void set_brightness_s_q_sig_g_cam(double brightness_s); 
   Q_SIGNAL void set_contrast_s_q_sig_g_cam  (double contrast_s);
   
//                           camera --> gui
   
   Q_SIGNAL void set_brightness_h_q_sig_cam_g(double value);
   Q_SIGNAL void set_contrast_h_q_sig_cam_g  (double value);
   Q_SIGNAL void set_hue_h_q_sig_cam_g       (double value);
   Q_SIGNAL void set_saturation_h_q_sig_cam_g(double value);
   Q_SIGNAL void set_gain_h_q_sig_cam_g      (double value);
   Q_SIGNAL void set_exposure_h_q_sig_cam_g  (double value);
   
   Q_SIGNAL void set_brightness_s_q_sig_cam_g(double brightness_s); 
   Q_SIGNAL void set_contrast_s_q_sig_cam_g  (double contrast_s);


//                   object detect (treck) --> gui

   Q_SIGNAL void set_min_h_q_sig_ot_g( int min_h );
   Q_SIGNAL void set_max_h_q_sig_ot_g( int max_h );
   Q_SIGNAL void set_min_s_q_sig_ot_g( int min_s );
   Q_SIGNAL void set_max_s_q_sig_ot_g( int max_s );
   Q_SIGNAL void set_min_v_q_sig_ot_g( int min_v );
   Q_SIGNAL void set_max_v_q_sig_ot_g( int max_v );

   Q_SIGNAL void set_min_size_q_sig_ot_g( int min_size );
   Q_SIGNAL void set_max_size_q_sig_ot_g( int max_size );

//                   gui --> object detect (treck)

   Q_SIGNAL void set_min_h_q_sig_g_ot( int min_h );
   Q_SIGNAL void set_max_h_q_sig_g_ot( int max_h );
   Q_SIGNAL void set_min_s_q_sig_g_ot( int min_s );
   Q_SIGNAL void set_max_s_q_sig_g_ot( int max_s );
   Q_SIGNAL void set_min_v_q_sig_g_ot( int min_v );
   Q_SIGNAL void set_max_v_q_sig_g_ot( int max_v );

   Q_SIGNAL void set_min_size_q_sig_g_ot( int min_size );
   Q_SIGNAL void set_max_size_q_sig_g_ot( int max_size );
   
//                          gui --> PosSys
   
   Q_SIGNAL void set_Marker1_cam_coord_sig(int, int);
   Q_SIGNAL void set_Marker2_cam_coord_sig(int, int);
   Q_SIGNAL void set_Marker3_cam_coord_sig(int, int);
   
   Q_SIGNAL void set_Marker1_X_world_coord_sig(double);
   Q_SIGNAL void set_Marker2_X_world_coord_sig(double);
   Q_SIGNAL void set_Marker3_X_world_coord_sig(double);
   Q_SIGNAL void set_Marker1_Y_world_coord_sig(double);
   Q_SIGNAL void set_Marker2_Y_world_coord_sig(double);
   Q_SIGNAL void set_Marker3_Y_world_coord_sig(double);
   
private:
};