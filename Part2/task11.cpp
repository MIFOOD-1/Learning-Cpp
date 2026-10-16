// задача №11
// Порядок конструкторов и деструкторов при наследовании
// Сделай цепочку Device → Phone → Smartphone. Каждый класс должен печатать сообщение
//  в конструкторе и деструкторе.
// Добавь параметры в конструкторы и передай их через список инициализации.
// Проверяет: порядок создания базовых частей и уничтожения объекта.

#include <iostream>
using namespace std;

class Device
{
    public:
    Device(int num) 
    {
        cout << "Inicialise Device Constructor: " << num << endl;
    }

    ~Device()
    {
        cout << "Destroy Device Destructor" << endl;
    }

};

class Phone: public Device
{
    public:
        Phone(int num) : Device(num)
        {
            cout << "Inicialise Phone Constructor: " << num << endl;
        }

        ~Phone()
        {
            cout << "Destroy Phone Destructor" << endl;
        }
};

class Smartphone: public Phone
{
    public:
        Smartphone(int num) : Phone(num)
        {
            cout << "Inicialise Smartphone Constructor: " << num << endl;
        }

        ~Smartphone()
        {
            cout << "Destroy Smartphone Destructor" << endl;
        }
};


int main()
{
    Smartphone value(10);

    return 0;
}
