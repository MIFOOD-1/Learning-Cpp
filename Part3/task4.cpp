// Задача 4. Поиск по тексту
// Создай класс TextAnalyzer, который хранит строку в private-поле.
// Реализуй методы:
// - SetText() — установить текст.
// - CountWord() — посчитать количество вхождений заданного слова.
// - Replace() — заменить все вхождения одной подстроки другой.     // не понял вопроса
// - GetText() — вернуть текст для чтения.
// Проверь работу методов с разными строками.
// Повторение: классы, инкапсуляция, методы, string.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class TextAnalyzer
{
    private:
        string text;
    public:
        TextAnalyzer(){};

        void SetText(const string& inputText)
        {
            text = inputText;
        }
        
        void SetText()
        {
            getline(cin, text);
        }

        int CountWord(const string& inputWord) const
        {
            string temp = text;
            transform(temp.begin(), temp.end(), temp.begin(), [](char text){return tolower(text);});

            int index = 0;

            for(auto element = temp.begin(); element != temp.end(); ++element)
            {
               auto save =  temp.find(inputWord);
               if(save != temp.end())
                ++index;
            }

            return index;
        }

        const string GetText() const
        {
            return text;
        }
};

int main()
{
    TextAnalyzer name;
    name.SetText("Hello world! World it is cool");
    cout << "Amount word 'world': " << name.CountWord("world") << endl;
    cout << name.GetText();

    return 0;
}
