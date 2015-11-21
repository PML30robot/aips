/* 
 * File:   gui.h
 * Author: robot
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

namespace Ui
{
   class gui;
   class obj_params;
}

class object_params_t;

class gui_t : public QMainWindow
{
   Q_OBJECT

public:
   gui_t( QWidget * parent = 0 );

private:
   
   Q_SLOT void call_obj_params();
   
   Ui::gui * ui_;

   object_params_t * object_params_;
};

class object_params_t : public QMainWindow
{
   Q_OBJECT

public:
   object_params_t( QWidget * parent = 0 );

private:
   Ui::obj_params * obj_params_;
};
