// 5. Напишите простой шаблон класса, содержащий два массива типов, которые опреде
// лены в списке параметров шаблона класса. Размер массива 10, у шаблона класса 
// должны быть функции доступа, обеспечивающие манипулирование элементами 
// массива.

#include <iostream>
using namespace std;
template<typename T, typename U>
class Array
{
    private: 
    T value[10];
    U value2[10];

    public:
        Array(T num1, U num2)
        {
        value[0] = num1; 
        value2[0] = num2;
        };

        void funcArray()
        {
            for(int i = 1; i < 10; i++)
            {
                value[i] = value[0] * i;
                value2[i] = value2[0] * i;
            }
        }

        void showArray1()
        {
            for(int i = 0; i < 10; i++)
            {
               cout << value[i] << " ";
            }
            cout << endl;
        }

        void showArray2()
        {
            for(int i = 0; i < 10; i++)
            {
               cout << value2[i] << " ";
            }
            cout << endl;
        }

        T open(int num)
        {
            if(num < 10 && num >= 0)
                return value[num];
            else
                {
                    cout << "Net takogo indexa, vozvrashaem 1 index";
                    return value[0];
                }
        }

        U open2(int num)
        {
            if(num < 10 && num >= 0)
                return value2[num];
            else
                {
                    cout << "Net takogo indexa, vozvrashaem 1 index";
                    return value2[0];
                }
        }


        T reset(T reznac, int index)
        {
            if(index >= 0 && index < 10)
            return value[index] = reznac;
            else
            {
                cout << "Oshibka takogo indexa net";
                return value[0];
            }
        }

        U reset2(U reznac, int index)
        {
            if(index >= 0 && index < 10)
            return value2[index] = reznac;
            else
            {
                cout << "Oshibka takogo indexa net";
                return value2[0];
            }
        }

        ~Array(){};
};

int main()
{
    Array sometimeObject(2, 5.1);

    sometimeObject.funcArray();
    sometimeObject.showArray1();
    sometimeObject.showArray2();

    cout << sometimeObject.open(2) << endl;
    cout << sometimeObject.open2(5) << endl;

    sometimeObject.reset(10, 2);
    sometimeObject.reset2(5.5, 2);

    cout << sometimeObject.open(2) << endl;
    cout << sometimeObject.open2(2) << endl;

    return 0;
}