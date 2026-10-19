// задача №16
// dynamic_cast и проверка типа
// Используй Animal, Dog и Cat. Храни их через указатели на базовый класс и 
// попробуй получить указатель на Dog.
// Проверь успешное и неуспешное преобразование. Разберись, почему для полиморфного 
// базового класса нужна хотя бы одна виртуальная функция.

#include <iostream>
using namespace std;

class Animal
{
    public:
    
    virtual void show() = 0;
    virtual ~Animal() = default;

};

class Dog: public Animal
{
    public:
        void show()
        {
            cout << "Gav Gav" << endl;
        }
};

class Cat: public Animal
{
    public:
        void show()
        {
            cout << "Meow meow" << endl;
        }
};

void func(Animal * someObject)
{
    if(Animal * Base = dynamic_cast<Dog*>(someObject))
        Base->show();
    
    else if(Animal * Base = dynamic_cast<Cat*>(someObject))
        Base->show();

    else
        cout << "Error";
}

// void func(Animal * someObject)
// {
//     if(Dog * some = dynamic_cast<Dog*>(someObject))
//         some->show();
    
//     else if(Cat * some = dynamic_cast<Cat*>(someObject))
//         some->show();

//     else
//         cout << "Error";
// }


int main()
{
    Dog dogObject;
    Cat catObject;


    func(&dogObject);
    func(&catObject);


    return 0;
}