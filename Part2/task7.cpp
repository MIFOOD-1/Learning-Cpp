//  7 задание
//  Порядок конструкторов и инициализация полей
//  Создай класс Engine и класс Car, содержащий Engine как поле.
//  - Выведи сообщения из конструкторов и деструкторов.
//  - Проследи порядок создания и уничтожения объектов.
//  - Инициализируй поля через список инициализации.
//  - Проверь, что происходит, если порядок полей в списке инициализации 
//  не совпадает с порядком объявления в классе.
//  Проверяет: составные объекты и порядок жизни ресурсов.

#include <iostream>
using namespace std;

class Engine
{
    private:
        int num;
    public:
        Engine(int InputNum) : num(InputNum)
        {
            cout << "Create constructor ENGINE" << endl;
        }

        ~Engine()
        {
            cout << "Destroyed destructor ENGINE" << endl;
        }
};


class Car 
{
    private:
        Engine engine;

    public:
        Car(int InputNum) : engine(InputNum)
        {
            cout << "Create constructor Car" << endl;
        }

        ~Car()
        {
            cout << "Destroyed destructor Car" << endl;
        }
};

int main()
{
    Car somebody(10);

    return 0;
}