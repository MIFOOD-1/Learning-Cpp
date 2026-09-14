#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string name("Hello world!");
    
    for(size_t index = 0; index < name.length(); index++)
    {
        (name[index] = toupper(name[index]));
    }

    cout << name;

    return 0;
}