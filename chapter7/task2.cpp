// 2. Напишите функцию, которая получает массив типа double.

#include <iostream>
using namespace std;

void Array(double array[], int size); 

int main()
{
    double array[3] = {1,2,3};
    int size = (sizeof(array)) / (sizeof(array[0]));
    Array(array, size);

    return 0;
}
void Array(double array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return;
}
