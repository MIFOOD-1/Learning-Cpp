// Дружеские функции и классы
// Создай Temperature, хранящий температуру в закрытом поле. Реализуй функцию, 
// которая сравнивает два объекта, используя friend.
// - Попробуй реализовать то же самое обычным публичным методом.
// - Объясни, почему дружеская функция не является методом класса.  //ну она же в сам класс не встроена, так с чего бы ей быть методом, мы в объекте вызвать ее не можем
// - Определи, когда friend оправдан, а когда нарушает инкапсуляцию. 
// Проверяет: доступ к private и protected, границы класса.

#include <iostream>
using namespace std;

class Temperature
{
    private: 
        double C;
        friend bool func(const Temperature& Input1, const Temperature& Input2); //дружественный способ сравнения
    public:
        Temperature(double InputC): C(InputC){}
        
        bool anotherfunc(const Temperature& Input1) const      //публичный метод сравнения
        {
            return this->C >Input1.C;
        }

        double show() const
        {
            return C;
        }
};

bool func(const Temperature& Input1, const Temperature& Input2) 
{   
    return Input1.C > Input2.C;
}

int main()
{
    Temperature value1(20.1);
    Temperature value2(10.1);

    cout << "value1(" << value1.show() << ") > value2(" << value2.show() << ") = " 
    << (func(value1, value2) ? "true" : "false") << endl;

    cout << "value2(" << value2.show() << ") >  value1(" << value1.show() << ") = " 
    << (value2.anotherfunc(value1) ? "true" : "false") << endl;

    return 0;
}
