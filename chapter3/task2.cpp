/*2. Напишите программу, демонстрирующую, что размер беззнакового целого числа 
и обычного целого числа одинаков и что размер обоих их меньше, чем у длинного 
целого числа.*/

#include <iostream>

using namespace std;

int main()
{
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(unsigned int) = " << sizeof(unsigned int) << endl;
    cout << "sizeof(long long) = " << sizeof(long long) << endl;

    if(sizeof(int) == sizeof(unsigned int))
        cout <<"int and unsigned int imeut odinakoviy razmer" << endl;

    if(sizeof(int) < sizeof(long long) && sizeof(unsigned int) < sizeof(long long))
        cout << "oba menche long long";

    return 0;
}