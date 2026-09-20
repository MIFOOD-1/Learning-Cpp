//4. Продемонстрируйте на примере простой программы, что карта не может хранить 
//совпадающие записи, а мультикарта может.


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
    multimap<string, book_phone> mmobject;
    
    mmobject.insert(make_pair("Oleg", book_phone("Oleg", "+6 715 633 42 55")));
    mmobject.insert(make_pair("Danil", book_phone("Danil", "+9 155 623 14 23")));
    mmobject.insert(make_pair("Roma", book_phone("Roma", "+1 275 603 54 35")));
    mmobject.insert(make_pair("ALex", book_phone("ALex", "+7 315 633 64 52")));
    mmobject.insert(make_pair("Oleg", book_phone("Oleg", "+2 495 623 44 15")));

    DisplayContents(mmobject);

    map<string, book_phone> mobject;
    
    mobject.insert(make_pair("Oleg", book_phone("Oleg", "+6 715 633 42 55")));
    mobject.insert(make_pair("Danil", book_phone("Danil", "+9 155 623 14 23")));
    mobject.insert(make_pair("Roma", book_phone("Roma", "+1 275 603 54 35")));
    mobject.insert(make_pair("ALex", book_phone("ALex", "+7 315 633 64 52")));
    mobject.insert(make_pair("Oleg", book_phone("Oleg", "+2 495 623 44 15")));
    
    DisplayContents(mobject);

    cout << "multymap mmobject:"<< mmobject.size() << endl;
    cout << "map mobject:"<<  mobject.size() << endl;

    return 0;
}
