// Задача 7. Уникальные пользователи
// Используй set<string> для хранения имён пользователей.
// - Добавляй новые имена.
// - Не допускай дубликатов.            //а как получаться дубликаты, если их сохранять не способен? эт мультисет так может
// - Проверяй наличие имени.
// - Удаляй имя.
// - Выводи имена в отсортированном порядке.
// Повторение: set, поиск, вставка, удаление.

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<string> name;
    name.insert("Hey");
    name.insert("Hey");
    name.insert("Hello");
    name.insert("World");
    name.insert("!");


 
    name.erase("Hello");

    
    for(auto element = name.begin(); element != name.end(); ++element)
        cout << *element << endl;

    return 0;
}


