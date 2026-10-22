// Задача 2. Поиск и сортировка чисел
// Создай vector<int> из 10 чисел.
// - Отсортируй числа через sort().
// - Найди число, введённое пользователем, через find().
// - Выведи минимальный и максимальный элементы.
// - Удали дубликаты, используя sort() и unique().
// Повторение: шаблоны, итераторы, алгоритмы STL.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> array;
    array.push_back(2);
    array.push_back(23);
    array.push_back(9);
    array.push_back(11);
    array.push_back(15);
    array.push_back(-10);
    array.push_back(2);
    array.push_back(100);
    array.push_back(1);
    array.push_back(-100);

    sort(array.begin(), array.end());

    for(auto i = array.begin(); i != array.end(); ++i)
        cout << *i << " ";

    cout << endl;

    cout << "small: " << *(array.begin()) << endl;
    cout << "big: " << *(array.end() - 1) << endl;

    int num = 0;
    cout << "Send number you want seek: ";
    cin >> num;
    auto number = find(array.begin(), array.end(), num);
    if(number != array.end())
    {
        cout << "Yes, your number have position in massiv: " << number - array.begin() << endl;
    }
    else
        cout << "No, your number is not massiv" << endl;


    auto dublicate = unique(array.begin(), array.end());
    array.erase(dublicate, array.end());

    cout << "After delete dublicate numbers" << endl;
    for(auto i = array.begin(); i != array.end(); ++i)
        cout << *i << " ";

    return 0;
}