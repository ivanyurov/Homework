int main()
{
	const int N = 10;
	int pos;
	int A[N];
	for (int i = 0; i < N; ++i) std::cin >> A[i];
	int max = A[0] + A[1];
	for (int i = 1; i < N-1; ++i)
	{
		if (A[i] + A[i + 1] > max)
		{
			max = A[i] + A[i + 1];
			pos = i;
		}
	}
	std::cout << A[pos] << ", " << A[pos + 1];
	return 0;
}
