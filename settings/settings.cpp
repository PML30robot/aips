
/* 
 * File:   settings.cpp
 * Author: Razuvaev Daniil
 * Created on 9 декабря 2015 г., 19:05
 */

#include <iostream>
#include <fstream>
#include <string>

#include <yaml-cpp/yaml.h>

#include "settings.h"


using namespace YAML;
using namespace std;

settings_t::settings_t(std::string object_name)
{
   object_name_ = object_name;
}

void settings_t::import_settings()
{
   ifstream file123("settings.yaml");
   if (file123.is_open()) {
      YAML::Node const objects = LoadFile("settings.yaml");
   
      for (size_t obj_idx = 0; obj_idx < objects.size(); ++obj_idx)
      {
         if (objects[obj_idx]["object name"].as<string>().compare(object_name_))
             continue;

         Node const settings = objects[obj_idx]["settings"];
      
         string setting_name;
      
         for (size_t i = 0; i < settings.size(); i++)
         {
            setting_name = (settings[i])["name"].as<string>();

            for (auto it = double_settings_.begin(); it != double_settings_.end(); ++it)
            {
               if (!it->first.compare(setting_name))
                  *(it->second) = (settings[i])["value"].as<double>();
            }

            for (auto it = int_settings_.begin(); it != int_settings_.end(); ++it)
            {
               if (!it->first.compare(setting_name))
               *(it->second) = (settings[i])["value"].as<int>();
            }
         }
      
         break;
      }
   std::cout<< "SETTINGS: Setting \""<<object_name_<<"\" have been successfully imported."<< std::endl;
   }
   else
   {
      std::cout<< "WARNING: SETTINGS: Settings file does not exist. ( Setting \""<<object_name_<<"\" is not imported )"<< std::endl;
   }
}


void settings_t::clean_settings_file()
{
   std::ofstream fout("settings.yaml");
   
}

void settings_t::export_settings()
{
   std::ofstream fout("settings.yaml", ios::app);
   YAML::Emitter out;
   out << BeginSeq << BeginMap
       << Key << "object name"
       << Value << object_name_
       << Key << "settings"
       << BeginSeq;

   for (auto it = double_settings_.begin(); it != double_settings_.end(); ++it)
   {
      out << BeginMap
          << Key << "name"  
          << Value << it->first 
          << Key << "value" 
          << Value << *(it->second) 
          << EndMap;

   }  

   for (auto it = int_settings_.begin(); it != int_settings_.end(); ++it)
   {
      out << BeginMap
          << Key << "name"  
          << Value << it->first 
          << Key << "value" 
          << Value << *(it->second) 
          << EndMap;
   }

     out << EndSeq << EndMap << EndSeq
         << Newline << Newline;
     fout << out.c_str();
}

void settings_t::add_setting(string setting_name,double* value)
{
   double_settings_.insert(pair<string, double*>(setting_name,value));
}

void settings_t::add_setting(string setting_name,int* value)
{   
   int_settings_.insert(pair<string, int*>(setting_name,value));
}