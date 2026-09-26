// 2. Покажите, как бы вы инвертировали биты в наборе битов.
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    bitset<8> eightBit("10101111");
    cout << "Before invert: " << eightBit << endl;

    eightBit.flip();

    cout << "After invert: " << eightBit << endl;

    return 0;
}