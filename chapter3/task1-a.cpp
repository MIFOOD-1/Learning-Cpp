// 1. Измените перечисление YOURCARDS контрольного вопроса 4 так, чтоб<л значением 
// константы QUEEN стало 45.

#include <iostream>

enum YOURCARDS{ACE = 43, JACK, QUEEN, KING};

using namespace std;

int main(void)
{
    for(int index = ACE; index <= KING; index++)
    {
        cout << index << endl;
    }

    cout << "QUEEN = "<< QUEEN;
    return 0;
}