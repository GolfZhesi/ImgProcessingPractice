#pragma once
#include<stdio.h>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;

extern Mat extractedRect;
int RectSegmentation(const Mat& imgIn);
int PreOperation(const Mat& imgIn);
int InContours(Mat& imgIn);
int largestSquare(const vector<vector<Point>>& squares, vector<Point>& largest_square);																			
int rectExtract(vector<Point>& corners);
double getAngle(Point pt0, Point pt1, Point pt2);
