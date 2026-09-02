// 1. Создайте иерархию наследования, которая реализует контрольный вопрос 1 для 
// круга и треугольника.

// 1. Вы моделируете формы (круг и треугольник) и хотите, чтобы каждый из их классов 
// обязательно реализовал функции Area () и P rin t (). Как это сделать?

#include <iostream>
using namespace std;

class Forma
{
    public: 
        virtual void Area() = 0;
        virtual void Print() = 0;
};

class Treugolnik: public Forma
{
    double num;
    double a, b;
    public:
        Treugolnik(double num1 = 2, double num2 = 2) : a(num1), b(num2){}
        void Area()
        {
            num = 0.5 * a * b;
        }

        void Print()
        {
            cout << num << endl;
        }
};

class Krug: public Forma
{
    double num;
    double radius;
    public:
        Krug(double n = 10)
        {
            radius = n;
        }

        
        void Area()
        {
            num = 3.1415 * radius * radius;
        }

        void Print()
        {
            cout << num << endl;
        }
};


void Func(Forma& Input)
{
    Input.Area();
    Input.Print();
}
int main()
{
    Treugolnik krol(4, 2);
    Krug lrok(1);

    krol.Area();
    krol.Print();

    Func(lrok);

    return 0;
}