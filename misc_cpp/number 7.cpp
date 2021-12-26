#include<iostream>
#include <cmath>
int main()
{
	long double b;
	long long a = 0;
	int r;
	double p = 3.14159265358979323846;
	std::cin >> r;
	if (r <= 10000)
	{
		for (int i = r; i > 0; --i)
		{
			for (int j = 1; j <= r; ++j)
			{
				b = sqrt(i * i + j * j);
				if (b <= r) ++a;
			}
		}
		a = a * 4 + r * 4 + 1;
	}
	else a = (long long)r * r * p;
	std::cout << a;
	system("pause");
	return 0;
}
