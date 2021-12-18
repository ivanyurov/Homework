int main()
{
    int a;
    std::cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < a - i; j++) std::cout << " ";
        for (int k = 0; k < i * 2 - 1; k++) std::cout << "*";
        std::cout << std::endl;
    }
    for (int i=a-1; i >= 0; i--)
    {
        for (int j = 0; j < a - i; j++) std::cout << " ";
        for (int k = 0; k < i * 2 - 1; k++) std::cout << "*";
        std::cout << std::endl;
    }
    system("pause");
    return 0;
}
