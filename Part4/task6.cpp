// 6 Разделение на группы
// Дан вектор {13, 4, 8, 7, 2, 15, 6, 9}.
// - Используй partition, чтобы поставить все чётные числа перед нечётными.
// - Выведи результат.
// - Используя возвращённый итератор, разделяющий группы, выведи отдельно чётные и нечётные числа.
// Важно: не сортируй вектор. Порядок внутри групп сохранять необязательно.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> array = {13, 4, 8, 7, 2, 15, 6, 9};

    auto iterator = partition(array.begin(), array.end(), [](int num){return (num % 2) == 0;});

    for(auto Element = array.begin(); Element != array.end(); ++Element)
        cout << *Element << " ";

    cout << endl;

    for(auto Element = iterator; Element != array.end(); ++Element)
        cout << *Element << " ";
    
    cout << endl;

    for(auto Element = array.begin(); Element != iterator; ++Element)
        cout << *Element << " ";
    
    return 0;
}