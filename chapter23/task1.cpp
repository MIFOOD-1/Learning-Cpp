// 1. Напишите бинарный предикат, получающий строки как входные аргументы и воз
// вращающий значение на основании независящего от регистра сравнения.

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

template<typename T>
bool Predicat_notRegister(const T& Lstr, const T& Rstr)
{
    T left, right;
    left.resize(Lstr.size());
    right.resize(Rstr.size());


    transform(Lstr.begin(), Lstr.end(), left.begin(), [](char c){return toupper(c);});
    transform(Rstr.begin(), Rstr.end(), right.begin(), [](char c){return toupper(c);});

    return left < right;
}

template<typename T>
void Display(const T&  Input)
{
    for(auto iElement = Input.begin(); iElement != Input.end(); ++iElement)
        cout << *iElement << endl;
    cout << endl;
}

int main()
{
    vector<string> vecNameString;
    vecNameString.push_back("Adam Sendler");
    vecNameString.push_back("Brok Ebigneil");
    vecNameString.push_back("ADAm SEndler");
    vecNameString.push_back("brayan griffin");

    cout << "vecNameString before sort: " << endl;
    Display(vecNameString);

    sort(vecNameString.begin(), vecNameString.end(), Predicat_notRegister<string>);

    cout << "vecNameString after sort with predicat: " << endl;
    Display(vecNameString);

    return 0;
}