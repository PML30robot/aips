/* 
 * File:   connecter.cpp
 * Author: Razuvaev Daniil
 *
 * Created on 28 ноября 2015 г., 17:09
 */

#include <iostream>

#include "connector.h"
#include "../camera/camera.h"

using namespace std;

connector_t::connector_t()
{
}

/////////////////////////
//        COMMON       /////////////////////////////////////////////////////////////////////////////////////
/////////////////////////

Q_SLOT void connector_t::export_settings_slt()
{
   emit connector_t::export_settings_s();
}

Q_SLOT void connector_t::import_settings_slt()
{
   emit connector_t::import_settings_s();
}

Q_SLOT void connector_t::get_image( QImage image )
{
   emit send_image(image);
}

/////////////////////////
//        CAMERA       /////////////////////////////////////////////////////////////////////////////////////
/////////////////////////

Q_SLOT void connector_t::set_brightness_h_q_slt_g_cam( double value )
{
   emit set_brightness_h_q_sig_g_cam( value );
}

Q_SLOT void connector_t::set_contrast_h_q_slt_g_cam( double value )
{
   emit set_contrast_h_q_sig_g_cam( value );
}


Q_SLOT void connector_t::set_saturation_h_q_slt_g_cam( double value )
{
   emit set_saturation_h_q_sig_g_cam( value );
}

Q_SLOT void connector_t::set_hue_h_q_slt_g_cam( double value )
{
   emit set_hue_h_q_sig_g_cam( value );
}

Q_SLOT void connector_t::set_gain_h_q_slt_g_cam( double value )
{
   emit set_gain_h_q_sig_g_cam( value );
}

Q_SLOT void connector_t::set_exposure_h_q_slt_g_cam( double value )
{
   emit set_exposure_h_q_sig_g_cam( value );
}

Q_SLOT void connector_t::set_brightness_s_q_slt_g_cam( double value )
{
   emit set_brightness_s_q_sig_g_cam( value );
}

Q_SLOT void connector_t::set_contrast_s_q_slt_g_cam(double value )
{
   emit set_contrast_s_q_sig_g_cam( value );
}

Q_SLOT void connector_t::set_brightness_h_q_slt_cam_g(double brightness_h)
{
   emit set_brightness_h_q_sig_cam_g(brightness_h);
}

Q_SLOT void connector_t::set_hue_h_q_slt_cam_g(double hue_h)
{
   emit set_hue_h_q_sig_cam_g(hue_h);
}

Q_SLOT void connector_t::set_contrast_h_q_slt_cam_g(double contrast_h)
{
   emit set_contrast_h_q_sig_cam_g(contrast_h);
}

Q_SLOT void connector_t::set_gain_h_q_slt_cam_g(double gain_h)
{
   emit set_gain_h_q_sig_cam_g(gain_h);
}

Q_SLOT void connector_t::set_exposure_h_q_slt_cam_g(double exposure_h)
{
   emit set_exposure_h_q_sig_cam_g(exposure_h);
}

Q_SLOT void connector_t::set_saturation_h_q_slt_cam_g(double saturation_h)
{
   emit set_saturation_h_q_sig_cam_g(saturation_h);
}

Q_SLOT void connector_t::set_brightness_s_q_slt_cam_g(double brightness_s)
{
   emit set_brightness_s_q_sig_cam_g(brightness_s);
} 

Q_SLOT void connector_t::set_contrast_s_q_slt_cam_g(double contrast_s)
{
   emit set_contrast_s_q_sig_cam_g(contrast_s);
}

/////////////////////////
//      OBJ DETECT     /////////////////////////////////////////////////////////////////////////////////////
/////////////////////////

Q_SLOT void connector_t::set_min_h_q_slt_g_ot(int min_h)
{
   emit set_min_h_q_sig_g_ot( min_h );
}

Q_SLOT void connector_t::set_max_h_q_slt_g_ot(int max_h)
{
   emit set_max_h_q_sig_g_ot( max_h );
}

Q_SLOT void connector_t::set_min_s_q_slt_g_ot(int min_s)
{
   emit set_min_s_q_sig_g_ot( min_s );   
}

Q_SLOT void connector_t::set_max_s_q_slt_g_ot(int max_s)
{
   emit set_max_s_q_sig_g_ot( max_s );   
}

Q_SLOT void connector_t::set_min_v_q_slt_g_ot(int min_v)
{
   emit set_min_v_q_sig_g_ot( min_v );   
}

Q_SLOT void connector_t::set_max_v_q_slt_g_ot(int max_v)
{
   emit set_max_v_q_sig_g_ot( max_v );   
}

Q_SLOT void connector_t::set_min_size_q_slt_g_ot(int min_size)
{
   emit set_min_size_q_sig_g_ot( min_size );   
}

Q_SLOT void connector_t::set_max_size_q_slt_g_ot(int max_size)
{
   emit set_max_size_q_sig_g_ot( max_size );   
}

Q_SLOT void connector_t::set_min_h_q_slt_ot_g(int min_h)
{
   emit set_min_h_q_sig_ot_g( min_h );
}

Q_SLOT void connector_t::set_max_h_q_slt_ot_g(int max_h)
{
   emit set_max_h_q_sig_ot_g( max_h );
}

Q_SLOT void connector_t::set_min_s_q_slt_ot_g(int min_s)
{
   emit set_min_s_q_sig_ot_g( min_s );
}

Q_SLOT void connector_t::set_max_s_q_slt_ot_g(int max_s)
{
   emit set_max_s_q_sig_ot_g( max_s );
}

Q_SLOT void connector_t::set_min_v_q_slt_ot_g(int min_v)
{
   emit set_min_v_q_sig_ot_g( min_v );
}

Q_SLOT void connector_t::set_max_v_q_slt_ot_g(int max_v)
{
   emit set_max_v_q_sig_ot_g( max_v );
}

Q_SLOT void connector_t::set_min_size_q_slt_ot_g(int min_obj_size_)
{
   emit set_min_size_q_sig_ot_g( min_obj_size_ );
}

Q_SLOT void connector_t::set_max_size_q_slt_ot_g(int max_size)
{
   emit set_max_size_q_sig_ot_g( max_size );
}

/////////////////////////
//        PosSys       /////////////////////////////////////////////////////////////////////////////////////
/////////////////////////

// Camera coordinations

Q_SLOT void connector_t::set_Marker1_cam_coord_slt(int x, int y)
{
   emit set_Marker1_cam_coord_sig(x, y);
}

Q_SLOT void connector_t::set_Marker2_cam_coord_slt(int x, int y)
{
   emit set_Marker2_cam_coord_sig(x, y);
}

Q_SLOT void connector_t::set_Marker3_cam_coord_slt(int x, int y)
{
   emit set_Marker3_cam_coord_sig(x, y);
}

// World coordinations

Q_SLOT void connector_t::set_Marker1_X_world_coord_slt (double x)
{
   emit set_Marker1_X_world_coord_sig (x);
}

Q_SLOT void connector_t::set_Marker2_X_world_coord_slt (double x)
{
   emit set_Marker2_X_world_coord_sig (x);
}

Q_SLOT void connector_t::set_Marker3_X_world_coord_slt (double x)
{
   emit set_Marker3_X_world_coord_sig (x);
}

Q_SLOT void connector_t::set_Marker1_Y_world_coord_slt (double y)
{
   emit set_Marker1_Y_world_coord_sig (y);
}

Q_SLOT void connector_t::set_Marker2_Y_world_coord_slt (double y)
{
   emit set_Marker2_Y_world_coord_sig (y);
}

Q_SLOT void connector_t::set_Marker3_Y_world_coord_slt (double y)
{
   emit set_Marker3_Y_world_coord_sig (y);
}