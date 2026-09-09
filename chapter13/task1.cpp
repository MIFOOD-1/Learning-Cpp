// 2. У вас есть указатель pFish*, указывающий на объект класса Tuna.
// Fish* pFish = new Tuna;
// Tuna* pTuna = <what cast?>pFish;
// Какой оператор приведения следует использовать, чтобы получить указатель Tuna* 
// на этот объект типа Tuna? Представьте использующий его код


#include <iostream>
using namespace std;

class Fish
{
    public:
    virtual void Func(){};
    virtual ~Fish(){};
};

class Tuna: public Fish
{
    public:
    void Func()
    {
        cout << "Fast fish" << endl;
    }

    void Func2()
    {
        cout << "He is swiming in sea";
    }
};

int main()
{
    Fish * pFish = new Tuna;
    pFish->Func();
    // pFish->Func2(); //не работает
    Tuna* pTuna = dynamic_cast<Tuna*>(pFish);
    pTuna->Func();
    pTuna->Func2();

    delete pTuna;
    return 0;
}