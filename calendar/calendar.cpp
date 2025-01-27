#include <iostream>
#include <string>

int main()
{
    //some new code added here
    int day = 0, month = 0;
    char sezon;
    std::string name = "day:";
    std::cout << name << '\n';
    std::cin >> day;
    std::string name2 = "month:";
    std::cout << name2 << '\n';
    std::cin >> month;
    std::string name3 = "time of year:";
    std::cout << name3 << '\n';
    std::cin >> sezon;

    // 12 January Winter


    if (day < 32)
    {
        std::cout << day << '\n';
    }
    else if (day > 32) // добавить ошибку отрицательного числа 
    {
        std::cout << "eror" << '\n';
        return 1;
    }

    char  january_month_max_day = 31 , x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12; // переделать на текстовый month

    if (january_month_max_day < 32)
    {
        std::cout << "January";
    }
    else if (x1 > 32)
    {
        std::cout << "eror" << '\n';
    }
    if (x2 < 29)
    {
        std::cout << "February";
    }
    else if (x2 > 29)
    {
        std::cout << "eror" << '\n';
    }
    if (x3 < 31)
    {
        std::cout << "March";
    }
    else if (x3 > 31)
    {
        std::cout << "eror" << '\n';
    }
    if (x4 < 30)
    {
        std::cout << "April";
    }
    else if (x4 > 30)
    {
        std::cout << "eror" << '\n';
    }
    if (x5 < 31)
    {
        std::cout << "May";
    }
    else if (x5 > 31)
    {
        std::cout << "eror" << '\n';
    }
    if (x6 < 30)
    {
        std::cout << "June";
    }
    else if (x6 > 30)
    {
        std::cout << "eror" << '\n';
    }
    if (x7 < 31)
    {
        std::cout << "July";
    }
    else if (x7 > 31)
    {
        std::cout << "eror" << '\n';
    }
    if (x8 < 31)
    {
        std::cout << "August";
    }
    else if (x8 > 31)
    {
        std::cout << "eror" << '\n';
    }
    if (x9 < 30)
    {
        std::cout << "September";
    }
    else if (x9 > 30)
    {
        std::cout << "eror" << '\n';
    }
    if (x10 < 31)
    {
        std::cout << "October";
    }
    else if (x10 > 31)
    {
        std::cout << "eror" << '\n';
    }
    if (x11 < 30)
    {
        std::cout << "November";
    }
    else if (x11 > 30)
    {
        std::cout << "eror" << '\n';
    }
    if (x12 < 31)
    {
        std::cout << "Desember";
    }
    else if (x12 > 31)
    {
        std::cout << "eror" << '\n';
    }



    char q1, q2, q3, q4;

    if (q1 == x12, x1, x2);
    {
        std::cout << "Winter";
    }
    if (q2 == x3, x4, x5);
    {
        std::cout << "Spring";
    }
    if (q3 == x6, x7, x8);
    {
        std::cout << "Summer";
    }
    if (q4 == x9, x10, x11);
    {
        std::cout << "Autumn";
    }

    return 0;
 }





