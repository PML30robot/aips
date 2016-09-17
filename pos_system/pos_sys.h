/* 
 * File:                   object_track.h
 * Author:                 Vladislav Kupyrin
 *                         Anton Fedotov
 * Export/inport settings: Razuvaev Daniil
 * 
 * Created on 14 Ноябрь 2015 г., 17:42
 */

#pragma once

#include <QObject>

#include "../settings/settings.h"
#include "../camera/camera.h"
#include "../connecter/connector.h"
#include "object_detect/obj_detect.h"

class pos_system_t : public QObject
{
   Q_OBJECT
   
public:
   pos_system_t( connector_t * connector );
   ~pos_system_t();
   
   void loop();

public slots:
   void stop_loop();
   
   void set_Marker1_cam_coord_slt(int, int);
   void set_Marker2_cam_coord_slt(int, int);
   void set_Marker3_cam_coord_slt(int, int);
   
   void set_Marker1_X_world_coord_slt (double);
   void set_Marker2_X_world_coord_slt (double);
   void set_Marker3_X_world_coord_slt (double);
   void set_Marker1_Y_world_coord_slt (double);
   void set_Marker2_Y_world_coord_slt (double);
   void set_Marker3_Y_world_coord_slt (double);

public:
   Q_SIGNAL void send_image( QImage image );
   ////////////COORDINATES////////////
   int MarkerCameraPos1_X; int MarkerCameraPos1_Y;
   int MarkerCameraPos2_X; int MarkerCameraPos2_Y;  //  << Camera coordinates
   int MarkerCameraPos3_X; int MarkerCameraPos3_Y;
   
   double MarkerWorldPos1_X; double MarkerWorldPos1_Y;
   double MarkerWorldPos2_X; double MarkerWorldPos2_Y;    //  << World coordinates
   double MarkerWorldPos3_X; double MarkerWorldPos3_Y;
   ////////////////////////////////////
   
   
private:
   camera_t * camera_;
   
   obj_detect_t * obj_detect_;
   
   int is_working_;
   
   settings_t * settings_;
   
   connector_t * connector_;
};