int main()
{
	const int N = 3;
	int A[N];
	int x;
	int a = 1;
	std::cin >> x;
	int sum = 0;
	for (int i = 0; i < N; ++i) std::cin >> A[i];
	for (int i = 0; i < N; ++i)
	{
		sum += a * A[N-i-1];
		a *= x;
	}
	std::cout << sum;
	system("pause");
	return 0;
}
