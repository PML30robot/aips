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

public:
   Q_SIGNAL void send_image( QImage image );
   
private:
   camera_t * camera_;
   
   obj_detect_t * obj_detect_;
   
   int is_working_;
   
   settings_t * settings_;
   
   connector_t * connector_;
};