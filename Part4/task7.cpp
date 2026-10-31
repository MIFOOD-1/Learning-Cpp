// 7 История действий через стек
// Создай stack<string> для истории действий пользователя.
// - Добавь действия Open, Edit, Save, Close.
// - Выведи последнее действие.
// - Удали два последних действия.
// - Выведи действие, которое теперь находится на вершине.
// Предусмотри случай, когда стек пуст.

#include <string>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> object;
    object.push("Open");
    object.push("Save");
    object.push("Edit");
    object.push("Close");

    while(!object.empty())
    {
    cout << object.top() << endl;
    object.pop();
    object.pop();
    if(!object.empty())
        cout << object.top() << endl;
    }

    return 0;

}