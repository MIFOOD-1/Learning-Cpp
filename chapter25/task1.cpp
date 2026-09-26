// 1. Напишите пример, где набор битов содержит четыре бита. Инициализируйте его, 
// отобразите результат и добавьте его к другому набору битов. (Предостережение: 
// наборы битов не допускают такой синтаксис: bitsetA = bitsetX + bitsetY .)
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    bitset<4> intBit1("1011");
    cout <<"inBit1 = " <<intBit1 << endl;
    
    bitset<4> intBit2(intBit1);
    cout << "intBit2 = " <<  intBit2 << endl;

    bitset<4> intBit3((~intBit1) ^ intBit2);
    cout << "intBit3((~" << intBit1 << ") ^ " << intBit2 <<") = ";
    cout << intBit3 << endl;

    return 0;
}
