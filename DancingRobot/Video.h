#pragma once
#ifndef VIDEO_H
#define VIDEO_H

#include <opencv2/opencv.hpp>

class Video {
public:
    Video();
    ~Video();

    bool openCamera(int cameraIndex = 0);
    void closeCamera();
    bool readFrame(cv::Mat& frame);

private:
    cv::VideoCapture capture;
};

#endif // VIDEO_H