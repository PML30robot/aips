/*
 * File:                   object_track.cpp
 * Author:                 Vladislav Kupyrin
 *                         Anton Fedotov
 * Export/inport settings: Razuvaev Daniil
 *
 * Created on 14 Ноябрь 2015 г., 17:42
 */

#include <opencv2/opencv.hpp>

#include <vector>

#include "../settings/settings.h"

#include "../pos_system/pos_sys.h"
#include "../camera/camera.h"

using namespace cv;
using namespace std;

pos_system_t::pos_system_t( connector_t * connector ) :
     connector_   (connector)
   , is_working_   (1)
{
   camera_     = new camera_t    (connector_);
   obj_detect_ = new obj_detect_t(connector_);

   connect(this, SIGNAL(send_image(QImage)), connector_, SLOT(get_image(QImage)));
   
   connect(connector_, SIGNAL(stop_all_sig()), this, SLOT(stop_loop()));
}

pos_system_t::~pos_system_t( )
{
}

extern QImage cvMatToQImage( cv::Mat const & frame );

void pos_system_t::loop()
{
   while (is_working_)
   {
      Mat frame;

      camera_->get_frame(frame);
      
      obj_detect_->detect(frame);

      obj_detect_->drawContour(frame);
      obj_detect_->drawPosition(frame);
      
      emit send_image(cvMatToQImage(frame));
   }
}

Q_SLOT void pos_system_t::stop_loop()
{
   is_working_ = 0;
}

QImage cvMatToQImage( cv::Mat const & frame )
{
   QImage img;

   if (frame.channels()== 3)
   {
      cv::cvtColor(frame, frame, CV_BGR2RGB);
      img = QImage((const unsigned char*)(frame.data), frame.cols, frame.rows, QImage::Format_RGB888);
   }
   else
   {
      img = QImage((const unsigned char*)(frame.data), frame.cols, frame.rows, QImage::Format_Indexed8);
   }

   return img;
}

