/* 
 * File:            object_track.h
 * Author:          Vladislav Kupyrin
 *                  Anton Fedotov
 * Export settings: Razuvaev Daniil
 * 
 * Created on 14 Ноябрь 2015 г., 17:42
 */

#pragma once

#include <QObject>
#include "../settings/settings.h"
#include "../camera/camera.h"
#include "../connecter/connector.h"

class object_track_t : public QObject
{
   Q_OBJECT
   
public:
   
   object_track_t( connector_t * connector );
   ~object_track_t();
   
   void loop();

   void set_max_v( size_t max_v_ );
   size_t get_max_v( ) const;
   void set_min_v( size_t min_v_ );
   size_t get_min_v( ) const;
   void set_max_s( size_t max_s_ );
   size_t get_max_s( ) const;
   void set_min_s( size_t min_s_ );
   size_t get_min_s( ) const;
   void set_max_h( size_t max_h_ );
   size_t get_max_h( ) const;
   void set_min_h( size_t min_h_ );
   size_t get_min_h( ) const;
   void set_min_obj_size( size_t min_h_ );
   size_t get_min_obj_size( ) const;
   void set_max_obj_size( size_t min_h_ );
   size_t get_max_obj_size( ) const;
   
   Q_SLOT void export_settings_slt();
   
   Q_SIGNAL void send_image( QImage image );
   
   Q_SLOT void stop_loop();
   
   Q_SLOT void set_brightness_hardware( double hbrightness );
   Q_SLOT void set_contrast_hardware( double hcontrast );
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
   
private:
   int    min_h_, max_h_,
          min_s_, max_s_,
          min_v_, max_v_;
   int    min_obj_size_,
          max_obj_size_;
   
   camera_t * camera_;
   
   settings_t * settings_;
   
   int is_working_;
   
   connector_t * connector_;
};

