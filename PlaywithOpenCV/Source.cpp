#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main(){

	string image = "test.png";
	double alpha = 0.00;
	int beta = 0;

	//read the image data into Matrix
	Mat imgOriginal = imread(image, CV_LOAD_IMAGE_UNCHANGED);
	Mat imgGray = imread(image, CV_LOAD_IMAGE_GRAYSCALE);

	//check whether the image is loaded or not
	if (imgOriginal.empty() || imgGray.empty())
	{
		cout << "Error : Image cannot be loaded..!!" << endl;
		//wait for a key press
		system("pause");
		return -1;
	}

	//create display window
	namedWindow("Original Image", CV_WINDOW_AUTOSIZE);
	namedWindow("Gray Image", CV_WINDOW_AUTOSIZE);

	//Load the matrices into the display windows
	imshow("Original Image", imgOriginal);
	imshow("Gray Image", imgGray);

	cout << image << " loaded successfully.\n";

	// Wait for a keystroke in the window
	waitKey(0);

	//destroy all open windows
	destroyAllWindows();

	//zero returns a zero array of the imgOrigianl size and type
	Mat imgContrast = Mat::zeros(imgOriginal.size(), imgOriginal.type());

	cout << "\n\nChanging Contrast:\n";
	cout << "Please enter Alpha Value[1.0 - 3.0]: "; cin >> alpha;
	cout << "Please enter Beta Value[0 - 100]: "; cin >> beta;

	imgOriginal.convertTo(imgContrast, -1, alpha, beta);

	//create display window
	namedWindow("Contrast Image", CV_WINDOW_AUTOSIZE);

	//Load the matrices into the display windows
	imshow("Original Image", imgOriginal);
	imshow("Contrast Image", imgContrast);

	// Wait for a keystroke in the window
	waitKey(0);

	//destroy all open windows
	destroyAllWindows();

	cout << "\n\nHistogram Equalized:\n";

	Mat imgGray_Equalized;

	//equalize the histogram
	equalizeHist(imgGray, imgGray_Equalized);

	namedWindow("Gray Equalized Image", CV_WINDOW_AUTOSIZE);

	//Load the matrices into the display windows
	imshow("Gray Image", imgGray);
	imshow("Gray Equalized Image", imgGray_Equalized);

	// Wait for a keystroke in the window
	waitKey(0);

	//destroy all open windows
	destroyAllWindows();
	
	return 0;
}