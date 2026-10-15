//6 задача
// const, this и корректный интерфейс класса
// Создай класс Rectangle с шириной и высотой. Добавь методы изменения размеров, 
// вычисления площади и сравнения двух прямоугольников.
// - Методы, которые не изменяют объект, должны быть const.
// - Используй this, чтобы разобраться, как объект обращается к собственным полям.
// - Запрети некорректные размеры.
// - Сделай так, чтобы константный объект позволял вычислять площадь, но не менять размеры.
// Проверяет: const-корректность, this, инкапсуляцию.

#include <iostream>

using namespace std;

class Rectangle
{
    private:
        double width;
        double height;

    public:
        Rectangle(double InputWidth, double InputHeight): 
        width(InputWidth > 0 ? InputWidth : 1), 
        height(InputHeight > 0 ? InputHeight : 1)
        {
            if(InputWidth <= 0 || InputHeight <= 0)
            {
                if(InputWidth <= 0)
                    cout << "Error " << InputWidth << " it is not correct number for width auto value inicialization: 1" << endl;
                if(InputHeight <= 0)
                    cout << "Error " << InputHeight << " it is not correct number for heihhtp auto value inicialization: 1" << endl; 
            }
        }

       double Square() const
       {
           return ((this->height) * (this->width));
       }

       bool operator> (const Rectangle& otherRec) const
       {
            return (this->Square()) > (otherRec.Square());
       }

       bool operator< (const Rectangle& otherRec) const
       {
           return (this->Square()) < (otherRec.Square());
       }

       bool operator== (const Rectangle& otherRec) const
       {
            return (this->Square()) == (otherRec.Square());
       }

       bool operator>= (const Rectangle& otherRec) const
       {
            return (operator>(otherRec) || operator==(otherRec));
       }

       bool operator<= (const Rectangle& otherRec) const
       {
            return (operator<(otherRec) || operator==(otherRec));        
       }

       void changeValue(double Inwidth, double Inheight)
       {
            if(Inwidth > 0 && Inheight > 0)
            {
                width = Inwidth;
                height = Inheight;
            }
       }

       void show() const
       {
        cout << "Width: " << width << "   Height: " << height << endl;
       }
};

int main()
{
    Rectangle object1(10, 10);
    const Rectangle object2(2, 2);
    Rectangle objectFalse(-1, 2);

    cout << "Square object1: " << object1.Square() << " and value: ";
    object1.show();

    cout << "Square object2: " << object2.Square() << " and value: ";
    object2.show();

    cout << "Square objectFalse: " << objectFalse.Square() << " and value: ";
    objectFalse.show();

    cout << "(object1 < object2) = " << (object1 < object2 ? "true" : "false") << endl;
    cout << "(object1 > object2) = " << (object1 > object2 ? "true" : "false") << endl;

    return 0;
}
