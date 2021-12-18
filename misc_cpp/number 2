#include <cmath>
int main() {
    double x1, x2, a, b, c, D;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    D = (b * b) - 4 * a * c;
    if (D > 0 && a != 0)
    {
        x1 = (-b - sqrt(D)) / 2 * a;
        x2 = (-b + sqrt(D)) / 2 * a;
        std::cout << x1 << " " << x2;
    }
    if (a == 0)
    {
        x1 = -c / b;
        std::cout << x1;
    }
    if (a != 0 && D == 0)
    {
        x1 = -b / (2 * a);
        std::cout << x1;
    }
    if (a != 0 && D < 0) std::cout << "No answers";
    if (a == 0 && b == 0) std::cout << "Wrong coefficients";
    return 0;
}
