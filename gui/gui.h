/* 
 * File:   gui.h
 * Author: Daniil Razuvaev
 *
 * Created on 14 ноября 2015 г., 20:17
 */

#pragma once 

#include <QMainWindow>
#include <QApplication>
#include <QObject>
#include <QMenu>
#include <QTimer>
#include <QMenuBar>

#include "ui/gui_ui.h"
#include "ui/object_params_ui.h"
#include "ui/camera_settings_ui.h"
#include "../connecter/connector.h"

namespace Ui
{
   class gui;
   class obj_params;
   class camera_settings;
}

class object_params_t;
class camera_settings_t;

class gui_t : public QMainWindow
{
   Q_OBJECT
   

public:
   gui_t ( connector_t * connector, QWidget * parent = 0 );
   
   void closeEvent(QCloseEvent* event);
private:
   Q_SLOT void call_obj_params();
   Q_SLOT void call_camera_settings();
   
   Ui::gui * ui_;

   object_params_t *   object_params_;
   camera_settings_t * camera_settings_;
};


class object_params_t : public QMainWindow
{
   Q_OBJECT

public:
   object_params_t(connector_t * connector, QWidget * parent = 0 );

private:
   Ui::obj_params * obj_params_;
   connector_t * connector_;
};

class camera_settings_t : public QMainWindow
{
   Q_OBJECT

public:
   camera_settings_t( connector_t * connector, QWidget * parent = 0 );
   
  
private:
   Ui::camera_settings * camera_settings_;
   
   connector_t * connector_;
};

