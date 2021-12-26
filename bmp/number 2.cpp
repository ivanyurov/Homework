void rotateImg(const char* input, const char* output, int angle)
{
    RgbImg img = readRgbImg(input);
    size_t height = img.height, width = img.width;
    if (angle % 90 != 0)
    {
        std::cout << "Wrong angle!\n";
    }
    else 
    {
        while (angle >= 360)
        {
            angle -= 360;
        }
        if (angle == 90)
        {
            RgbImg out = createRgbImg(width, height, { 0, 0, 0 });
            for (size_t x = 0; x < width; x++)
            {
                for (size_t y = 0; y < height; y++)
                {
                    out.pixels[width - 1 - x][y] = img.pixels[y][x];
                }
            }
            writeRgbImg(output, out);
            deleteRgbImg(img);
            deleteRgbImg(out);
        }
        if (angle == 180) 
        {
            RgbImg out = createRgbImg(height, width, { 0, 0, 0 });
            for (size_t x = 0; x < width; x++)
            {
                for (size_t y = 0; y < height; y++)
                {
                    out.pixels[y][x] = img.pixels[height - y - 1][width - x - 1];
                }
            }
            writeRgbImg(output, out);
            deleteRgbImg(img);
            deleteRgbImg(out);
        }
        if (angle == 270) 
        {
            RgbImg out = createRgbImg(width, height, { 0, 0, 0 });
            for (size_t x = 0; x < width; x++)
            {
                for (size_t y = 0; y < height; y++)
                {
                    out.pixels[x][height - 1 - y] = img.pixels[y][x];
                }
            }
            writeRgbImg(output, out);
            deleteRgbImg(img);
            deleteRgbImg(out);
        }
    }
}
