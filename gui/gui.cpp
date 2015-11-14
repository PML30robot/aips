/* 
 * File:   gui.cpp
 * Author: Anton Fedotov
 *         Daniil Razuvaev
 *
 * Created on 14 ноября 2015 г., 20:18
 */

#include "gui.h"

gui::gui( QWidget * parent ) :
ui_(new Ui::gui)
{
    ui_->setupUi(this);
}

