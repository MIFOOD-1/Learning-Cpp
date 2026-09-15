// 2. Усовершенствуйте программу из упражнения 1 так, чтобы она могла сообщить 
// пользователю, существует ли уже запрошенное значение в векторе.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void input_element(vector <int> &Input_Vector, int insert_element)
{
    Input_Vector.push_back(insert_element);
}
void show_element(vector <int> &Input_Vector, int Input_Index)
{
    cout << "Vector[" << Input_Index << "] = " << Input_Vector.at(Input_Index) << endl;
}

int main()
{
    vector <int> value;
    int num;

    cout << "Vstavte element v massiv: ";

    while(1)
    {
    cin >> num;

    auto iterator = find(value.begin(), value.end(), num);
    
    if(iterator == value.end())
    input_element(value, num);

    else
    {
        cout << "takoe znachenie uze suchestvuet" << endl;
    }
    
    cout << "Hotite li vi prodolzit vstavlyat elementi? else da vvedite 1: ";

    cin >> num;
    if(num != 1)
        break;

    cout << "Vstavte element v massiv: ";
    }


    cout << "Show element input index: ";
    while(1)
    {
    cin >> num;
    show_element(value, num);
    
    cout << "Hotite li vi prodolzit smotret elemnti ? else da vvedite 1: ";

    cin >> num;
    if(num != 1)
        break;

    cout << "Show next element input index: ";
    }


    return 0;
}