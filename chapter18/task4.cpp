// 4. Напишите программу, обращающую список строк.

#include <iostream>
#include <list>
#include <string>
using namespace std;

void showlist(list <string> &listInput)
{

    for(auto iterator = listInput.begin(); iterator != listInput.end(); iterator++)
        cout << *iterator;
    cout << endl;
}

int main()
{
    list <string> list_object;

    list_object.push_back("Hello");
    list_object.push_back("world!");
    list_object.push_front("I say - ");

    cout << "list before use reverse: " << endl;
    showlist(list_object);

    list_object.reverse();
    cout << "list after use reverse: " << endl;
    showlist(list_object);

    return 0;
}
