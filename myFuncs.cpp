#include "myFuncs.h"

int getNumber(int a, int b)
{
    int num;
    while (true)
    {
        std::cout << "Введите номер ячейки от " << a << " до " << b << ": ";
        std::cin >> num;
        if (num >= a && num <= b)
        {
            break;
        }
        std::cout << "Неверный номер!" << std::endl;
    }
    return num;
}