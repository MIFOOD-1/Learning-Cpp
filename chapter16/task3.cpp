// 3. Преобразуйте каждый символ строки в верхний регистр.
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string name("Hello world!");


    transform(name.begin(), name.end(), name.begin(), [](char c){return (char)toupper(c);});
    
    cout << name;
}