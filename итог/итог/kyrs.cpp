#include <iostream>
#include"kyrs.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    RACE RACE(4500);

    Camel C;
    C.get_time();
    std::cout << C.get_res();
}