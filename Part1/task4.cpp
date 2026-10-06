// 🟠 Уровень 3 — посложнее
// 5. Динамический массив
// Пользователь вводит:
// Сколько чисел вы хотите ввести? 7

// Ты динамически выделяешь память:
// int* numbers = new int[size];

// Потом:
// 1. заполняешь массив;
// 2. выводишь его;
// 3. находишь min/max;
// 4. считаешь среднее;
// 5. освобождаешь память.
// Причём попробуй сделать отдельные функции:
// void input(int* arr, int size);
// int findMin(const int* arr, int size);
// int findMax(const int* arr, int size);

// Бонус
// Сделай так, чтобы внутри print() использовался отдельный указатель

#include <iostream>
using namespace std;

void Input(int* arr, int size)
{
    int * arrayPtr = arr;
    for(; arrayPtr !=  arr + size; ++arrayPtr)
    {
        cout << "Input value: ";
        cin >> *arrayPtr;
    }
}

int Max(int * array, int size)
{
    int Max = *array;

    for(int i = 1; i < size; i++)
    {
        if(Max < *(array + i))
            Max = array[i];
    }

    return Max;
}

int Min(int * array, int size)
{
    int Min = *array;

    for(int i = 1; i < size; i++)
    {
        if(Min > *(array + i))
            Min = array[i];
    }

    return Min;
}

void SumandAverage(int * array, int size)
{
    int sum = 0;
    double average = 0;

    for(int i = 0; i < size; i++)
        sum += array[i];
    average = (double)sum / size;
    
    cout << "array sum = " << sum << endl;
    cout << "array average = " << average << endl;
}

void po_ne_tiv(int * array, int size)
{
    int positive, negative;
    positive = negative = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] >= 0)
            ++positive;
        else
            ++negative;
    }

    cout << "array positive numbers = " << positive << endl;
    cout << "array negative numbers = " << negative << endl;
}

int main()
{
    cout << "Vvedite dlinu massiva: ";
    int size = 0;
    cin >> size;
    int * numbers = new(nothrow) int[size];

    if(numbers != nullptr)
    {
    
    Input(numbers, size);
    int min, max;

    cout << "Show array: ";
    for(int index = 0; index < size; ++index)
        cout << numbers[index] << " ";
    cout << endl;

    min = Min(numbers, size);
    max = Max(numbers, size);
    cout << "min = " << min << endl << "max = " << max << endl;
    SumandAverage(numbers, size);
    po_ne_tiv(numbers, size);

    delete[] numbers;
    }
    return 0;
}