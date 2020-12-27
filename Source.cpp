/*#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <iostream>
#include <stdio.h>

using namespace std;
using namespace cv;*/

/** Function Headers */
//void detectAndDisplay(Mat frame);

/** Global variables */
/*String face_cascade_name = "haarcascade_frontalface_alt.xml";
String profile_cascade_name = "haarcascade_profileface.xml";
CascadeClassifier face_cascade;
CascadeClassifier profile_cascade;
string window_name = "Capture - Face detection";
RNG rng(12345);*/

/** @function main */
/*int main(int argc, const char** argv)
{
	CvCapture* capture;
	Mat frame;

	//-- 1. Load the cascades
	if (!face_cascade.load(face_cascade_name)) { printf("--(!)Error loading\n"); return -1; };
	if (!profile_cascade.load(profile_cascade_name)) { printf("--(!)Error loading\n"); return -1; };

	//-- 2. Read the video stream
	// Read the image file
	Mat test = imread("test.png");

	// Apply the classifier to the frame
	if (!test.empty()) {
		detectAndDisplay(test);
	}
	else {
		printf(" --(!) No captured frame -- Break!");
	}
	waitKey(0);
}*/

/** @function detectAndDisplay */
/*void detectAndDisplay(Mat frame)
{
	std::vector<Rect> faces, profiles;
	Mat frame_gray, res;

	cvtColor(frame, frame_gray, CV_BGR2GRAY);
	equalizeHist(frame_gray, frame_gray);

	//-- Detect faces
	face_cascade.detectMultiScale(frame_gray, faces, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, Size(30, 30));

	for (size_t i = 0; i < faces.size(); i++)
	{		
		resize(frame(faces[i]), res, Size(128, 128), 0, 0, INTER_LINEAR); // This will be needed later while saving images
		cvtColor(res, res, CV_BGR2GRAY);
		if (!res.empty())
		{
			imshow("detected"+i, res);
		}
		else
			destroyWindow("detected");
	}

	profile_cascade.detectMultiScale(frame_gray, profiles, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, Size(30, 30));

	for (size_t j = faces.size(); j < profiles.size(); j++)
	{

		resize(frame(profiles[j]), res, Size(128, 128), 0, 0, INTER_LINEAR); // This will be needed later while saving images
		cvtColor(res, res, CV_BGR2GRAY);
		if (!res.empty())
		{
			imshow("detected" + j, res);
		}
		else
			destroyWindow("detected");
	}
	
}*/