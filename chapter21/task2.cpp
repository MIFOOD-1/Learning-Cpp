// 2. Дополните этот предикат так, чтобы отображать количество раз его использования.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
template <typename T>
struct task1
{
    int nCout;

    task1():  nCout(0){};

    void operator() (const T& input) 
    {
        ++nCout;
        cout << input << " ";
    }
};

int main()
{
    vector<double> array;

    task1<double> name;
    array.push_back(10.5);
    array.push_back(12.5);
    array.push_back(14.5);

    name = for_each(array.begin(), array.end(), task1<double>());

    cout<< endl << "Cout: "  << name.nCout;

    return 0;
}