// 2. Напишите шаблон, аналогичный макросу из контрольного вопроса 4.
// 2. Рассмотрим следующий макрос:
// #define SPLIT(х) х / 5
// Каков будет его результат при вызове со значением 20?

#include <iostream>

using namespace std;
template <typename T>
    T SPLIT(T& x){return x / 5;}

int main()
{
    int x = 10;
    double y = 5;

    cout << SPLIT(x);
    cout << SPLIT(y);

    return 0;
}