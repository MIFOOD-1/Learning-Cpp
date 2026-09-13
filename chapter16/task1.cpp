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

    long long lol = name.length();
    if(lol != 0)
    {
        
        string name2(name, lol/2);
        reverse(name2.begin(), name2.end());
        cout << name2;
    }

    return 0;
}