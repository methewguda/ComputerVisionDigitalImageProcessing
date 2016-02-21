#pragma once

#include "iostream"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

using namespace std;
using namespace cv;

int input;
string src1, src2;

string HybridWindow, Window1, Window2;

Mat srcImage1, srcImage2, dstImage1, dstImage2, HybridImage;

static int kernel_size = 7;

void display();
void imageProcess(string src1, string src2);

Mat lowPassFilter(Mat src);
Mat highPassFilter(Mat src);