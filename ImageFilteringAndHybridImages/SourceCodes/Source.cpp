#include "Header.h"

int main(int argc, char** argv)
{
    display();

    return(0);
}

//Function to promt the project
void display() 
{
    system("cls");

    cout << "Project 01: Image Filtering and Hybrid Images." << endl;
    cout << "----------------------------------------------" << endl << endl;
    cout << "Please select from the following menu:" << endl;
    cout << "Set 1: bicycle and motorcycle" << endl;
    cout << "Set 2: bird and plane" << endl;
    cout << "Set 3: cat and dog" << endl;
    cout << "Set 4: fish and submarine" << endl;
    cout << "Set 5: einstein and marilyn" << endl << endl;
    cout << "Please enter you choice or 0 to QUIT: Set "; cin >> input;

    cout << endl;

    if (input == 0) 
    {
        exit(0);
    }

    if (input < 1 || input > 5)
    {
        cout << "Please enter a valid input. ";
        system("PAUSE");
        display();
    }

    switch (input)
    {
    case 1:
        src1 = "bicycle";
        src2 = "motorcycle";
        break;
    case 2:
        src1 = "bird";
        src2 = "plane";
        break;
    case 3:
        src1 = "cat";
        src2 = "dog";
        break;
    case 4:
        src1 = "fish";
        src2 = "submarine";
        break;
    case 5:
        src1 = "einstein";
        src2 = "marilyn";
        break;
    }

    //call the imageProcess function
    imageProcess(src1, src2);
}

void imageProcess(string src1, string src2)
{
    Window1 = "Original Image: " + src1;
    Window2 = "Original Image: " + src2;
    HybridWindow = "Hybrid Image " + src1 + "&" + src2;

    srcImage1 = imread("data/" + src1 + ".bmp", 1);
    srcImage2 = imread("data/" + src2 + ".bmp", 1);

    //Create output display window
    namedWindow(Window1, WINDOW_AUTOSIZE);
    namedWindow(Window2, WINDOW_AUTOSIZE);
    namedWindow(HybridWindow, WINDOW_AUTOSIZE);

    //Return Low pass filtered image object
    dstImage1 = lowPassFilter(srcImage1);
    //Return High pass filtered image object
    dstImage2 = highPassFilter(srcImage2);

    // Conbine two filtter image to create Hybrid Image
    addWeighted(dstImage1, .50, dstImage2, .50, 0.0, HybridImage);

    // Save outputs to image files
    imwrite("output/" + src1 + ".bmp", dstImage1);
    imwrite("output/" + src2 + ".bmp", dstImage2);
    imwrite("output/" + src1 + "&" + src2 + ".bmp", HybridImage);

    // Display output windows 
    imshow(Window1, dstImage1);
    imshow(Window2, dstImage2);
    imshow(HybridWindow, HybridImage);

    waitKey(0);
    destroyAllWindows();
    display();
}

Mat lowPassFilter(Mat src)
{
    dstImage1 = src.clone();
    dstImage1 = Mat::zeros(src.size(), src.type());

    // Applying GaussianBlur function for High Pass Filter
    GaussianBlur(src, dstImage1, Size(kernel_size, kernel_size - 2), 0, 0, BORDER_DEFAULT);
    
    return dstImage1;
}

Mat highPassFilter(Mat src)
{
    dstImage2 = src.clone();
    dstImage2 = Mat::zeros(src.size(), src.type());

    // Applying Laplacian function for High Pass Filter
    Laplacian(src, dstImage2, src.depth(), 3, 1, 0, BORDER_DEFAULT);

    return dstImage2;
}