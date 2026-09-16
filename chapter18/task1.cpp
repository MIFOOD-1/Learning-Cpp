// 1. Напишите короткую программу, которая получает введенные пользователем числа 
// и вставляет их в начало списка
#include <iostream>
#include <list>

using namespace std;

void inputList(list <int> &inputValue, int &value)
{
    inputValue.push_front(value);
}

void show_list(list <int> &inputValue) 
{
    for( auto iterator = inputValue.begin(); iterator != inputValue.end(); iterator++)
        cout << *iterator << " ";
}
int main()
{
    std::list <int> some_object;
    int some_num;
    
    cout << "vvedite skolko znacheni vi hotite vvesti: ";
    int index = 0;
    cin >> index;
    
    for(int i = 0; i < index; i++)
    {   cout << "Vvedite znachenie kotoroe hotite dobavit: ";
        cin >> some_num;
        inputList(some_object, some_num);
    }

    show_list(some_object);

    return 0;
}