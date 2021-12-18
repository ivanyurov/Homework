#include<cmath>
int main()
{
	long double b;
	int a = 0;
	int r;
	std::cin >> r;
	for (int i = r; i >= -r; --i)
	{
		for (int j = -r; j <= r; ++j)
		{
			b = sqrt(i * i + j * j);
			if (b <= r) ++a;
		}
	}
	std::cout << a;
	system("pause");
	return 0;
}
