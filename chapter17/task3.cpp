// 3. Джек продает кувшины на eBay. Чтобы помочь ему с упаковкой и отгрузкой, на
// пишите программу, в которой он может вводить размеры каждого из изделий, со
// хранять их в векторе и выводить на экран.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> array;

    int size;
    char c;
    while(1)
    {
        cout << "Vvedite razmer vveshi: ";
        cin >> size;
        array.push_back(size);

        cout << "Esli eto vse nazmite q: ";
        cin >> c;
        if(c == 'q')
            break;
    }

    cout << "show size: " << endl;
    for(auto iterator = array.begin(); iterator < array.end(); iterator++)
    {
        cout << *iterator << endl;
    }

    return 0;
}