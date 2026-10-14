// задача №5
// Статические поля и методы
// Создай класс Student, в котором хранятся имя и оценка. Добавь статический счётчик количества созданных объектов.
// - Увеличивай счётчик при создании объекта.
// - Уменьшай при уничтожении.
// - Добавь статический метод GetCount().
// - Проверь работу при копировании и выходе объектов из области видимости.
// Проверяет: static, время жизни объектов, конструкторы и деструкторы.

#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
        string name;
        int num;
        static int value;

    public:
    Student(const string& NameInput, const int& NumInput) : name(NameInput), num(NumInput){++value;}

    static int GetCount()
    {
        return value;
    }

    Student(const Student& other) : name(other.name), num(other.num) {++value;}

    void ShowStudent() const
    {
        cout << name << " ball: " << num << endl;
    }
    ~Student()
    {
        --value;
    }
};

int Student::value = 0;

int main()
{
    {
    Student student1 ("Brok", 5);
    Student student2 ("Lore", 3);
    Student student3 ("Kel", 5);
    Student student4 ("Dom", 3);

    cout << "number count: " << student2.GetCount();
    }
    cout << endl;
    Student student1("Brol", 10);
    cout << "number count: " << student1.GetCount();

    return 0;
}