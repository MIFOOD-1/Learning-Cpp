// 1. Напишите программу проверки введенных пользователем слов на палиндром. Напри
// мер: слово ATOYOTA — палиндром, поскольку при обращении оно не изменяется
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string name;
    cin >> name;

    size_t value = name.length();
    size_t value2;
    if(value != 0)
    {
        value2 = value / 2;
    }
  
    if(value != 0)
    {
        string name2 = name;
        name2.erase(value, value2);
        reverse(name2.begin(), name2.end());
        cout << name2;
    }

    return 0;
}