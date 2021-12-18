#include <cmath>
int fact(int n)
{
	int a = 1;
	for (int i = 1; i <= n; ++i) a *= i;
	return a;
}
int main()
{
	int x1, x2;
	int dx, exp;
	double f = 0;;
	int b = 1;
	std::cin >> x1 >> x2 >> dx >> exp;
	for (int i = x1; i <= x2; i += dx)
	{
		f = 0;
		b = 1;
		int a = 1;
		for (int j = 1; j <= exp; ++j)
		{
			f += b * pow(i, a) / fact(a);
			b *= -1;
			a += 2;
		}
		std::cout << f << "    " << sin(i) << "\n";
	}
	system("pause");
	return 0;
}
