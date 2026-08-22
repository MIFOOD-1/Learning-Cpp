// 5. Напишите функцию с типом возвращаемого значения void, которая все же вполне 
// способна вернуть вызывающей стороне вычисленную площадь и периметр круга 
// по радиусу.

#include <iostream>
using namespace std;

void Ploshad(double Radius, double &S);
void Perimetr(double Radius, double &P);

const double Pi = 3.14159;

int main()
{
    double Radius = 0;
    cout << "Vvedite Radius: ";
    cin >> Radius;

    double S = 0, P = 0;
    Ploshad(Radius, S);
    Perimetr(Radius, P);

    cout << "ploshad = " << S << " perimetr = " << P << endl;

    return 0;
}
void Ploshad(double Radius, double &S)
{
    S = Pi * Radius * Radius;
}

void Perimetr(double Radius, double &P)
{
    P = 2 * Pi * Radius;
}
