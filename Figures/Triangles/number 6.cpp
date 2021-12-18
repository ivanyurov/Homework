int main() {
    int a;
    std::cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b = 2 * i + 1;
        for (int j = 0; j < 2 * a + 1; j++)
        {
            if (j == a - i || j == a + i)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    for (int i = a; i >= 0; i--)
    {
        int b = 2 * i + 1;
        for (int j = 0; j < 2 * a + 1; j++)
        {
            if (j == a - i || j == a + i)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    system("pause");
    return 0;
}
