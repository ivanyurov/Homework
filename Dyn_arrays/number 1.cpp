int main()
{
    int rows;
    int cols;
    std::cin >> cols;
    std::cin >> rows;
    int a = 0;
    int** mass;
    mass = new int* [rows];
    for (int i = 0; i < rows; ++i)
    {
        mass[i] = new int[cols];
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (i % 2 == 0)
            {
                ++a;
                mass[i][j] = a;
            }
            else {
                ++a;
                mass[i][cols - j - 1] = a;
            }
        }
        std::cout << "\n";
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << mass[i][j] << "    ";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < cols; ++i)
        delete[] mass[i];
    delete[] mass;
    system("pause");
    return 0;
}
