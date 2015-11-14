#include <opencv2/opencv.hpp>

#include <vector>

using namespace cv;
using namespace std;

int ot( )
{
   VideoCapture capture(0);
   
   Mat frame;
   
   cvNamedWindow("Capture", CV_WINDOW_AUTOSIZE);
   cvNamedWindow("Color_detection", CV_WINDOW_AUTOSIZE);
   cvNamedWindow("Contours", CV_WINDOW_AUTOSIZE);
   
   vector< vector<Point> > contours;
   vector< Vec4i > hierarchy;

   while (true)
   {
      capture >> frame;

      imshow("Capture", frame);
      
      inRange(frame, Scalar(5, 5, 100), Scalar(50, 50, 255), frame);

      imshow("Color_detection", frame);
      
      findContours(frame, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE);
      
      if (hierarchy.size())
      {
         for (int idx = 0; idx >= 0; idx = hierarchy[idx][0])
            drawContours(frame, contours, idx, Scalar(0, 0, 255), 2, 8, hierarchy, 0);
      }
      
      imshow("Contours", frame);
      
      if (waitKey(30) == 27)
         break;
   }

   return 0;
}