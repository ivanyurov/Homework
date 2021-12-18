int main() 
{
    double a = 0;
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; ++i) a += 1. / i;
    std::cout << a;
    return 0;
}
