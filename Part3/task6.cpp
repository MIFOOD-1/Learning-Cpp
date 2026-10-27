// Задача 6. История действий
// Средняя
// Реализуй историю последних действий пользователя через list<string>.
// - Добавляй новое действие в конец.
// - Удаляй последнее действие.
// - Отменяй последнее действие и показывай предыдущее.
// - Удаляй все повторяющиеся действия.
// - Выводи историю от старого действия к новому.
// Повторение: list, итераторы, алгоритмы, работа с пустым контейнером.

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;
int main()
{
    list<string> name;
    name.push_back("Hello");
    name.push_back("World");
    name.push_back("Hello");
    name.push_back("World");

    cout << name.back() << endl;
    name.pop_back();
    cout << name.back() << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    for(auto iterator = name.begin(); iterator != name.end(); ++iterator)
    {
        cout << *iterator << endl;
    }

    name.sort();
    name.unique();

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    for(auto iterator = name.begin(); iterator != name.end(); ++iterator)
    {
        cout << *iterator << endl;
    }

    return 0;
}