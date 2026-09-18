// 3. Представьте простую программу, демонстрирующую, что набор не может хранить 
// совпадающие записи, а мультимножество может.

#include <iostream>
#include <set>

using namespace std;

template <typename T>
void DisplayContents(const T& Input)
{
    for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
        cout << *iElement << " ";
    cout << endl;
}

int main()
{
    set<int> num1;
    multiset<int> mnum2;

    for(int index = 0; index < 5; index++)
    {
        int somenum = 0;
        cout << "Vvedite luboe chislo dlya vstavki v set and multiset: ";
        cin >> somenum;

        num1.insert(somenum);
        mnum2.insert(somenum);

        cout << endl;
    }

     if(mnum2.size() > num1.size())
        cout << "Mi vvodili odnikavie znachenie dlya num1 and mnum2, no raznica mesdu nimi est kak mi vvidim" << endl;
    else
        cout << "Oni ravni: " << endl;
    
    cout << "num1 have elemets: " << num1.size() << endl;
    cout << "mnum1 have elemets: " << mnum2.size() << endl;

    DisplayContents(num1);
    DisplayContents(mnum2);


    return 0;

}