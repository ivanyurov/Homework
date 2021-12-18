1)
#include<string>
int main()
{
	std::string num;
	int a;
	std::cin >> a;
	while (a > 0)
	{
		switch (a%16)
		{
		case 0:num.insert(0, "0");
			break;
		case 1:num.insert(0, "1");
			break;
		case 2:num.insert(0, "2");
			break;
		case 3:num.insert(0, "3");
			break;
		case 4:num.insert(0, "4");
			break;
		case 5:num.insert(0, "5");
			break;
		case 6:num.insert(0, "6");
			break;
		case 7:num.insert(0, "7");
			break;
		case 8:num.insert(0, "8");
			break;
		case 9:num.insert(0, "9");
			break;
		case 10:num.insert(0, "A");
			break;
		case 11:num.insert(0, "B");
			break;
		case 12:num.insert(0, "C");
			break;
		case 13:num.insert(0, "D");
			break;
		case 14:num.insert(0, "E");
			break;
		case 15:num.insert(0, "F");
			break;
		}
		a /= 16;
	}
	std::cout << num;
	system("pause");
	return 0;
}
2)
#include<string>
int main()
{
	std::string num;
	int a = 0;;
	int x = 1;
	std::cin >> num;
	for (int i = num.size() - 1; i >= 0; --i)
	{
		switch (num[i])
		{
		case '0':a = a + 0;
			break;
		case '1':a = a + x;
			break;
		case '2':a = a + x*2;
			break;
		case '3':a = a + x*3;
			break;
		case '4':a = a + x*4;
			break;
		case '5':a = a + x*5;
			break;
		case '6':a = a + x*6;
			break;
		case '7':a = a + x*7;
			break;
		case '8':a = a + x*8;
			break;
		case '9':a = a + x*9;
			break;
		case 'A':a = a + x*10;
			break;
		case 'B':a = a + x*11;
			break;
		case 'C':a = a + x*12;
			break;
		case 'D':a = a + x*13;
			break;
		case 'E':a = a + x*14;
			break;
		case 'F':a = a + x*15;
			break;
		}
		x *= 16;
	}
	std::cout << a;
	system("pause");
	return 0;
}
