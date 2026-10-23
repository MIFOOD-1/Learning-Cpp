// Задача 3. Анализатор слов
// Пользователь вводит строку. Программа должна:
// - Посчитать количество символов и слов.
// - Перевести строку в нижний регистр через transform() и tolower().
// - Проверить, является ли строка палиндромом, игнорируя регистр.
// - Вывести количество вхождений заданной буквы.
// Повторение: string, transform, алгоритмы, циклы и условия.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string name;
    cout << "Write string: ";
    getline(cin, name);

    auto element = name.begin();
    int countWords, countSimvols;
    countWords = countSimvols = 0;
    for(bool proverka = true; element != name.end(); ++element, ++countSimvols)
    {
        if(proverka && (((*element) >= 'a' && (*element) <= 'z') || ((*element) >= 'A' && (*element) <= 'Z')))
        {
            proverka = false;
            ++countWords;
        }
        else
        {
            if(*element == ' ')
            proverka = true;
        }

        
    }

    cout << "Words: " << countWords << endl;
    cout << "Simvols: " << countSimvols << endl;


    return 0;
}