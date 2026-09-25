// 2. Напишите программу, которая, используя класс stack, меняет порядок введенных 
// пользователем строк на обратный

#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    stack<string> stackString;
    string inputString;

    while(true)
    {
        cout << "Vvedite stroku: ili napishite 'q' dlya vihoda: ";
        getline(cin, inputString);
        if(inputString == "q")
            break;
        stackString.push(inputString);
    }

    while(stackString.empty() != true)
    {
        cout << stackString.top() << " ";
        stackString.pop();
    }

    return 0;
}