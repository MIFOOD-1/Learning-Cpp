// 1. Необходимо написать приложение, работающее как телефонный справочник, где 
// имена людей не должны быть уникальными. Какой контейнер выбрать? Напишите 
// определение контейнера.

#include <iostream>
#include <map>
#include <string>

using namespace std;

struct book_phone
{
    string name;
    string phone;
    string name_phone;

    book_phone(const string& NameInput, const string& PhoneInput): name(NameInput), phone(PhoneInput), name_phone(NameInput + ": " + PhoneInput){};

    operator const char*() const
    {
        return name_phone.c_str();
    }
};

template <typename T>
void DisplayContents(const T& Input)
{
    for(auto iElement = Input.cbegin(); iElement != Input.cend(); iElement++)
        cout << iElement->first << " -> " << iElement->second << endl;
    cout << endl;
}

int main()
{
    multimap<int, book_phone> mmobject;
    
    mmobject.insert(make_pair(5, book_phone("Oleg", "+6 715 633 42 55")));
    mmobject.insert(make_pair(2, book_phone("Danil", "+9 155 623 14 23")));
    mmobject.insert(make_pair(3, book_phone("Roma", "+1 275 603 54 35")));
    mmobject.insert(make_pair(2, book_phone("ALex", "+7 315 633 64 52")));
    mmobject.insert(make_pair(10, book_phone("Oleg", "+2 495 623 44 15")));

    DisplayContents(mmobject);

    return 0;
}
