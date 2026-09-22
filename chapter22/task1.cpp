// 1. Напишите бинарный предикат на базе лямбды, который обеспечил бы сортировку 
// в порядке убывания.

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
    value.push_back(20);
    value.push_back(40);
    value.push_back(10);
    value.push_back(5);

    cout << "Display vector value before sort: " << endl;
    Display(value);

    sort(value.begin(), value.end(), [](const int Input1, const int Input2)->bool{return Input1 > Input2;});

    cout << "Display vector value after sort with predicat: " << endl;
    Display(value);

    return 0;
}