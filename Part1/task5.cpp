// 🔴 Уровень 4 — хорошая задача
// 6. Своя строка
// Попробуй написать программу, которая работает с обычным C-style массивом символов:
// char text[100];

// Пользователь вводит строку.
// Тебе нужно самостоятельно реализовать:
// int stringLength(const char* text);
// int countSpaces(const char* text);
// int countDigits(const char* text);
// int countLetters(const char* text);

// Не используй strlen, isdigit, isalpha и подобное.
// Работай через указатель

#include <iostream>
using namespace std;

int stringLength(const char* text);
int countSpaces(const char* text);
int countDigits(const char* text);
int countLetters(const char* text);

int main()
{
    char text[100];
    char * textInput = text;
    char ch;

    cout << "Input string in text array: " << endl; 
    ch = getchar();
    while(ch != '\n' && textInput < text + 99)
    {
        *textInput = ch;
        ++textInput;
        ch = getchar();
    }
    *textInput = '\0'; 


    cout << text << endl;
    cout << "Lenght text = " << stringLength(text) << endl;
    cout << "space in text: " << countSpaces(text) << endl;
    cout << "digits in text: " << countDigits(text) << endl;
    cout << "letters in text: " << countLetters(text) << endl;

    return 0;
}

int stringLength(const char* text)
{
   const char * textptr = text;
    int lenght = 0;
    while(*textptr != '\0')
    {
        ++lenght;
        ++textptr;
    }
    
    return lenght;
}

int countSpaces(const char* text)
{
    const char * textptr = text;
    int count = 0;

    while(*textptr != '\0')
    {
        if(*textptr == ' ')
            ++count;
        ++textptr;
    }

    return count;
}

int countDigits(const char* text)
{
    const char * textptr = text;
    int count = 0;

    while(*textptr != '\0')
    {
        if(*textptr >= '0' && *textptr <= '9')
            ++count;
        ++textptr;
    }

    return count;
}
int countLetters(const char* text)
{
    const char * textptr = text;
    int count = 0;

    while(*textptr != '\0')
    {
        if(*textptr >= 'a' && *textptr <= 'z' || *textptr >= 'A' && *textptr <= 'Z')
            ++count;
        ++textptr;
    }

    return count;
}

