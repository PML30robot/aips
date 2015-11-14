/* 
 * File:   gui.h
 * Author: robot
 *
 * Created on 14 ноября 2015 г., 20:17
 */

#pragma once 

#include <QMainWindow>
#include <QObject>

#include "gui_ui.h"

class gui : public QMainWindow
{
    Q_OBJECT
    
public:
    gui( QWidget * parent = 0 );
    
private:
    Ui::gui * ui_;
};