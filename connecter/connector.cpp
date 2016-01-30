/* 
 * File:   connecter.cpp
 * Author: Razuvaev Daniil
 *         Kupirin Vladislav
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

Q_SLOT void connector_t::export_settings_slt()
{
   emit export_settings_s();
}

Q_SLOT void connector_t::import_settings_slt()
{
   emit import_settings_s();
}

void connector_t::stop_obj_track()
{
   emit stop_obj_track_s();
}


Q_SLOT void connector_t::get_image( QImage image )
{
   emit send_image(image);
}


Q_SLOT void connector_t::set_brightness_hardware_slt( double value )
{
   emit set_brightness_hardware_sig( value );
}

Q_SLOT void connector_t::set_contrast_hardware_slt( double value )
{
   emit set_contrast_hardware_sig( value );
}


Q_SLOT void connector_t::set_saturation_hardware( double value )
{
   emit set_saturation_hardware_sig( value );
}

Q_SLOT void connector_t::set_hue_hardware( double value )
{
   emit set_hue_hardware_sig( value );
}

Q_SLOT void connector_t::set_gain_hardware( double value )
{
   emit set_gain_hardware_sig( value );
}

Q_SLOT void connector_t::set_exposure_hardware( double value )
{
   emit set_exposure_hardware_sig( value );
}

Q_SLOT void connector_t::set_brightness_software( double value )
{
   emit set_brightness_software_sig( value );
}

Q_SLOT void connector_t::set_contrast_software(double value )
{
   emit set_contrast_software_sig( value );
}

Q_SLOT void connector_t::set_min_h(int min_h)
{
   emit set_min_h_sig( min_h );
}

Q_SLOT void connector_t::set_max_h(int max_h)
{
   emit set_max_h_sig( max_h );   
}

Q_SLOT void connector_t::set_min_s(int min_s)
{
   emit set_min_s_sig( min_s );   
}

Q_SLOT void connector_t::set_max_s(int max_s)
{
   emit set_max_s_sig( max_s );   
}

Q_SLOT void connector_t::set_min_v(int min_v)
{
   emit set_min_v_sig( min_v );   
}

Q_SLOT void connector_t::set_max_v(int max_v)
{
   emit set_max_v_sig( max_v );   
}

Q_SLOT void connector_t::set_min_size(int min_size)
{
   emit set_min_size_sig( min_size );   
}

Q_SLOT void connector_t::set_max_size(int max_size)
{
   emit set_max_size_sig( max_size );   
}

Q_SLOT void connector_t::get_min_h(int min_h)
{
   emit get_min_h_sig( min_h );
}

Q_SLOT void connector_t::get_max_h(int max_h)
{
   emit get_max_h_sig( max_h );
}

Q_SLOT void connector_t::get_min_s(int min_s)
{
   emit get_min_s_sig( min_s );
}

Q_SLOT void connector_t::get_max_s(int max_s)
{
   emit get_max_s_sig( max_s );
}

Q_SLOT void connector_t::get_min_v(int min_v)
{
   emit get_min_v_sig( min_v );
}

Q_SLOT void connector_t::get_max_v(int max_v)
{
   emit get_max_v_sig( max_v );
}

Q_SLOT void connector_t::get_min_size(int min_obj_size_)
{
   emit get_min_size_sig( min_obj_size_ );
}

Q_SLOT void connector_t::get_max_size(int max_size)
{
   emit get_max_size_sig( max_size );
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Q_SLOT void connector_t::get_brightness_h_slt(double brightness_h)
{
   emit get_brightness_h(brightness_h);
}
Q_SLOT void connector_t::get_hue_h_slt(double hue_h)
{
   emit get_hue_h(hue_h);
}
Q_SLOT void connector_t::get_contrast_h_slt(double contrast_h)
{
   emit get_contrast_h(contrast_h);
}
Q_SLOT void connector_t::get_gain_h_slt(double gain_h)
{
   emit get_gain_h(gain_h);
}
Q_SLOT void connector_t::get_exposure_h_slt(double exposure_h)
{
   emit get_exposure_h(exposure_h);
}
Q_SLOT void connector_t::get_saturation_h_slt(double saturation_h)
{
   emit get_saturation_h(saturation_h);
}

Q_SLOT void connector_t::get_brightness_s_slt(double brightness_s)
{
   emit get_brightness_s(brightness_s);
} 
Q_SLOT void connector_t::get_contrast_s_slt(double contrast_s)
{
   emit get_contrast_s(contrast_s);
}