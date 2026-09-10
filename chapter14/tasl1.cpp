// 1. Напишите макрос, умножающий два числа.
#include <iostream>

#define multiplication(x, y)  ((x) * (y))

int main()
{
    std:: cout << multiplication(10 + 10, 2);

    return 0;
}