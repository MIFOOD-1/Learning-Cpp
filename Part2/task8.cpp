// задача №8
// Правило трёх и правило пяти
// Вернись к MyString. Напиши тесты, которые проверяют копирование, перемещение,
//  присваивание самому себе и работу с пустой строкой.
// - Проверь независимость копий.
// - Убедись, что после перемещения источник безопасно уничтожается и может получить новое значение.
// - Проверь, что старый буфер не теряется.
// - Объясни, когда нужны все пять специальных функций, а когда лучше использовать стандартные типы.

#include <iostream>
#include <cstring>
#include <utility>
using namespace std;

class MyString
{
    private:
        char * Buffer;

    public:
        MyString(const char * Input)
        {
            if(Input != nullptr)
            {
                Buffer = new char [strlen(Input) + 1];
                strcpy(Buffer, Input);
            }
            else
                Buffer = nullptr;
        }

        MyString(const MyString& otherString)
        {
            if(otherString.Buffer != nullptr)
            {
                Buffer = new char [strlen(otherString.Buffer) + 1];
                strcpy(Buffer, otherString.Buffer);
            }
            else
                Buffer = nullptr;
        }

        MyString& operator= (const MyString& otherString)
        {
            if(this != &otherString)
            {
                char* newBuffer = nullptr;
            
                if(otherString.Buffer)
                {
                    newBuffer = new char [strlen(otherString.Buffer) + 1];
                    strcpy(newBuffer, otherString.Buffer);
                }

                delete[] Buffer;
                Buffer = newBuffer;
            }

            return *this;
        }

          MyString(MyString&& otherString) noexcept
          : Buffer(otherString.Buffer)
          {
            otherString.Buffer = nullptr;
          }
        
        MyString& operator= (MyString&& otherString)
        {
            if(this != &otherString)
            {
                delete[] Buffer;
                Buffer = otherString.Buffer;
                otherString.Buffer = nullptr;
                
            }

            return *this;
        }

        void Print() const
        {
            if(Buffer)
                cout << Buffer << endl;

            else
                cout << "[empty]" << endl;
        }

        ~MyString()
        {
            delete[] Buffer;
        }

};

int main()
{
    MyString string1("Hello");
    MyString string2(string1);
    MyString string3(std::move(string1));
    MyString string4(string1);
    string4 = string1;

    cout << "string1: ";
    string1.Print();

    cout << "string2: ";
    string2.Print();

    cout << "string3: ";
    string3.Print();

    cout << "string4: ";
    string4.Print();

    return 0;
}
