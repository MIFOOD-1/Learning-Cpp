// Задача 10. Поиск без учёта регистра
// Возьми телефонный справочник из предыдущей задачи и создай map<string, string, PredIgnoreCase>.
// Реализуй компаратор, который игнорирует регистр.
// Проверь:
// - Считаются ли "Alex", "alex" и "ALEX" эквивалентными ключами.   //нет не считаются, если не создать под это условия как в моем примере 
// - Можно ли добавить две записи с такими именами.         //смотря в каком случае, в мультисет да спокойно,в остальных какое условие смотря
// - Найдётся ли "ALEX", если в карте сохранён "Alex".      //если поставить условия поиска, то да
// - Чем поведение отличается от обычного map<string, string>.      //тем что сортировка идет по указоному мной правилу
// Повторение: шаблоны, функциональные объекты, перегрузка operator(), строгий слабый порядок.

#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
struct func
{
bool operator()(const T& left, const T& right) const
{
    T leftcopy = left;
    T rightcopy = right;
    
    transform(leftcopy.begin(), leftcopy.end(), leftcopy.begin(), [](char name){return tolower(name);});
    transform(rightcopy.begin(), rightcopy.end(), rightcopy.begin(), [](char name){return tolower(name);});

    return leftcopy < rightcopy;
}
};

int main()
{
    map<string, string, func<string>> name;
    name.insert(make_pair("Ichigo", "+7 910 456 23 23"));
    name.insert(make_pair("Choso", "+1 722 456 43 23"));
    name.insert(make_pair("Rukia", "+7 453 922 23 23"));
    name.insert(make_pair("RUKIA", "+9 123 123 22 22"));


    for(auto element = name.begin(); element != name.end(); ++element)
        cout << element->first << ": " << element->second << endl;

    return 0;
}