void medFilter(int n, const char* input)
{
    RgbImg img = readRgbImg(input);
    int a;
    int half = n / 2;
    int* r = new int[n * n];
    int* g = new int[n * n];
    int* b = new int[n * n];
    for (size_t row = half; row < img.height - half; ++row)
    {
        for (size_t col = half; col < img.width - half; ++col)
        {

            for (size_t i = 0; i < n; ++i)
                for (size_t j = 0; j < n; ++j)
                {
                    size_t i1 = row + i - half, j1 = col - half + j;
                    r[i * n + j] = img.pixels[i1][j1].Red;
                    g[i * n + j] = img.pixels[i1][j1].Green;
                    b[i * n + j] = img.pixels[i1][j1].Blue;
                }
            for (int k = 0; k < n * n - 1; ++k)
            {
                for (int l = 0; l < n * n - 1; ++l)
                {
                    if (r[l] > r[l + 1])
                    {
                        a = r[l];
                        r[l] = r[l + 1];
                        r[l + 1] = a;
                    }
                    if (g[l] > g[l + 1])
                    {
                        a = g[l];
                        g[l] = g[l + 1];
                        g[l + 1] = a;
                    }
                    if (b[l] > b[l + 1])
                    {
                        a = b[l];
                        b[l] = b[l + 1];
                        b[l + 1] = a;
                    }
                }
            }
            img.pixels[row][col].Red = r[n * n / 2 + 1];
            img.pixels[row][col].Green = g[n * n / 2 + 1];
            img.pixels[row][col].Blue = b[n * n / 2 + 1];
        }
    }
    delete[] r;
    delete[] g;
    delete[] b;
    writeRgbImg("result.bmp", img);
    deleteRgbImg(img);
}
