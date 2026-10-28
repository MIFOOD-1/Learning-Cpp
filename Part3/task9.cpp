// Задача 11. Телефонный справочник
// Реализуй телефонный справочник через map<string, string>.
// - Добавление имени и номера.
// - Поиск номера по имени.
// - Изменение существующего номера.
// - Удаление записи.
// - Вывод всех записей.
// Обработай случай, когда имя не найдено.
// Повторение: map, пары ключ-значение, поиск, условия.

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, string> phoneBook;
    phoneBook.insert(make_pair("Ichigo", "+7 910 456 23 23"));
    phoneBook.insert(make_pair("Choso", "+1 722 456 43 23"));
    phoneBook.insert(make_pair("Rukia", "+7 453 922 23 23"));

    auto iterator = phoneBook.find("Ichigo");
    cout << "Iterator = " << iterator->first << " " << iterator->second << endl;
    
    

}