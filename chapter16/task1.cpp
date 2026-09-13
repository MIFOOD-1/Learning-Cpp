// 1. Напишите программу проверки введенных пользователем слов на палиндром. Напри
// мер: слово ATOYOTA — палиндром, поскольку при обращении оно не изменяется
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string name;
    string name2;
    string name3;
    cin >> name;

    int lol = name.length();
    if(lol != 0 && (lol % 2) != 0)
    {
        
        name2 = string(name, 0, lol / 2);
        reverse(name2.begin(), name2.end());

        name3 = string(name, (lol / 2) + 1);
    }
    else if(lol != 0)
    {
        name2 = string(name, 0, lol / 2);
        reverse(name2.begin(), name2.end());
        name3 = string(name, lol / 2);
    }
    else
        printf("Vi nichegi ne vveli");

    if(lol != 0)
    {
        if(name2 == name3)
            cout << "Vashe slovo palindrom";
    }
        
    return 0;
}