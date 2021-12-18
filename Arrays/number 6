int main()
{
	const int N = 10;
	int pos;
	int A[N];
	bool f = true;
	for (int i = 0; i < N; ++i) std::cin >> A[i];
	int dif = A[1] - A[0];
	for (int i = 2; i < N; ++i)
	{
		if (A[i] - A[i - 1] != dif) f = false;
	}
	if (f == false) std::cout << 0;
	else std::cout << dif;
	return 0;
}
