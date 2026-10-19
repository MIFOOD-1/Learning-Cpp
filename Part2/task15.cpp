// задание №15 static_cast
// Напиши программу, которая преобразует double в int,
// перечисление в целочисленный тип и указатель на производный класс в указатель на базовый.
// Для каждого случая объясни, какая информация может потеряться и почему преобразование допустимо.

#include <iostream>
using namespace std;

class IntReClassBase
{
    protected:
        int reDouble;

    public:
        int operator()(double otherNum)
        {
            reDouble = (int)otherNum;       
            return reDouble;
        }
};

class IntReClassDerived: public IntReClassBase
{
    public:
        void printInt()
        {
            cout << reDouble;
        }
};

int main()
{
    IntReClassBase * pObjectBase = new IntReClassDerived;
    (*pObjectBase)(10.10);

    IntReClassDerived * pObjectDerived = static_cast<IntReClassDerived *> (pObjectBase);
    pObjectDerived->printInt();

    return 0;
}