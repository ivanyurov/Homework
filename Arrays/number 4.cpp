int main()
{
	const int N = 10;
	int A[N];
	for (int i = 0; i < N; ++i) std::cin >> A[i];
	for (int i = 0; i < N; ++i)
	{
		if (i % 2 == 0) std::cout << A[i / 2] << " ";
		else std::cout << A[N - (i+1)/ 2] << " ";
	}
	return 0;
}
