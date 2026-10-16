// задача №12
// Срезка объекта — object slicing
// Создай базовый класс Animal и наследника Dog. Передай собаку в функцию двумя способами:
//  по значению и по ссылке.
// Сравни поведение при вызове виртуального метода и объясни, что теряется при 
// копировании наследника в объект базового типа.
// Проверяет: отличие объекта от указателя или ссылки на базовый класс.

#include <iostream>
using namespace std;

class Animal
{
    public:
    virtual void show() const
    {
        cout << "Animal" << endl;
    }
};

class Dog: public Animal
{
    public:
    void show() const
    {
        cout << "Dog" << endl;
    }
};

void func(const Animal value)
{
    value.show();
}
void func1(const Animal& value)
{
    value.show();
}

int main()
{
    Dog name;

    func(name);
    func1(name);

    return 0;
}
