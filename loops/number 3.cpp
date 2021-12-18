#include <cmath>
int main()
{
    int n;
    std::cin >> n;
    double s = 0;
    double a, x;
    std::cin >> x;
    a = x;
    for (int i = 0; i < n; i++)
    {
        a = sin(a);
        s += a;
    }
    std::cout << s;
    return 0;
}
