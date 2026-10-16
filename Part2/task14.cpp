//задание №14
// Префиксный и постфиксный ++
// Создай класс Counter и перегрузи оба варианта инкремента.
// - Префиксный должен возвращать ссылку на изменённый объект.
// - Постфиксный должен возвращать старое значение.
// - Проверь ++counter, counter++ и цепочки вызовов.
// Проверяет: сигнатуры операторов и разницу между ссылкой и копией.

#include <iostream>
using namespace std;

class Counter
{
    private:
        static int count;
        int numbers;
    public:
        Counter(int number = 0): numbers(number){++count;}

        Counter(Counter& other)
        {
            numbers = other.numbers;
            ++count;
        }

     Counter& operator++() 
    {
        ++numbers;
        return *this;
    }

      Counter operator++(int) 
    {
        Counter old = *this;
        ++numbers;
        return old;
    }

    static int staticCount() 
    {
        return count;
    }

    void show()
    {
        cout << numbers << endl;
    }

    ~Counter() { --count; }
};

int Counter::count = 0;


int main()
{
    Counter name(10);
    ++name;
    ++name;
    ++name;
    name.show();

    Counter name2(1);
    name2 = (name++);

    name2.show();
    name.show();

    cout << name.staticCount();

    return 0;
}