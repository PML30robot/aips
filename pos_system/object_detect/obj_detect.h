/* 
 * File:                   obj_detect.h
 * Author:                 Anton Fedotov
 * 
 * Created on 30.01.2016
 */

#pragma once
#include <qt5/QtCore/QObject>

#include <opencv2/opencv.hpp>

#include "../../settings/settings.h"
#include "../../connecter/connector.h"

using namespace cv;

class obj_detect_t : public QObject
{
   Q_OBJECT
public:
   obj_detect_t( connector_t * connector );
   
   Point detect( const Mat & frame );
   
   void drawPosition(Mat &);
   void drawContour(Mat &);
   
   
   
public slots:
   void export_settings_slt();
   void import_settings_slt();
   
   size_t get_min_h       () const;
   size_t get_max_h       () const;
   size_t get_min_s       () const;
   size_t get_max_s       () const;
   size_t get_min_v       () const;
   size_t get_max_v       () const;
   size_t get_min_obj_size() const;
   size_t get_max_obj_size() const;

   void set_min_h       (int);
   void set_max_h       (int);
   void set_min_s       (int);
   void set_max_s       (int);
   void set_min_v       (int);
   void set_max_v       (int);
   void set_min_obj_size(int);
   void set_max_obj_size(int);  

public:
   Q_SIGNAL void get_min_h_sig   (int);
   Q_SIGNAL void get_max_h_sig   (int);
   Q_SIGNAL void get_min_s_sig   (int);
   Q_SIGNAL void get_max_s_sig   (int);
   Q_SIGNAL void get_min_v_sig   (int);
   Q_SIGNAL void get_max_v_sig   (int);
   Q_SIGNAL void get_min_size_sig(int);
   Q_SIGNAL void get_max_size_sig(int);
   
private:
   size_t    min_h_, max_h_,
             min_s_, max_s_,
             min_v_, max_v_;
   int       min_obj_size_,
             max_obj_size_;
   
   vector< vector<Point> > contours_;
   Point center_;
   vector< Vec4i > hierarchy_;
   
   settings_t  * settings_;

   connector_t * connector_;
};