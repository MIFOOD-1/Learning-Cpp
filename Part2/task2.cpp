// задача — №2: наследование и полиморфизм
// Теперь немного сложнее. Создай базовый класс Animal и два производных класса — Dog и Cat.
// Требования:
// 1. В Animal должно быть защищённое поле name.
// 2. Конструктор Animal принимает имя животного.
// 3. Метод Speak() должен быть виртуальным.
// 4. Dog выводит имя и Woof!, а Cat — имя и Meow!.
// 5. В базовом классе должен быть виртуальный деструктор.
// 6. В main() создай массив из двух указателей Animal*, указывающих на собаку и кошку. 
// В цикле вызови Speak() через эти указатели, а затем корректно освободи память. 

#include <iostream>
#include <string>

using namespace std;

class Animal
{
    protected:
        string name;

    public:
        Animal(const string& Input_Name) : name(Input_Name){}
        
        virtual void Speak()const = 0;

        virtual ~Animal(){};
};

class Dog: public Animal
{
    public:
        Dog(const string& Input_name) : Animal(Input_name){}

        void Speak() const
        {
            // cout << Animal::name << "Woof" << endl;
            cout << name << " Woof" << endl;
        }
};

class Cat: public Animal
{
    public:
        Cat(const string& Input_name) : Animal(Input_name){}

        void Speak() const
        {
            // cout << Animal::name << "Meow" << endl;
            cout << name << " Meow" << endl;
        }
};

int main()
{
    Animal * array[2] = {new Dog("bulochka"), new Cat("snezok")};  

    for(int i = 0; i < 2; i++)
    {
        array[i]->Speak();
        delete array[i];
        array[i] = nullptr;
    }

    return 0;
}