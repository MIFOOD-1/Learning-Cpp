// задача №17 Шаблонный класс
// Реализуй Stack<T> — стек на динамическом массиве с методами Push, Pop, Top и Empty.
// Проверь несколько типов, обработку пустого стека, копирование и корректное освобождение памяти.

#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Stack
{
    private:
        T * data;
        int size;
        int capacity;

        void Resize()
        {
            capacity *= 2;
            T * newdata = new T[capacity];

            for(int i = 0; i < size; ++i)
                newdata[i] = data[i];

            delete[] data;
            data = newdata;     //вопрос а нам разве не надо тогда помяенть размер size, ведь оно же по факту стало больше или это только при добавлении новых значений
        }

    public:
        Stack(): data(new T[2]), size(0), capacity(2){}

        Stack(const Stack& other)
        {
            data = (new T[other.capacity]);
            size = other.size;
            capacity = other.capacity;

            for(int i = 0; i < size; ++i)
                data[i] = other.data[i];
        }

        Stack& operator=(const Stack& other)
        {
            if(this!= &other)
            {
                delete[] data;

                data = (new T[other.capacity]);
                capacity = other.capacity;
                size = other.size;

                for(int i = 0; i < size; ++i)
                    data[i] = other.data[i];   
            }

            return *this;
        }

        void Push(const T& value)
        {
            if(size == capacity)
                Resize();
            data[size] = value;
            ++size;             
        }

        void Pop()
        {
            if(Empty())     
            {
                cout << "Stack is empty! " << endl;
                return;
            }
            --size;
        }

        T& Top()
        {
            if(Empty())
            {
                cout << "Stack is empty!" << endl;
                static T emptyValue{};
                return emptyValue;
            }

            return data[size - 1];
        }

        bool Empty() const 
        {
            return size == 0;       
        }

        ~Stack()
        {
            delete[] data;
        }

};

int main()
{
    Stack<int> numbers;

    numbers.Push(10);
    numbers.Push(20);
    numbers.Push(30);

    cout << "Top: " << numbers.Top() << endl;

    numbers.Pop();
    cout << "After pop: " << numbers.Top() << endl;


    //копирование
    Stack<int> copy = numbers;
    copy.Push(100);

    cout << "Original: " << numbers.Top() << endl;
    cout << "Copy " << copy.Top() << endl;

    //string
    Stack<string> words;
    words.Push("Hello");
    words.Push("World");
    cout << "String: " << words.Top() << endl;

    return 0;
}