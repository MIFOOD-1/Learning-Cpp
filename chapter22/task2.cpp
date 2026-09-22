// 2. Напишите лямбда-функцию, которая, будучи использована в алгоритме for_each (), добавит заданное пользователем значение к значению элемента такого 
// контейнера, как вектор.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void Display(const T& Input)
{
    for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
    {
        cout << *iElement << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> value;
    value.push_back(1);
    value.push_back(2);
    value.push_back(3);
    value.push_back(4);
    value.push_back(5);


    cout << "Display vector value before for_each: " << endl;
    Display(value);

    
    cout << "vvedite chislo kotoroe pribavite vsemu massivu: ";
    int random;
    cin >> random;

    auto elementLocator = for_each(value.begin(), value.end(), [random](int &input){input += random;});

    cout << "Display vector value after for_each: " << endl;
    Display(value);

    return 0;
}