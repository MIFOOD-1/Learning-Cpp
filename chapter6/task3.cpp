// 3. Напишите программу, которая, подобно листингу 6.15, отображает числа Фибонач
// чи, но спрашивает пользователя, сколько чисел он хочет вычислить.

#include <iostream>
using namespace std;

int main()
{
    cout << "Send numbers Do you have Fibonacci: ";
    int total = 0;
    cin >> total;

    int Num1 = 0, Num2 = 1;

    for(int Index = 0; Index < total; ++Index)
     {
        cout << Num1 << " ";

        int Num2Temp = Num2;
        Num2 = Num1 + Num2;
        Num1 = Num2Temp;
    }

    
    cout << "\nGoodbye!" << endl;

    return 0;
}
