// 1. Напишите унарную функцию, которая применяется в алгоритме std::for_each () 
// для отображения входного параметра типа double.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
template <typename T>
struct task1
{
    void operator() (const T& input) const
    {
        cout << input << " ";
    }
};

int main()
{
    vector<double> array;

    array.push_back(10.5);
    array.push_back(12.5);
    array.push_back(14.5);

    for_each(array.begin(), array.end(), task1<double>());

    return 0;
}