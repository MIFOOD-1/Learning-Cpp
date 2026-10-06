// 2. Статистика массива
// Пользователь вводит 10 чисел.
// Нужно вывести:
// Минимум:
// Максимум:
// Сумма:
// Среднее:
// Количество положительных:
// Количество отрицательных:

// Используй обычный массив:
// int numbers[10];

// Не используй vector — пока специально закрепляем массивы.

#include <iostream>
using namespace std;

void MAXandMin(int * array, int size, int& Min, int& Max)
{
    Min = *array;
    Max = *array;

    for(int i = 0; i < size; i++)
    {
        if(Min > *(array + i))
            Min = array[i];
        if(Max < *(array + i))
            Max = array[i];
    }
}

void SumandAverage(int * array, int size)
{
    int sum, average;
    sum = average = 0;
    for(int i = 0; i < size; i++)
        sum += array[i];
    average = sum / size;
    
    cout << "array sum = " << sum << endl;
    cout << "array average = " << average << endl;
}

int main()
{
    int numbers[10] = {10, 2, 1, 3, 4, 10, 2, 13, 5, 6};
    int min, max;

    MAXandMin(numbers, 10, min, max);
    cout << "min = " << min << endl << "max = " << max << endl;
    SumandAverage(numbers, 10);

    return 0;
}