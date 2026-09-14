// 1. Напишите программу проверки введенных пользователем слов на палиндром. Напри
// мер: слово ATOYOTA — палиндром, поскольку при обращении оно не изменяется

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string name = "brongorb";

    auto iterator1 = name.begin();
    auto iterator2 = name.end() - 1;

    while(iterator1 < iterator2)
    {
        if(*iterator1 != *iterator2)
            break;
        ++iterator1;
        --iterator2;
    }

    if(iterator1 >= iterator2)
        cout << name << " eto Palindrom!!!";

    return 0;
}