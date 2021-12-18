int main()
{
	int h=0, m=0, s=0, h1=0, m1=0, s1=0;
	std::cin >> h >> m >> s >> h1 >> m1 >> s1;
	int a = s + m * 60 + h * 3600;
	int b = s1 + m1 * 60 + h1 * 3600;
	if (b > a) a = b - a;
	else a = a - b;
	h = a / 3600;
	a = a % 3600;
	m = a / 60;
	a = a % 60;
	s = a;
	std::cout << h << ":" << m << ":" << s;
	system("pause");
	return 0;
}
