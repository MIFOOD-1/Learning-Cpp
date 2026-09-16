// 2. На примере короткой программы продемонстрируйте, что итератор, указывающий 
// на элемент в списке, продолжает оставаться допустимым, несмотря на то, что после 
// или перед ним был вставлен другой элемент, изменив таким образом относитель
// ную позицию прежнего элемента.
#include <iostream>
#include <list>

using namespace std;

void inputList(list <int> &inputValue, int &value)
{
    inputValue.push_front(value);
}

void show_list(list <int> &inputValue) 
{
    for( auto iterator = inputValue.begin(); iterator != inputValue.end(); iterator++)
        cout << *iterator << " ";
    cout << endl;
}
int main()
{
    std::list <int> some_object;
    int some_num;
    
    cout << "vvedite skolko znacheni vi hotite vvesti: ";
    int index = 0;
    cin >> index;
    
    for(int i = 0; i < index; i++)
    {   cout << "Vvedite znachenie kotoroe hotite dobavit: ";
        cin >> some_num;
        inputList(some_object, some_num);
    }

    show_list(some_object);


    auto iterator = some_object.begin();
    cout << "is iterator befor changed object: " << *iterator << endl;
    some_object.push_front(20);

    cout << "is iterator after changed object: " << *iterator << endl;

    show_list(some_object);

    return 0;
}