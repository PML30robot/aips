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
#include "connecter/connector.h"
#include "settings/settings.h"

int main( int argc, char** argv )
{
   QApplication app(argc, argv);
   
   connector_t connector;
   
   gui_t window(&connector);
   
   window.show();
   
 //  std::string string1 = "nameofobject";
   
 //  settings_t settings(string1);
   
 //  settings.import_settings();
   
   return app.exec();
}   


