#include <iostream>
#include"kyrs.h"
#include "windows.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    system("cls");
    double num0;
    Broom B;
    num0 = B.get_time(4500);
    std::cout << num0;
    RACE R;
    R.pr_res();
    
}