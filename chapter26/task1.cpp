// 1. Отладка: Найдите ошибку в этом коде:
// std::auto_ptr<SampleClass> pObject (new SampleClass ()); 
// std::auto_ptr<SampleClass> pAnotherObject (pObject); 
// pObject->DoSomething ();                                 //тут проблема так как мы не явно сделали перемещние, так что просто не работает
// pAnotherObject->DoSomething();
// Используйте класс unique_ptr для создания экземпляра класса Carp, происходя
// щего от класса Fish. Передайте объект как указатель на класс Fish и отметьте 
// комментарием отсечение, если оно будет.


#include <memory>
#include <iostream>
#include <string>
using namespace std;

class Fish
{
    protected:
        string name_fish;

    public:
        Fish(const string& name): name_fish(name){}

        virtual void ShowFish()
        {
            cout << "FISH " << name_fish << endl;
        }

        virtual ~Fish() = default;
};

class Carp: public Fish
{
    public:
        Carp(const string& name) : Fish(name){};

        void ShowFish()
        {
            cout << "CARP " << name_fish << endl;
        }

        void ShowSweam()
        {
            cout << "Carp is sweam in ocean" << endl;
        }
};

int main()
{
    unique_ptr <Fish> NameFish(new Fish("clown"));
    NameFish->ShowFish();

    unique_ptr<Fish> copyNewFish(move(NameFish));
    copyNewFish->ShowFish();

    unique_ptr<Fish> anotherFish(new Carp("rock"));
    anotherFish->ShowFish();
   
    cout << endl;
    
    Fish oroginalObjectFish(*anotherFish);  //отсечение
    oroginalObjectFish.ShowFish();
    // oroginalObjectFish.ShowSweam(); //отсечение

    return 0;
}