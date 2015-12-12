#include <iostream>
#include <yaml-cpp/yaml.h>
#include "settings.h"
#include <fstream>


using namespace YAML;
using namespace std;
settings_t::settings_t(std::string object_name)
{
   object_name_ = object_name;
}

void import_settings()
{
      
}
void export_settings()
{
      std::ifstream fin("settings.yaml");
      YAML::Emitter out;
      out << BeginSeq << BeginMap
         << Key << "name"
         << Value << "settings"
         << BeginMap
         << Key << "setting1"
         << Value << "value1"
         << Key << "setting2"
         << Value << "value2"
         << Key << "setting3"
         << Value << "value3"
         << Key << "setting4"
         << Value << "value4"
         << Key << "setting5"
         << Value << "value5"
         << Key << "setting6"
         << Value << "value6"
         
         
         << EndMap
         << EndMap << EndSeq;
      //printf( "Invalid node:\n%s", out.c_str() );

}
void settings_t::add_setting(string setting_name,double* value)
{   
   
   settings_t::double_settings_.insert(pair<string, double>(setting_name,value));
}
void settings_t::add_setting(string setting_name,int* value)
{
   
   settings_t::int_settings_.insert(pair<string, int>(setting_name,value));
}

