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
   gui_t( QWidget * parent = 0 );

private:
   

   Q_SLOT void call_obj_params();
   Q_SLOT void call_camera_settings();
   
   Ui::gui * ui_;

   object_params_t * object_params_;
   camera_settings_t * camera_settings_;
};

class object_params_t : public QMainWindow
{
   Q_OBJECT

public:
   object_params_t( QWidget * parent = 0 );
   
   Q_SLOT void set_min_v(int min_v);
   Q_SLOT void set_max_v(int max_v);
   Q_SLOT void set_min_s(int min_s);
   Q_SLOT void set_max_s(int max_s);
   Q_SLOT void set_min_h(int min_h);
   Q_SLOT void set_max_h(int max_h);
   Q_SLOT void set_min_size(int min_size);
   Q_SLOT void set_max_size(int max_size);
   
private:
   Ui::obj_params * obj_params_;
};



class camera_settings_t : public QMainWindow
{
   Q_OBJECT

public:
   camera_settings_t( QWidget * parent = 0 );
   
   Q_SLOT void hBrightness(int hBrightness);
   Q_SLOT void hContrast(int hContrast);
   Q_SLOT void hSaturation(int hSaturation);
   Q_SLOT void hHue(int hHue);
   Q_SLOT void hGain(int hGain);
   Q_SLOT void hExposure(int hExposure);
   
   Q_SLOT void sBrightness(int sBrightness);
   Q_SLOT void sContrast(int sContrast);
   
private:
   Ui::camera_settings * camera_settings_;
};
