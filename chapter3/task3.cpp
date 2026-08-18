// 3. Напишите программу для вычисления площади и периметра круга, радиус которого 
// вводится пользователем.

#include <iostream>
using namespace std;
const double PI = 3.1415;

int main()
{
    double radius;
    cout << "VVedite radius: ";
    cin >> radius;

    double ploshad = PI * radius * radius;
    double perimetr = 2 * PI * radius;

    cout << "ploshad kruga radiusom: " <<radius<< " ravna = " << ploshad<< endl;
    cout << "perimetr kruga radiusom: " <<radius<< " ravna = " << perimetr << endl;

    return 0;
}
