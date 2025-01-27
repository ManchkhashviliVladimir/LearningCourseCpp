#include <iostream>

int main()
{
    int c = 42;
    int b = 107;
    int* pc = &c;
    int* pb = &b;

    int distance = &b - &c;

    std::cout << "c = " << c << '\n'
        << "&c = " << &c << '\n'
        << "&b = " << &b << '\n'
        << "*pc = " << *pc << '\n'
        << "pc = " << pc << '\n'
        << "distance = " << distance << '\n'
        << "hack = " << *( &c + distance )<< '\n'
        << "hack = " << *(pc + 12) << '\n'
        ;



}
