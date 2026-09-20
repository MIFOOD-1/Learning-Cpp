// 3. Определите бинарный предикат fPredicate, который позволяет карте сортировать 
// ключи типа wordProperty согласно строковому атрибуту, который он содержит.

#include <iostream>
#include <map>
#include <string>
using namespace  std;

struct wordProperty
{
    string strWord;
    bool blsFromLatin;
};

struct fPredicate
{
    bool operator()(const wordProperty& left, const wordProperty& right) const
    {
        return left.strWord < right.strWord;
    }
};

template <typename T>
void DisplayContents(const T& Input)
{
    for(auto iElement = Input.cbegin(); iElement != Input.cend(); iElement++)
        cout << "[" << iElement->first.strWord << "-" << (iElement->first.blsFromLatin ? "true" : "false") << "] -> " << iElement->second << endl;
    cout << endl;
}

int main()
{
    map<wordProperty, string, fPredicate> mapWordDefinition; 

    mapWordDefinition.insert(make_pair(wordProperty{"Oleg", true}, "Oleg"));
    mapWordDefinition.insert(make_pair(wordProperty{"Oleg", false}, "Oleg1"));
    mapWordDefinition.insert(make_pair(wordProperty{"Bro", true}, "Bro"));

    DisplayContents(mapWordDefinition);

    return 0;
}


