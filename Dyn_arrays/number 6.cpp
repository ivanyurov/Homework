int length(int x)
{
	int res = 0;
	while (x)
	{
		res++;
		x /= 10;
	}
	return res;
}
int main()
{
	int n, m, max = 0;
	std::cin >> n >> m;
	int** mass = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		mass[i] = new int[m];
	}
	for (int j = 0; j < m; ++j)
	{
		for (int i = 0; i < n; ++i)
		{
			mass[i][j] = (long long)rand()*100000/32767;
			if (mass[i][j] > max) max = mass[i][j];
		}
	}
	max = length(max);
	for (int j = 0; j < m; ++j)
	{
		for (int i = 0; i < n; ++i)
		{
			int x = length(mass[i][j]);
			for (int i = 0; i <= max - x; ++i) std::cout << " ";
			std::cout << mass[i][j];
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < n; ++i)
		delete[] mass[i];
	delete[] mass;
	system("pause");
	return 0;
}
