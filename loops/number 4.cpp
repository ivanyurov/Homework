#include <cmath>
int main()
{
    double a = 0;
    int f = 0;
    int c = 1;
    int s = 1;
    double p = 3.14159265358979323846;
    double dif;
    double b = 4;
    std::cin >> dif;
    while (abs(b*a-p) > dif)
    {
        a += (double)s / c;
        s *= -1;
        c += 2;
        ++f;
    }
    std::cout << "pi=" << b*a << "\n";
    std::cout << f;
}
