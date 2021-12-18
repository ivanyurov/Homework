int main() 
{
    int n, s = 0, p = 1;
    std::cin >> n;
    int n_p = n;
    while (n > 0)
    {
        s += (n % 10);
        n /= 10;
    }
    while (n_p > 0)
    {
        p *= (n_p % 10);
        n_p /= 10;
    }
    std::cout << "Summ: " << s << "\n";
    std::cout << "Mult: " << p << "\n";
    return 0;
}
