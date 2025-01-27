#include "tasks_if_topic.h"

void prototype_function()
{
	std::cout << "prototype f";
}

void main2()
{
	std::srand(std::time(nullptr));
	int random_value = std::rand();
	int x;
	for (;;) // (while(true);
	{
		printf("asdasda");
		std::cin >> x;

		if (x > random_value)
		{
			std::cout << "ice\n";
		}

		else if (x < random_value)
		{
			std::cout << "hot\n";

		}
		else
		{
			std::cout << "super\n";
			break;
		}
	}

}

void game_ugadai_chislo()
{
	int x;
	std::cin;
	if (true)//доделать
	{
		std::cout << "number BIGGER than 10\n";


	}

	else
	{

		std::cout << "numver less then 10\n";

	}
}


void primer_1()
{
	const char* str = "hello world";

	for (char* i = (char*)str; i < str + strlen(str); i++)
	{
		std::cout << (int)*i << ' ' << (int)*(i + 1) << '\n';
	}
}