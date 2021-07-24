//
//  main.cpp
//  SFMMotion
//
//  Created by vinod chari on 6/8/21.
//

#define CERES_FOUND 1

#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "opencv2/video/tracking.hpp"
#include <opencv2/sfm.hpp>
#include <opencv2/viz.hpp>
#include <opencv2/calib3d.hpp>


using namespace cv;
using namespace std;
using namespace cv::sfm;

int main(int argc, const char * argv[]) {
    Mat_<double> Tpos = cv::Mat::zeros(3, 1, CV_32FC1);
    Mat_<double> Rpos = cv::Mat::eye(3, 3, CV_32FC1);
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
