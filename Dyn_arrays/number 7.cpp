void shiftArray(int A[], int n, int k)
{
    int a;
    for (int i = 0; i < k; ++i)
    {
        a = A[0];
        for (int j = 0; j < n-1; ++j) A[j] = A[j+1];
        A[n - 1] = a;
    }
}
