// 4 Захват по значению и по ссылке
// Создай переменную int bonus = 5 и вектор {10, 20, 30}.
// - С помощью for_each и лямбды с захватом по значению выведи каждое число вместе с bonus.
// - Затем с помощью захвата по ссылке увеличь bonus на 2 для каждого элемента.
// - Выведи итоговое значение bonus.
// Объясни, почему в первом случае исходный bonus не меняется, а во втором меняется.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> array = {10, 20, 30};
    int bonus = 5;

    for_each(array.begin(), array.end(), [bonus](int num){cout << num << " bonus: " << bonus << endl;});

    cout << endl;

    for_each(array.begin(), array.end(), [&bonus](int num){cout << num << " bonus: " << bonus << endl; bonus += 2;});

    cout << "Bonus after for_each" << ": " << bonus;

    return 0;
}