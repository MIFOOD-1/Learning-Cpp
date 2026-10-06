// 🟡 Уровень 2 — указатели и функции
// 3. Обмен значений
// Напиши:
// void swap(int* a, int* b);

// Она должна менять значения двух переменных местами.
// Например:
// int a = 10;
// int b = 20;

// swap(&a, &b);

// После:
// a = 20
// b = 10

// Дополнительно: реализуй то же самое через ссылки:
// void swap(int& a, int& b);

// И сравни оба варианта.

#include <iostream>
using namespace std;

void swap(int * num1, int * num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void swap(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int num1 = 10;
    int num2 = 20;

    cout << "before swap*: num1 = " << num1 << " num2 = " << num2 << endl; 
    swap(&num1, &num2);
    cout << "After swap*: num1 = " << num1 << " num2 = " << num2 << endl; 
    swap(num1, num2);
    cout << "After swap&: num1 = " << num1 << " num2 = " << num2 << endl; 

    return 0;
}