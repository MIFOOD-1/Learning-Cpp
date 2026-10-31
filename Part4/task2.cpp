// 2 Фильтр чисел
// Напиши функтор IsGreater, который принимает число limit при создании объекта. 
// При вызове с другим числом возвращает true, если число больше limit, и false в противном случае.
// Проверь его на векторе {3, 12, 5, 20, 8, 15} с ограничением 10. 
// Выведи числа, которые проходят проверку.
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

struct IsGreater
{
    int limit;

    IsGreater(): limit(10){};

    IsGreater(int number): limit(number){};

    bool operator()(const int& number) const
    {
        if(number > limit)
            return true;
        else
            return false;
    }
};

int main()
{
    vector<int> Number = {10, 21, 2, 23, 2, 4, 7 , 33, 9};

    IsGreater Functor;

    for(auto Element = Number.begin(); Element != Number.end(); ++Element)
    {
        Element = find_if(Element, Number.end(), Functor);
        if(Element != Number.end())
            cout << *Element << " ";
    }

    return 0;
}