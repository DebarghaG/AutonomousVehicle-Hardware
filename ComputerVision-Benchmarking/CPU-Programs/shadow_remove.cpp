#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

int main()
{
    Mat srcImg;
    Mat hsvImg;
    Mat bgrImg;

    srcImg = imread("1080p1.jpg");
    cvtColor(srcImg, hsvImg, CV_BGR2HSV);
    imwrite("1080p2.jpg", hsvImg);

    Mat channel[3];
    split(hsvImg, channel);
    channel[2] = Mat(hsvImg.rows, hsvImg.cols, CV_8UC1, 180);
    merge(channel, 3, hsvImg);
    imwrite("1080p1.jpg", hsvImg);

    cvtColor(hsvImg, bgrImg, CV_HSV2BGR);
    imwrite("1080p2.jpg", bgrImg);

    return 0;
 }
