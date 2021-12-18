int main() 
{
    int n, base;
    std::cin >> n;
    std::cin >> base;
    int a = 1;
    while (a <= n) a *= base;
    while (a > 1)
    {
        a /= base;
        int d = n / a;
        if (d > 0) {
            if (d < 10)
            {
                std::cout << d;
            }
            else {
                std::cout << char(d + 55);
            }
            n %= a;

        }
        else std::cout << "0";
    }
    return 0;
}
