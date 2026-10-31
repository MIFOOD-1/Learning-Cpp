// 5 Поиск и сортировка
// Дан вектор {17, 4, 9, 2, 14, 7, 11}.
// 1. Отсортируй его по возрастанию.
// 2. Проверь через binary_search, есть ли число 9.
// 3. Проверь наличие числа 10.
// 4. Найди число 7 с помощью find и выведи его позицию относительно начала вектора.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> array = {17, 4, 9, 2, 14, 7, 11};

    sort(array.begin(), array.end());


    cout << "Find number 9 in array" << endl; 
    bool Iterator = binary_search(array.begin(), array.end(), 9);

    if(Iterator != false)
        cout << "Yes";
    else
        cout << "Not";

    cout << endl;

    Iterator = binary_search(array.begin(), array.end(), 10);
    cout << "Find number 10 in array" << endl; 
    if(Iterator != false)
        cout << "Yes";
    else
        cout << "Not";

    cout << endl;

    auto Element = find(array.begin(), array.end(), 7);

    if(Element != array.end())
        cout << *Element << " position[" << Element - array.begin() << "]";

    return 0;
}