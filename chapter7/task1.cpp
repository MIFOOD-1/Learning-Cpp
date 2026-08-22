// 1. Напишите перегруженные функции, которые вычисляют объем сферы и цилиндра. 
// Формулы таковы:
// Объем сферы = (4 * Pi * Радиус * Радиус * Радиус) / 3 
// Объем цилиндра = Pi * Радиус * Радиус * Высотa


#include <iostream>
using namespace std;

const double Pi = 3.14159;

double Area(double Radius);
double Area(double Radius, double Height);

int main()
{
    double Radius = 0, Height = 0;
    char pump;
    cout << "Vvedite 'x' esli vam nuzno vichelit sferu ili nazmite 'z' esli cilindre" << endl;
    cin >> pump;

    if(pump == 'x')
    {
        cout << "Vvedite radius: ";
        cin >> Radius;
        cout << "Obiom sferi = " << Area(Radius);
    }
    else if(pump == 'z')
    {
        cout << "VVedite radius and height: ";
        cin >> Radius >> Height;
        cout << "Obiom cilindra = " << Area(Radius, Height);
    }
    else
        cout << "Oshibka";

    cout << "\nGotovo";
    return 0;
}

double Area(double Radius)
{
    return (4 * Pi * Radius * Radius * Radius) / 3;
}

double Area(double Radius, double Height)
{
    return Pi * Radius * Radius * Height;
}
