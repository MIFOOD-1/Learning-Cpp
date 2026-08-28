// 3. Напишите лучшую версию класса из упражнения 1, где все параметры инициализи
// руются с использованием списка инициализации в конструкторе.

#include <iostream>
#include <string>

using namespace std;
class Human
{
    private:
        int Age;
        string Name;

    public:
        Human(int InputAge, string InputName)
            : Age(InputAge), Name(InputName) {}
            

        void GetNameAndAge()
        {
            cout << Age << " " << Name;
        }
};

int main()
{
    Human person(20, "Anton");

    person.GetNameAndAge();

    return 0;
}