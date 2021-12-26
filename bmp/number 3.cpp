void grayFilter(const char* input, const char* output)
{
    RgbImg img = readRgbImg(input);
    RgbImg out = createRgbImg(img.height, img.width, { 0,0,0 });
    for (int i = 0; i < img.width; ++i)
        for (int j = 0; j < img.height; ++j)
        {
            int res = (img.pixels[j][i].Blue + img.pixels[j][i].Green + img.pixels[j][i].Red) / 3;
            out.pixels[j][i].Blue = out.pixels[j][i].Green = out.pixels[j][i].Red = res;
        }
    writeRgbImg(output, out);
    deleteRgbImg(img);
    deleteRgbImg(out);
}
