void sharpness(char const* input)
{
    RgbImg image = readRgbImg(input);
    double ker[3][3] = { {0, -1, 0}, {-1, 5, -1}, {0, -1, 0} };
    double** kernel = new double* [3];
    for (int i = 0; i < 3; ++i) kernel[i] = new double[3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            kernel[i][j] = ker[i][j];
        }
    }
    RgbImg image_1 = convolution(image, 5);
    RgbImg image_2 = convolution(image_1, 3, kernel);

    writeRgbImg("result.bmp", image_2);

    deleteRgbImg(image_2);
    deleteRgbImg(image_1);
    deleteRgbImg(image);
}
