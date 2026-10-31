// 8 Очередь клиентов
// Создай queue<string> для очереди клиентов.
// - Добавь трёх клиентов.
// - Обслужи первого клиента и удали его из очереди.
// - Добавь ещё одного клиента.
// - Выведи порядок обслуживания оставшихся клиентов.
// Нельзя обращаться к элементам очереди по индексу.

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    queue<string> client;
    client.push("Dima");
    client.push("Den");
    client.push("Lera");
    
    cout << client.front() << endl;
    client.pop();

    client.push("Anton");

    while(!client.empty())
    {
        cout << client.front() << endl;
        client.pop();
    }

    return 0;
}
