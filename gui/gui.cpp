/* 
 * File:   gui.cpp
 * Author: Anton Fedotov
 *         Daniil Razuvaev
 *
 * Created on 14 ноября 2015 г., 20:18
 */

#include <iostream>

#include "gui.h"

gui_t::gui_t( QWidget * parent ) :
   ui_( new Ui::gui )
{
   object_params_ = new object_params_t;
   ui_->setupUi(this);
   
   connect(ui_->ot_obj_params, SIGNAL(triggered()), this, SLOT(call_obj_params()));
}

Q_SLOT void gui_t::call_obj_params()
{
   object_params_->show();
};

object_params_t::object_params_t( QWidget * parent ) :
   obj_params_( new Ui::obj_params )
{
   obj_params_->setupUi(this);
}

