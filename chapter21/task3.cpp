// 3. Напишите бинарный предикат, обеспечивающий сортировку в порядке возрастания.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
struct task3
{
    bool operator() (const T& str1, const T& str2)
    {
        return str1 < str2;
    }
};

template <typename T>
void show(const T& name)
{
    for(auto iElement = name.begin(); iElement != name.end(); iElement++)
        cout << *iElement << ' ';
    cout << endl;
}

int main()
{
    vector<int> array;
    array.push_back(10);
    array.push_back(7);
    array.push_back(1);
    array.push_back(220);

    cout << "before sort: ";
    show(array);
    sort(array.begin(), array.end(), task3<int>());
    
    cout << "after sort: ";
    show(array);

    return 0;
}
