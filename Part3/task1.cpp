// Задача 1. Каталог фигур
// Создай абстрактный класс Shape с виртуальным методом Area(). Реализуй классы Circle и Rectangle.
// - Храни фигуры в vector<unique_ptr<Shape>>.
// - Выведи площади всех фигур с помощью range-based for.
// - Добавь ещё один тип фигуры так, чтобы цикл вывода не пришлось менять.
// - Используй STL вместо ручного управления памятью.
// Повторение: наследование, виртуальные функции, RAII, умные указатели.

#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

class Shape
{
    public:
        Shape(){};
        virtual double Area() const = 0;
        virtual ~Shape() = default;
};

class Circle: public Shape
{
    private:
        double radius, Pi;
    public:
        Circle(const double& InputRadius, const double& InputPi = 3.14159): radius(InputRadius), Pi(InputPi)
        {
            if(radius <= 0)
            {
                radius = 1;
                cout << "You are send number < 0. radius = 1" << endl;
            }
        }

        double Area() const override
        {
            return (radius * radius) * Pi;
        }
};

class Rectangle: public Shape
{
    private:
        double length, width;
    public:
        Rectangle(const double& InputLength, const double& InputWidth): length(InputLength), width(InputWidth){}

        double Area() const override
        {
            return length * width;
        }
};

int main()
{
    vector<unique_ptr<Shape>> objectShape;
    objectShape.push_back(make_unique<Circle>(10.5, 3.14));
    objectShape.push_back(make_unique<Circle>(12.5, 3.14));
    objectShape.push_back(make_unique<Rectangle>(10, 3));
    objectShape.push_back(make_unique<Rectangle>(10, 4));

    for (const auto& shape : objectShape)
    {
        cout << shape->Area() << endl;
    }   

    return 0;
}