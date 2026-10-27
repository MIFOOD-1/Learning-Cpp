// Задача 8. Сравнение множеств
// Даны два множества set<int> — например, числа участников двух групп.
// Найди:
// - Общие элементы двух множеств.
// - Все элементы, которые есть хотя бы в одном множестве.
// - Элементы, которые есть только в первом множестве.
// Используй алгоритмы STL, если они подходят.
// Повторение: set, итераторы, алгоритмы множеств.
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> object1 = {1, 2, 3, 4, 5, 6};
    set<int> object2 = {3, 5, 7, 9, 11, 12};
    
    set<int> all;
    for(auto element = object1.begin(); element != object1.end(); ++element)
        all.insert(*element);

    for(auto element = object2.begin(); element != object2.end(); ++element)
        all.insert(*element);                                                   //с чего бы это общие жлементы? просто все добавятся которые есть, а те которые не совпадают не добавятся 
    
    set<int> concurrence;

    for(auto element = object1.begin(); element != object1.end(); ++element)
        for(auto element2 = object2.begin(); element2 != object2.end(); ++element2)
            if(*element == *element2)
                concurrence.insert(*element2);    
    

    cout << "object1: ";
        for(auto iterator : object1)
            cout << iterator << " ";
    cout << endl;


    cout << "object2: ";
        for(auto iterator : object2)
            cout << iterator << " ";
    cout << endl;
        

    cout << "all: ";
        for(auto iterator : all)
            cout << iterator << " ";
    cout << endl;


    cout << "concurrence: ";
        for(auto iterator : concurrence)
            cout << iterator << " ";
    cout << endl;
        
    return 0;
}