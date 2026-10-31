// 3 Преобразование вектора
// Дан вектор {2, 4, 6, 8, 10}.
// Используя transform и лямбда-выражение:
// - умножь каждое число на 3;
// - запиши результаты в тот же вектор;
// - выведи результат.
// Дополнительное условие: не используй отдельную именованную функцию.

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    vector<int> array = {2, 4, 6, 8, 10};


    cout << "Before transform: ";
    for(auto Element = array.begin(); Element != array.end(); ++Element)
        cout << *Element << " ";

    cout << endl;    

    transform(array.begin(), array.end(), array.begin(), [](int number){return number * 3;});

    cout << "After transform: ";
    for(auto Element = array.begin(); Element != array.end(); ++Element)
        cout << *Element << " ";

    return 0;
}