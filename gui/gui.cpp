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


Q_SLOT void object_params_t::set_min_h(int min_h)
{
   
};

Q_SLOT void object_params_t::set_max_h(int max_h)
{
   
};

Q_SLOT void object_params_t::set_min_s(int min_s)
{
   
};

Q_SLOT void object_params_t::set_max_s(int max_s)
{
   
};

Q_SLOT void object_params_t::set_min_v(int min_v)
{
   
};

Q_SLOT void object_params_t::set_max_v(int max_v)
{
   
};

Q_SLOT void object_params_t::set_min_size(int min_size)
{
   
};

Q_SLOT void object_params_t::set_max_size(int max_size)
{
   
};


object_params_t::object_params_t( QWidget * parent ) :
   obj_params_( new Ui::obj_params )
{
   obj_params_->setupUi(this);
   
   connect(obj_params_->min_hue,        SIGNAL(valueChanged(int)), this, SLOT(set_min_h(int)));
   connect(obj_params_->max_hue,        SIGNAL(valueChanged(int)), this, SLOT(set_max_h(int)));
   connect(obj_params_->min_saturation, SIGNAL(valueChanged(int)), this, SLOT(set_min_s(int)));
   connect(obj_params_->max_saturation, SIGNAL(valueChanged(int)), this, SLOT(set_max_s(int)));
   connect(obj_params_->min_value,      SIGNAL(valueChanged(int)), this, SLOT(set_min_v(int)));
   connect(obj_params_->min_value,      SIGNAL(valueChanged(int)), this, SLOT(set_max_v(int)));
   connect(obj_params_->min_size,       SIGNAL(valueChanged(int)), this, SLOT(set_min_size(int)));
   connect(obj_params_->max_size,       SIGNAL(valueChanged(int)), this, SLOT(set_max_size(int)));
}

