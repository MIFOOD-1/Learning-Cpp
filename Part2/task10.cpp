//задача №10
// Модификаторы наследования
// Создай базовый класс Person с полями в секциях public, protected и private. Унаследуй его публично, 
// защищённо и приватно в трёх отдельных классах.
// Проверь, к каким членам можно обратиться из методов наследника и из main().
// Проверяет: реальный смысл трёх видов наследования.

#include <iostream>
using namespace std;

class Person
{
    private:
        int num1;
    protected:
        int num2;
    public:
        int num3;
    Person(int num1Input, int num2Input, int num3Input): num1(num1Input), num2(num2Input), num3(num3Input){};
};

class Person2: private Person
{
    public:
    Person2(int num1Input, int num2Input, int num3Input): Person(num1Input, num2Input, num3Input){}
};

class Person3: protected Person
{
    public:
    Person3(int num1Input, int num2Input, int num3Input): Person(num1Input, num2Input, num3Input){}
};

class Person4: public Person
{
    public:
    Person4(int num1Input, int num2Input, int num3Input): Person(num1Input, num2Input, num3Input){}
};

int main()
{
    Person2 value2(10, 15, 20);
    Person3 value3(10, 15, 20);
    Person4 value4(10, 15, 20);

    // cout << value2.num1 << value2.num2 << value2.num3 //ничего нельзя
    // cout << value3.num << value3.num2 << value3.num3 //ничего нельзя
    // cout << value4.num1 << value4.num2 << value4.num3 //только num3

    return 0;
}