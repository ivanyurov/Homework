#include <cmath>
int main()
{
    double unit_roots_5_x[5], unit_roots_5_y[5];
    double x_p, y_p, x, y, pi = 3.1415926535;
    std::cin >> x_p;
    std::cin >> y_p;
    x_p /= 5.;
    y_p /= 5.;
    x = x_p;
    y = (y_p);
    for (int i = 0; i < 5.; i++)
    {
        unit_roots_5_x[i] = cos(2. * pi / 5. * ((double)i));
        unit_roots_5_y[i] = sin(2. * pi / 5. * ((double)i));
    }
    if (x * x + y * y > 1.) std::cout << "miss" << std::endl;
    double d1 = y - unit_roots_5_y[0] - (x - unit_roots_5_x[0]) * (unit_roots_5_y[2] - unit_roots_5_y[0]) / (unit_roots_5_x[2] - unit_roots_5_x[0]);
    double d2 = y;
    if (x >= cos(2. * pi / 5.)) 
    {
        if (d1 * d2 <= 0)
            std::cout << "match" << std::endl;
        else
            std::cout << "miss" << std::endl;
    }
    else 
    {
        if (d1 * d2 > 0) {
            if (y - unit_roots_5_y[1] - (x - unit_roots_5_x[1]) * (unit_roots_5_y[3] - unit_roots_5_y[1]) / (unit_roots_5_x[3] - unit_roots_5_x[1]) <= 0)
                std::cout << "match" << std::endl;
            else
                std::cout << "miss" << std::endl;
        }
        else {
            if (y - unit_roots_5_y[2] - (x - unit_roots_5_x[2]) * (unit_roots_5_y[4] - unit_roots_5_y[2]) / (unit_roots_5_x[4] - unit_roots_5_x[2]) >= 0)
                std::cout << "match" << std::endl;
            else
                std::cout << "miss" << std::endl;
        }
    }
    system("pause");
    return 0;
}
