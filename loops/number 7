#include<cmath>
int main() 
{
    int r;
    int n=0;
    std::cin >> r;
    for (int i = r; i > 0; --i)
    {
        for (int j = 1; j <= r; ++j)
        {
            if (sqrt(i * i + j * j) <= r) ++n;
        }
    }
    std::cout << (double)4 * n / (r * r);
}
