void snakeArray(int n){
    int a = 0;
    int** A = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        A[i] = new int[n];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i % 2 == 0)
            {
                ++a;
                A[i][j] = a;
            }
            else {
                ++a;
                A[i][n - j - 1] = a;
            }
        }
        std::cout << "\n";
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << A[i][j] << "    ";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < n; ++i)
        delete[] A[i];
    delete[] A;
}
