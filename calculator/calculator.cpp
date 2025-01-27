#include <iostream>
#include <string>


void calculator_bleat( int x, int y, char z)

{
    if (z == '+')
    {
        std::cout << "x+y=" << x + y << '\n';
    }
    else if (z == '-')
    {
        std::cout << "x-y=" << x - y << '\n';
    }
    else if (z == '*')
    {
        std::cout << "x*y=" << x * y << '\n';
    }
    else  if (z == '/')
    {
        if (y == 0)
        {
            std::cout << "eror";
            return ;
        }
        std::cout << "x/y=" << x / y << '\n';
    }
    else  if (z == '%')
    {
        std::cout << "x%y="
            << static_cast<int> (x) % static_cast<int>(y)
            << '\n';
    }

    else
        std::cout << "ochibka vvoda operacii";

}

int main()

{
    float x = 0, y = 0;
    char z;
    char pamiat_snova_reshaem_y_n;
    std::string name = "pervoe chislo:";
    std::cout << name << '\n';
    std::cin >> x;
    std::string name2 = "vtoroe chislo:";
    std::cout << name2 << '\n';
    std::cin >> y;
    std::string name3 = "vibor operacy (+ - * / %):";
    std::cout << name3 << '\n';
    std::cin >> z;


    /*std::cout << "Hotite reshit primer snova? y/n";
    std::cin >> pamiat_snova_reshaem_y_n;

    if (pamiat_snova_reshaem_y_n)
    {
        std::cout << "Hotite reshit primer snova? y/n";
    }
        calculator_bleat(x, y, z);*/


}