#pragma once
#include <string>
#include <iostream>

int kvadratniy_koren(int number)
{
    int buduscee_znachenit;
    buduscee_znachenit = number / number;
    //  calculation of square root i zapisat v buduscee_znachenit
    return buduscee_znachenit;
}

void stroka(std::string sroka_na_pechat)
{
    std::cout << sroka_na_pechat;
}

int seed = 0;
//
//void srand(int x = 1)
//{
//    seed = x;
//}
//
//int rand()
//{
//    seed += 1;
//    seed *= 32;
//    return seed;
//}


void pseudo_main()
{
    // код который запускается до мэйна
   // srand();
    // код в мэйне
    //srand(rand());
    int new_rand_x = rand();


    while (true)
    {
        int number1;
        std::cin >> number1; // 42 56 8652 ...
        std::cout << kvadratniy_koren(42);
        int number2;
        std::cin >> number2; // 42 56 8652 ...
        std::cout << kvadratniy_koren(number2);
    }
}


//char process_char(char x, int w, char y = '0')
//{
//    return '0';
//
//}
//
//process_char('1', 3); 
//
//process_char(x, ch2, in3);

