#include <iostream>
#include"kyrs.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    int dis;

    std::cout << "gET DIS";
    std::cin >> dis;
    FastCam FC;
    Camel C;
    Centavr Cent;
    Boots B;
    B.get_time(dis);
    Cent.get_time(dis);
    C.get_time(dis);
    FC.get_time(dis);
    std::cout << B.get_res();
}