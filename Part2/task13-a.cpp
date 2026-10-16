//задание №13
// Полиморфная коллекция
// Создай Shape, Circle и Rectangle. Храни разные фигуры в одном vector умных указателей.
// - Вычисляй площадь через виртуальную функцию.
// - Добавь ещё один тип фигуры без переписывания общего цикла.
// - Проверь корректное уничтожение объектов.
// Проверяет: практическую архитектуру полиморфизма и управление ресурсами.

#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Shape
{
    public:
    virtual double Area() const = 0;
    virtual ~Shape() = default;

};

class Circle: public Shape
{
    private:
    double Pi;
    double radius;
    public:
        Circle(double radiusInput, double PiInput = 3.14159) : radius(radiusInput), Pi(PiInput){}

        double Area() const override
        {
            return Pi * (radius * radius);
        }
};

class Rectangle: public Shape
{
    private:
    double width, length;

    public:
        Rectangle(double widthInput, double lengthInput) : width(widthInput), length(lengthInput){}

        double Area() const override
        {
            return width * length;
        }
};

int main()
{
    vector<unique_ptr<Shape>> array_shape;

    array_shape.push_back(make_unique<Circle>(10));
    array_shape.push_back(make_unique<Rectangle>(10, 10));
    
    for(const auto& shape : array_shape)
    {
        cout << shape->Area() << endl;
    }
    
    return 0;
}