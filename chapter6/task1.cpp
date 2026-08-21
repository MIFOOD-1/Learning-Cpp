// 1. Напишите цикл for для доступа к элементам массива в обратном порядке
#include <iostream>
using namespace std;

const int SIZE = 5;

int main()
{
    int array[SIZE] = {1, 2, 3, 4, 5};

    for(int i = SIZE -1; i >= 0; i--)
        cout << array[i] << endl;

    return 0;
}