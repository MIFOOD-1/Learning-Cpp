// Задача 5. Инвентарь предметов
// Создай класс Item с названием и количеством. Храни объекты в vector<Item>.
// - Добавляй предметы и удаляй их по названию.
// - Если предмет уже существует, увеличивай его количество.
// - Реализуй поиск предмета по названию.
// Повторение: классы, перегрузка операторов, vector, поиск.

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Item
{
    private:
        string name;
        int count;
    
    public:
        Item(string InputName, int InputCount = 1) : name(InputName), count(InputCount){}

        bool operator==(const Item& OtherObject) const 
        {
            return name == OtherObject.name;
        }

        bool operator==(const string OtherObject) const 
        {
            return name == OtherObject;
        }

        void sum(const Item& OtherObject)
        {
            count += OtherObject.count;
        }

        void sum(int OtherObject)
        {
            count += OtherObject;
        }

        string operator()()
        {
            string other = name + ": " + to_string(count);
            return other;
        }
};

void examination(vector<Item>& object)
{
    for(auto it = object.begin(); it != object.end(); ++it)
    {
        auto next = it+1;

        while(next != object.end())
        {
            if(*it == *next)
            {
                it->sum(*next);
                next = object.erase(next);      //я как понимаю здесь мы не увеличвыаем счетсчик веред приудалении жлемента, наш итераторп указыаапет на нговую часть который сместилась в векторе
            }

            else
                ++next;
        }
    }
}

bool search(const vector<Item>& object)
{   
    string searcName;
    cout << "send search name: ";
    getline(cin, searcName);
    auto iterator = find(object.begin(), object.end(), searcName);

    if(iterator != object.end())
        return true;
    else
        return false;
}


int main()
{
    
    vector<Item> object;
    object.push_back(Item("sword", 2));
    object.push_back(Item("apple", 1));
    object.push_back(Item("sword", 1));

    examination(object);

    for(auto iterator = object.begin(); iterator != object.end(); ++iterator)
        cout << (*iterator)() << endl;
    
 
    cout << (search(object) ? "Yes object have" : "No object dont have");

    return 0;
}
