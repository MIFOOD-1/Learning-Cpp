// 2. Напишите вложенный цикл, эквивалентный использованному в листинге 6.13, но 
// добавляющий элементы в два массива в обратном порядке.

//Листинг 6.13 Использование вложеннхы циклов для умножения каждого элемента одного массива на каждый элемент другого
#include <iostream>
using namespace std;

int main()
{
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;

    int MyInts1[ARRAY1_LEN] = {35, -3, 0};
    int MyInts2[ARRAY2_LEN] = {20, -1};

    cout << "Multiplying each int in MyInts1 by each in MyInts2:" << endl;

    for(int index = ARRAY2_LEN - 1; index >= 0; index--)
        for(int i = ARRAY1_LEN - 1; i >= 0; i--)
            cout << MyInts2[index] << " x " << MyInts1[i] << " = " << MyInts2[index] *  MyInts1[i] << endl;

    return 0;
}
