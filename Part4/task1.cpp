// 1 Счётчик вызовов
// Создай функтор Counter, который хранит количество своих вызовов в поле count. 
// Перегрузи operator(), чтобы каждый вызов увеличивал счётчик на единицу.
// - Вызови объект 7 раз.
// - Выведи итоговое значение.
// - Передай функтор в for_each для вектора из 10 чисел и получи количество 
// обработанных элементов через возвращённый объект.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
struct Functor
{
    int Counter;
    Functor(): Counter(0){};

    void operator()(const T& num1)
    {
        ++Counter;
        cout << "\"" << num1 <<  "\"" << " * \"" << num1 << "\"" << " = " << num1 * num1 << endl;
    }
};

int main()
{
    vector<int> name;
    name.push_back(1);
    name.push_back(2);
    name.push_back(3);
    name.push_back(4);
    name.push_back(5);
    name.push_back(6);
    name.push_back(7);
    name.push_back(8);
    name.push_back(9);
    name.push_back(10);
    
    Functor<int> point = for_each(name.begin(), name.begin() + 7, Functor<int>());
    cout << "pont after first for_each " << point.Counter << endl;

    cout << endl;

    point = for_each(name.begin(), name.end(), point);
    cout << "pont after person for_each " << point.Counter << endl;

    return 0;
}

