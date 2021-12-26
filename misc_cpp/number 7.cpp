#include<iostream>
int main()
{
	int flag;
	long long a = 0;
	long long r;
	std::cin >> r;
	long long f = r;
	long long s;
	long long d = r * r;
	long long res;
	for (long long i = f; i >= f / 2; --i)
	{
		s = i * i;
		flag = 0;
		for (long long j = r; j >= 0; --j)
		{
			if (s + j * j <= d) break;
			++a;
			++flag;
		}
		if (flag == 0) break;
		--r;
	}
	res = (long long)d*4 - a * 8 + (long long)4 * (f - r)+f*4+1;
	std::cout << res;
	system("pause");
	return 0;
}
