// 2. Приведите пример того, как алгоритмы STL, такие как std::copy(), используют 
// итераторы для выполнения своих задач, не нуждаясь в знании характера коллекции 
// назначения при копировании двух последовательностей, содержащихся в двух не
// сходных контейнерах.

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

template <typename T>
void Display(const T& Input)
{
    for(auto iElement = Input.begin(); iElement != Input.end(); ++iElement)
        cout << *iElement << " ";
    cout << endl;
}

int main()
{
    list<int> listInteger1(3);
    vector<int> vecInteger2(4);
    vector<int> vecIntegerCopy(6);

    generate(listInteger1.begin(), listInteger1.end(), rand);
    cout << "First vector: " << endl;
    Display(listInteger1);

    int num = 1;

    generate(vecInteger2.begin(), vecInteger2.end(), [&num](){return num++;});
    cout << "second vector: " << endl;
    Display(vecInteger2);

    auto iterator1 = copy(listInteger1.begin(), listInteger1.end(), vecIntegerCopy.begin());
    copy_if(vecInteger2.begin(), vecInteger2.end(), iterator1, [](int num){return ((num % 2) == 0);});

    cout << "third vector: " << endl;

    auto iteraor_deleate = remove(vecIntegerCopy.begin(), vecIntegerCopy.end(), 0);
    vecIntegerCopy.erase(iteraor_deleate, vecIntegerCopy.end());
    Display(vecIntegerCopy);

    return 0;
}