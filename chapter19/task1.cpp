// 1. Дополните пример телефонного справочника этого занятия поиском имени человека 
// по данному номеру телефона без изменения структуры ContactItem. (Подсказка: 
// определите набор с бинарным предикатом, сортирующим элементы по номеру,
// переопределяя таким образом сортировку по умолчанию на основании оператора <.)


/*Листинг 19.5 Телефонный справочник, демонстрирующий
возможности класса set библиотеки STL*/
#include <set>
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void DisplayContents(const T& Input)
{
    for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
        cout << *iElement << endl;
    cout << endl;
}

struct ContactItem
{
    string strContactsName;
    string strPhoneNumber;
    string strDisplayRepresentation;

    //Конструктор и деструктор
    ContactItem(const string& strName, const string& strNumber)
    {
        strContactsName = strName;
        strPhoneNumber = strNumber;
        strDisplayRepresentation = (strContactsName + ": " + strPhoneNumber);
    }
    // ContactItem(const string& strName, const string& strNumber) : strContactsName(strName), strPhoneNumber(strNumber), strDisplayRepresentation(strName + ": " + strNumber){}; // alt_variant 

    //используется в set::finde()
    bool operator ==  (const ContactItem& itemToCompare) const
    {
        return (itemToCompare.strContactsName == this->strContactsName);
    }

    //Используется как предикат сортировки
    bool operator < (const ContactItem& itemToCompare) const 
    {
        return (this->strContactsName < itemToCompare.strContactsName);
    }

    //Используется в DisplayContents для cout
    operator const char*() const
    {
        return strDisplayRepresentation.c_str();
    }
};

struct numberPhone
{
    bool operator()(const ContactItem& lhs, const ContactItem& rhs) const
    {
        return lhs.strPhoneNumber < rhs.strPhoneNumber;
    }
};


int main()
{
    set<ContactItem> setContacts;
    setContacts.insert(ContactItem("Jack Welsch", "+1 7889 879 879"));
    setContacts.insert(ContactItem("Bill Gates", "+1 97 7897 8799 8"));
    setContacts.insert(ContactItem("Angela Merkel", "+49 23456 5466"));
    setContacts.insert(ContactItem("Vldaimir Putin", "+7 6645 4564 797"));
    setContacts.insert(ContactItem("Manmohan Sing", "+91 234 4564 789"));
    setContacts.insert(ContactItem("Barack Obama", "+1 745 641 314"));
    DisplayContents(setContacts);

    set<ContactItem, numberPhone> setNumbersContacts;
    setNumbersContacts.insert(setContacts.begin(), setContacts.end());
    DisplayContents(setNumbersContacts);

    cout << "Enter a person whose number you wish to deleate: ";
    string NameInput;
    getline(cin, NameInput);

    auto iContactFound = setContacts.find(ContactItem(NameInput, ""));

    if(iContactFound != setContacts.end())
    {
        //Удалить контакт, найденый в наборе
        setContacts.erase(iContactFound);
        cout << "Display contents after erasing: " << NameInput << endl;
        DisplayContents(setContacts);
    }
    else
        cout << "Contact not found" << endl;

    return 0;
}
