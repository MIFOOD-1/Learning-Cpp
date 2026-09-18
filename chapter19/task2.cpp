// 2. Определите мультимножество для хранения введенных слов и их значений, т.е. соз
// дайте мультимножество как словарь. (Подсказка: мультимножество должно хранить 
// объекты структуры, которая содержит две строки: слово и его значение.)

#include <iostream>
#include <set>
#include <string>

using namespace std;

template <typename T>
void DisplayContents(const T& Input)
{
    for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
        cout << *iElement << endl;
    cout << endl;
}

struct BOOK
{
    string word;
    string value;
    string word_value;

    BOOK(string InputWord, string InputValue) : word(InputWord), value(InputValue), word_value(InputWord + ": " + InputValue){}

    bool operator < (const BOOK& Input) const
    {
        return (this->word < Input.word);
    }

    operator const char*() const
    {
        return word_value.c_str();
    }
};

int main()
{
    multiset<BOOK> msetBook;

    msetBook.insert(BOOK("banana", "sweat fruit"));
    msetBook.insert(BOOK("apply", "red fruit"));
    msetBook.insert(BOOK("pig", "pink animal"));
    msetBook.insert(BOOK("apply", "sweat fruit"));
  

    DisplayContents(msetBook);

    return 0;
}