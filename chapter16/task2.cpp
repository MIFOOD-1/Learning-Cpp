// 2. Напишите программу, сообщающую пользователю количество гласных в предло
// жении.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string name("Hello world!");
    string vowels("eyuioaEYUIOA");
    int amount = 0;
    for(size_t index = 0; index < name.length(); index++)
    {
        if(vowels.find(name[index]) != string::npos)
            amount++;
    }

    cout << "string "<< name << " has " << amount << " vowels";

    return 0;
}