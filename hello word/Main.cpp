// hello world.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cstdlib>
#include <iostream>

//#include "tasks_if_topic.h"
//#include "Functions_examples.h"
//#include "cucumber.h"
#include <cassert>
#include "algorithm"

#define N 12
#define N 11
const int NN = 10;
// const float n_pi = 3.141521343647453242342345;

/*
* что выдаёт компилятор
* - ехе
* - obj
* - .dll
*/

/*
* этапы компиляции
*  препроцессинг -> компиляция всех сpp -> линковки
*/

/*
* Написать функцию выполняющую конвертацию десятичного числа в двоичное число 
* На входе имеем беззнаковое число 
* На выходе имеем переменную содержащую представление числа в двоичном счислении
* 
* Представление на выходе используется только для храненеия и для вывода в консоль
*/

//function msx use for return max between two ints
int max(int, int);

void test_max();
void test_dec_tu_bin();
std::string dec_tu_bin(int dec);





int  main(int argc, char* argv)
{
	test_max();
	test_dec_tu_bin();
	std::string result = dec_tu_bin(34342);
	std::cout << result;
}




int max (int a , int b)
{
	if (a>b)
		return a ;
	return b;
}

void test_max()
{
	assert( max(1, 2) != 1 );
	assert( max(1, 2) == 2 );
}


std::string dec_tu_bin(int dec)
{
	if (dec < 0)
		exit(2);
	std::string bin_interpretation = "";
	
	//alg...
	/*
	bin_interpretation += std::to_string(dec - (dec / 2) * 2);
	//bin_interpretation += std::to_string((dec / 2) - ((dec / 2) / 2) * 2);
	*/
	for (int ostatok{dec}, digit{0}; !(dec == 1 || dec == 0); dec = ostatok)
	{ 
		digit = dec - (dec / 2) * 2;
		ostatok = dec / 2;
		std::to_string(digit);
		bin_interpretation += std::to_string(digit);

	}
	bin_interpretation += std::to_string(dec);
	// могущественное колдунство! не трогать
	std::reverse(bin_interpretation.begin(), bin_interpretation.end());
	return bin_interpretation;
}

void test_dec_tu_bin()
{
	std::cout << "dec_tu_bin(2)" << " \"" << dec_tu_bin(2) << "\"" << std::endl;
	assert( dec_tu_bin(2) == "10");

	std::cout << "dec_tu_bin(5)" << " \"" << dec_tu_bin(5) << "\"" << std::endl;
	assert(dec_tu_bin(5) == "101");
	
	std::cout << "dec_tu_bin(12)" << " \"" << dec_tu_bin(12) << "\"" << std::endl;
	assert(dec_tu_bin(12) == "1100");
	/*int dec = 32;
	int number = 2;
	auto r = dec_tu_bin(dec);
	dec_tu_bin(number);*/
}