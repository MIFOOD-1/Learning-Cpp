// 4. У вашей программы должно быть четыре строковых объекта, инициализированны* 
// как “I”, “Love”, “STL” и “String”. Добавьте к ним промежуточные пробелы и ото
// бразите предложение.


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string name1("I");
    string name2("Love");
    string name3("STL");
    string name4("String");

    name1.append(" ");
    name2.append(" ");
    name4.insert(0, " ");

    string name5(name1+name2+name3+name4);

    cout << name5;

    return 0;
}