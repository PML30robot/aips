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
#include "object_track/object_track.h"

int main( int argc, char** argv )
{
//   QApplication app(argc, argv);
//    
//   gui window;
//    
//   window.show();
//    
//   return app.exec();
   object_track_t obj;
   
   obj.loop();
   
   return 0;
}

