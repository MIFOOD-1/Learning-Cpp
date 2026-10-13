// Задача № 3 — перегрузка операторов
// Теперь проверим, понимаешь ли ты, как перегрузка операторов работает внутри классов.
// Создай класс Number с полем int value.
// Требуется реализовать:
// - Конструктор Number(int value).
// - operator+ — возвращает новый объект с суммой значений.
// - operator- — возвращает новый объект с разностью.
// - operator== — проверяет равенство значений.
// - operator+= — изменяет текущий объект, прибавляя значение другого

#include <iostream>
using namespace std;

class Number
{
    private:
        int value;

    public:
        Number(int num) : value(num){}

    int operator+(const int& num) const
    {
        return value + num;
    }

    Number operator+(const Number& num) const    //просто от меня хотелось поэксперементировать
    {
        Number anotherNum = *this;
        anotherNum += num.value;
        return anotherNum;
    }

    int operator-(const int& num) const
    {
        return value - num;
    }

    bool operator==(const int& num) const
    {
        return value == num;
    }

    Number& operator+=(const Number& other) 
    {
        value += other.value;
        return *this;
    }

 
    int show_value() const
    {
        return value;
    }

    Number operator-(const Number& other) const 
    {
        return Number(value - other.value);
    }

    bool operator==(const Number& other) const
    {
        return value == other.value;
    }

};

int main(void)
{
    Number num1(10);
    Number num2(20);

    cout << "num1 = " << num1.show_value() << endl;
    cout << "num1 + 100 = " << num1 + 100 << endl;
    cout << "num1 - 10 = " << num1 - 10 << endl;
    cout << "num1 == 100 =  " << (num1 == 100 ? "true" : "false") << endl;
    
    num1 += 10;
    cout << "num1 += 10 = " << num1.show_value() << endl;
    Number num3 = num1 + num2;
    cout << "num3 = num1 + num2 = "  <<num3.show_value() << endl;

    return 0;
} 