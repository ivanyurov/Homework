int main()
{
    int a;
    int f;
    int r;
    int b = 0;
    int c = 0;
    std::cin >> a;
    for (int i = 1; i > 0; ++i) {
        int d = 1;
        for (int j = 1; j <= i; ++j)
        {
            c = c + d * i;
            d = d * i;
        }
        if (a > b && a <= c)
        {
            f = i;
            r = a - b;
            break;
        }
        b = c;
    }
    std::cout << f << " " << r;
}
