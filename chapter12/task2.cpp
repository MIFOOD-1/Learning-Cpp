 // 2. Создайте конструктор перемещения и оператор присваивания при перемещении 
// для класса DynIntegers, который инкапсулирует динамически распределенный 
// массив в форме закрытого члена int*.

#include <iostream>
using namespace std;

class DynIntegers
{
    private:
        int * num;
        int size;
        DynIntegers()
        {
            num = NULL;
            size = 0;
        };
    public:
        DynIntegers(int Number)
        {
            size = Number;

            if(Number > 0)
            {
            num = new int[Number];

            for(int i = 0; i < size; i++)
                    num[i] = Number++;
            }
            else
            num = NULL;
        }

        ~DynIntegers()
        {
            if(num != NULL)
                delete[] num;
        }

        DynIntegers(const DynIntegers& Input_Class)
        {
            size = Input_Class.size;

            if(Input_Class.num != NULL)
            {
                num = new int[size];
                
                for(int i = 0; i < size; i++)
                    num[i] = Input_Class.num[i];
            }
            else
            {
                num = NULL;
            }
        }


        DynIntegers(DynIntegers&& Input_Class)
        {
            if(Input_Class.num != NULL)
            {
                num = Input_Class.num;
                size = Input_Class.size;

                Input_Class.num = NULL;
                Input_Class.size = 0;
            }
            else 
            {num = NULL; size = 0;}
        }

        DynIntegers& operator= (const DynIntegers& name) 
        {
            if(this != &name)
            {
                if(name.num != NULL)
                {
                    delete[] num;
                    num = new int[name.size];
                    size = name.size;

                    for(int i = 0; i < size; i++)
                        num[i] = name.num[i];
                }

                else
                {
                    delete[] num;
                    num = NULL;
                    size = 0;
                }
            }

            return *this;
        }

        DynIntegers& operator= (DynIntegers&& Input_Class)
        {
            if(this != &Input_Class)
            {
                if(Input_Class.num != NULL)
                {
                    delete[] num;
                    num = Input_Class.num;
                    size = Input_Class.size;

                    Input_Class.num = NULL;
                    Input_Class.size = 0;
                }

                else
                {
                    delete[] num;
                    num = NULL;
                    size = 0;
                }
            }
            return *this;
        }

        void show(void)
        {
            if(num != NULL)
            {
            for(int i = 0; i < size; i++)
                cout << num[i] << " ";

                cout << endl;
            }
            else
                cout << "pusto" << endl;
                
        }
};

int main()
{
    DynIntegers num1(2);
    DynIntegers num2(num1);
    DynIntegers num3(DynIntegers(4));

    num1.show();
    num2.show();
    num3.show();


   
    
    num1 = num2;
    num1.show();
    num3 = DynIntegers(num2);
    num3.show();
}