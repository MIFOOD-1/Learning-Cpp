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
            string word = inputWord;
            transform(temp.begin(), temp.end(), temp.begin(), [](char text){return tolower(text);});
            transform(word.begin(), word.end(), word.begin(), [](char word){return tolower(word);});


            int countWords = 0;
            size_t position = temp.find(word);

            while (position != string::npos)
            {
                ++countWords;
                position = temp.find(word, position + word.length());
            }


            return countWords;
        }

        void Replace(const string& oldText, const string& newText)
        {
            size_t position = 0;
            string temp = text;

            while((position = temp.find(oldText, position)) != string::npos)
            {
                temp.replace(position, oldText.length(), newText);
                position+= newText.length();
            }
            text = temp;
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
    cout << name.GetText() << endl;

    name.Replace("world", "Ilon");
    cout << name.GetText();

    return 0;
}
