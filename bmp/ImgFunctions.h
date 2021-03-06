#pragma once
#include "BmpStructures.h"

//Utilities
RgbImg createRgbImg(size_t height, size_t width, RGB color = { 0,0,0 });
void deleteRgbImg(RgbImg& img);
RgbImg copyRgbImg(RgbImg const& img);
RgbImg readRgbImg(char const* filename);
void writeRgbImg(char const* filename, RgbImg const& img);
void printImgInfo(char const* filename);
void rotateImg(char const* input, char const* output, int angle);

//ColorBalancing
RgbImg autolevels(RgbImg const& img, size_t kern_sz = 0);
RgbImg grayworld(RgbImg const& img, size_t kern_sz = 0);
void grayFilter(const char* input, const char* output);

//Filtering
RgbImg convolution(RgbImg const& img, size_t kernel_size);
RgbImg convolution(RgbImg const& img, size_t kernel_size, double** kernel);
RgbImg contours(RgbImg const& img);
void sharpness(char const* input);
void medFilter(int n, const char* input);
