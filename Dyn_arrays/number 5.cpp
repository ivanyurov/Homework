int main()
{
    int m = 1;
    const int n = 5;
    int a[n][n];
    if (n % 2 == 1) 
    {
        a[(n / 2)][(n / 2)] = (n * n);
    }
    for (int i = 0; i < (n / 2); i++) 
    {
        for (int j = i; j < (n - i); j++) 
        {
            a[i][j] = m;
            m++;
        }
        for (int j = 1; j < (n - i - i); j++) 
        {
            a[(j + i)][(n - i) - 1] = m;
            m++;
        }
        for (int j = (n - 2) - i; j >= i; j--) 
        {
            a[(n - i) - 1][(j)] = m;
            m++;
        }
        for (int j = ((n - i) - 2); j > i; j--) 
        {
            a[j][i] = m;
            m++;
        }
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n - 1; j++) std::cout << a[i][j] << " ";
        std::cout << a[i][n - 1] << "\n";
    }
    return 0;
