// 3. Реализуйте шаблон функции swap () для перестановки значений двух переменных.

#include <iostream>
using namespace std;

template <typename T>
    void Myswap(T& x, T& y)
    {
        T temp = x;
        x = y;
        y = temp;
    }

int main()
{
    int x = 100;
    int y = 10;

    cout << "x = " << x << "  y = " << y << endl;
    
    swap(x, y);

    cout << "x = " << x << "  y = " << y << endl;

    return 0;
}