// 4. Напишите класс Circle, который вычисляет площадь и периметр по радиусу, ко
// торый передается классу как параметр во время создания экземпляра. Число Пи 
// должно содержаться в константном закрытом члене, к которому нельзя обратиться 
// извне класса.

#include <iostream>

using namespace std;

class Circle
{
    private:
        const double Pi = 3.14159;
        double radius;


    public:
        Circle(double InputRadius)
            : radius(InputRadius){}

        double Ploshad()
        {
            return radius * radius * Pi;
        }

        double Perimetr()
        {
            return 2 * radius * Pi;
        }
};

int main()
{
    Circle number(1);

    cout <<"petimetr = "<<  number.Perimetr() << " ploshad = " << number.Ploshad();

    return 0;
}

