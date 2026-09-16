// 3. Напишите программу, которая вставляет содержимое вектора в список, используя 
// функцию вставки класса list.

#include <iostream>
#include <vector>
#include <list>

using namespace std;

void show_list(list <int> &inputValue) 
{
    for( auto iterator = inputValue.begin(); iterator != inputValue.end(); iterator++)
        cout << *iterator << " ";
    cout << endl;
}

int main()
{
    vector <int> array_vector ={1, 2, 3, 4, 5};
    list <int> list_object;

    list_object.insert(list_object.begin(), array_vector.begin(), array_vector.end());

    show_list(list_object);

    return 0;
}