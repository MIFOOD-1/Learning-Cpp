// задача № 4 — собственный MyString
// Теперь самое интересное: совместим классы, операторы, указатели и управление динамической памятью.
// Создай класс MyString, который хранит строку в char*.
// Требования:
// 1. Конструктор из const char*.
// 2. Деструктор.
// 3. Конструктор копирования — глубокая копия.
// 4. Копирующий оператор присваивания.
// 5. Конструктор перемещения.
// 6. Перемещающий оператор присваивания.
// 7. Метод Print().

#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
    private:
        char* Buffer;
    public:
        MyString(const char* InputString)     
        {
            if(InputString != NULL)
            {
                Buffer = new char [strlen(InputString) + 1];
                strcpy(Buffer, InputString);
            }

            else
                Buffer = NULL;
        }

        MyString(const MyString& InputMyclass)
        {
            Buffer = new char [strlen(InputMyclass.Buffer) + 1];
            strcpy(Buffer, InputMyclass.Buffer);
        }

        MyString& operator=(const MyString& InputMyclass)
        {
            if(InputMyclass.Buffer != Buffer && InputMyclass.Buffer != NULL)
            {
                delete[] Buffer;
                Buffer = new char [strlen(InputMyclass.Buffer) + 1];
                strcpy(Buffer, InputMyclass.Buffer);
            }

            return *this;
        }

        MyString(MyString&& InputMystring)
        {
           if(InputMystring.Buffer != NULL)
           {
                Buffer = InputMystring.Buffer;
                InputMystring.Buffer = NULL;
           }
        }

        MyString& operator=(MyString&& InputMystring)
        {
           if(InputMystring.Buffer != NULL && Buffer != InputMystring.Buffer)
           {
                delete[] Buffer;
                Buffer = InputMystring.Buffer;
                InputMystring.Buffer = NULL;
           }

           return *this;
        }

        void Print()
        {
           cout << Buffer << endl;
        }

        ~MyString()
        {
            if(Buffer != NULL)
                delete[] Buffer;
        }
};

int main()
{
    MyString string1("Hello world!");           //деф конструктор
    MyString string2(string1);                  //конструктор копирования

    cout << "string1(\"Hello world!\"): ";
    string1.Print();
    cout << "string1(string2): ";
    string2.Print();

    MyString string3(MyString("Not hello world"));  //конструктор перемещения
    cout << "string3(MyString(\"Not hello world\")): ";
    string3.Print();

    string3 = string1;                     //оператор присваивания
    cout << "MyString string3 = string1: ";
    string3.Print();

    string3 = MyString("No hello World!"); // оператор перемещения
    cout << " MyString string3 = MyString(\"No hello World!\"): ";
    string3.Print();
    
    return 0;
}
