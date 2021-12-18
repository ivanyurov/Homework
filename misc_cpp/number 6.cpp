int main() 
{
    for (double y = 1.5; y >= -1.5; y=y-(double)3/20) 
    {
        for (double x = -1.5; x <= 1.5; x=x+(double)3/40)
        {
            if (((x * x + y * y - 1) * (x * x + y * y - 1) * (x * x + y * y - 1) - x * x * y * y * y) <= 0) std::cout << "*";
            else std::cout << ".";
        }
        std::cout << "\n";
    }
    system("pause");
    return 0;
}
