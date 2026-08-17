//Упражнение 3 глава 2
//Определение функции

#include <iostream>
using namespace std;

//Объявление функции
int DemoConsoleOutput(void);

int main()
{
    //Vizov funcii
    DemoConsoleOutput();

    return 0;
}

//Определение функции
int DemoConsoleOutput(void)
{
    cout << "This is simple string literal" << endl;
    cout << "Writing number five: " << 5 <<endl;
    cout << "Performig division 10 / 5 = " << 10 / 5 << endl;
    cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
    cout << "Pi more accurately is 22 / 7 = " << 22.0 / 7 << endl;

    putchar('\n');
    cout << "Pi more accurately is 22 * 7 = " << 22.0 * 7 << endl;      //строки по заданию
    cout << "Pi more accurately is 22 - 7 = " << 22.0 - 7 << endl;      //строки по заданию

    return 0;
}