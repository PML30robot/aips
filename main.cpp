/* 
 * File:   main.cpp
 * Author: Vladislav Kupiryn
 *         Anton Fedotov
 *         Daniil Razuvaev
 *
 * Created on 14 Ноябрь 2015 г., 16:47
 */

#include <QApplication>

#include "gui/gui.h"

int main( int argc, char** argv )
{
    QApplication app(argc, argv);
    
    gui window;
    
    window.show();
    
   return app.exec();
}

