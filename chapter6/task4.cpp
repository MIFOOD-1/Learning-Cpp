// 4. Напишите конструкцию switch-case, которая сообщает, есть ли в радуге такой 
// цвет или нет. Используйте перечисляемую константу.

#include <iostream>
#include <string>
using namespace std;

enum
{
    RED,
    BLACK,
    WHITE,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    PINK,
    INDIGO,
    VIOLET,
};

int main()
{
   cout << RED << ")" << " RED" << endl;
   cout << BLACK << ")" << " BLACK" << endl;
   cout << WHITE << ")" << " WHITE" << endl;
   cout << ORANGE << ")" << " ORANGE" << endl;
   cout << YELLOW << ")" << " YELLOW" << endl;
   cout << GREEN << ")" << " GREEN" << endl;
   cout << BLUE << ")" << " BLUE" << endl;
   cout << PINK << ")" << " PINK" << endl;
   cout << INDIGO << ")" << " INDIGO" << endl;
   cout << VIOLET << ")" << " VIOLET" << endl;

   cout << "Vvedite cvet kotori vi dumaete est v raduge: ";
   int color = 0;
   cin >> color;

   switch (color)
   {
   case RED:
   case ORANGE:
   case YELLOW:
   case GREEN:
   case BLUE:
   case VIOLET:
    cout << "Etot cvet est v raduge";
    break;
   
   default:
    cout << "Etogo cveta net v raduge";
    break;
   }
    
   return 0;
}