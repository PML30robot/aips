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

   void stop_obj_track();

   // slots

   Q_SLOT void get_image( QImage image );
   
   Q_SLOT void set_brightness_hardware_slt( double hbrightness );
   Q_SLOT void set_contrast_hardware_slt( double hcontrast );
   Q_SLOT void set_saturation_hardware( double hsaturation );
   Q_SLOT void set_hue_hardware( double hhue );
   Q_SLOT void set_gain_hardware( double hgain );
   Q_SLOT void set_exposure_hardware( double hexposure );

   Q_SLOT void set_brightness_software( double sbrightness );
   Q_SLOT void set_contrast_software( double scontrast );

   Q_SLOT void set_min_h( int min_h );
   Q_SLOT void set_max_h( int max_h );

   Q_SLOT void set_min_s( int min_s );
   Q_SLOT void set_max_s( int max_s );
   Q_SLOT void set_min_v( int min_v );
   Q_SLOT void set_max_v( int max_v );
   Q_SLOT void set_min_size( int min_size );
   Q_SLOT void set_max_size( int max_size );

   // signals

   Q_SIGNAL void send_image( QImage image );
   Q_SIGNAL void stop_obj_track_s();
   
   Q_SIGNAL void set_brightness_hardware_sig( double value );
   Q_SIGNAL void set_contrast_hardware_sig( double value );

private:
};