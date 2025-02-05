#include <iostream>
#include <string>
#include "Header.h"

std::string month_to_season(int month)
{
    if ((month >= 1) && (month <= 2) || (month == 12))
        return "winter";
    if ((month >= 3) && (month <= 5))
        return "spring";
    if ((month >= 6) && (month <= 8))
        return "summer";
    if ((month >= 9) && (month <= 11))
        return "autumn";
    return "Error, out of diapazone";
}

void testing()
{
    for (int i = -1; i <= 13; i++)
    {
        std::cout << "Month " << i << " -> " << month_to_season(i) << '\n';
    }
}


int main()
{
    /*testing();
    return 6;*/
    int day = 0, month = 0;
    int day_in_month[] = {31,28,30,30,31,30,31,31,31,30,30,31};
    std::string sezon;
    std::string name = "day:";
    std::cout << name << '\n';
    std::cin >> day;
    std::string name2 = "month:";
    std::cout << name2 << '\n';
    std::cin >> month;

   
    if ((month > 12) && (month < 1))
    {
        std::cout << "eror" << '\n';
        return 2;
    }


    if ((day > day_in_month[month-1]) && (day < 1))
    {
        std::cout << "eror" << '\n';
         return 4;
    }
     
    sezon = month_to_season(month); 
    std::cout << sezon << '\n';
        return 0;

 }





