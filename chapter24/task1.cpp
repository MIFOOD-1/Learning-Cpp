// 1. Очередь людей (класс CPerson) выстроилась к почтовому отделению. Класс 
// CPerson имеет атрибуты, содержащие возраст и пол. Он определяется так:
// class CPerson
// {
// public:
// int Age; 
// bool IsFemale;
// };
// Напишите бинарный предикат для контейнера priority_queue, который позволит 
// сотруднику обслужить сначала стариков и женщин.

#include <iostream>
#include <queue>
#include <string>

using namespace std;

class CPerson
{
public:
int Age; 
bool IsFemale;
CPerson(int AgeInput, bool InputFemale) : Age(AgeInput), IsFemale(InputFemale){};

bool operator < (const CPerson &female) const
{
    if(female.Age > 50 || female.IsFemale== true)
        return true;
    else 
        return false;
}

void Show() const
{
    cout << (IsFemale ? "Female " : "Male ") << Age << endl;
}
};

int main()
{
    priority_queue<CPerson> People;
    People.push(CPerson(20, false));
    People.push(CPerson(24, true));
    People.push(CPerson(60, false));
    People.push(CPerson(20, true));
    People.push(CPerson(32, false));
    People.push(CPerson(70, true));

    while (People.empty() != true)
    {
        People.top().Show();
        People.pop();
    }
    
    return 0;
}