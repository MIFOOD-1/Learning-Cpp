// 1. Напишите автономную программу, которая получает введенное пользователей 
// целое число и сохраняет его в векторе. Пользователь должен быть в состоянии в 
// любой момент обратиться к хранящемуся в векторе значению, указав его индекс.

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

    cout << "Vstavte element v massiv ili nazmite 'c' dlya vihoda iz programmi";

    while(1)
    {
    cin >> num;
    input_element(value, num);
    
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