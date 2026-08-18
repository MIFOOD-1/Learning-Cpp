// 1. Измените перечисление YOURCARDS контрольного вопроса 4 так, чтоб<л значением 
// константы QUEEN стало 45.

#include <iostream>

enum YOURCARDS{ACE, JACK, QUEEN = 45, KING};

using namespace std;

int main(void)
{
    cout << "QUEEN = "<< QUEEN;
    return 0;
}