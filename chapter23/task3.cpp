// 3. Напишете приложение, которое записывает характеристики звезд, видимых на гори
// зонте в порядке их восхождения. В астрономии размер звезды, а также информация 
// об их относительной высоте и порядке важна. Если вы сортируете эту коллекцию 
// звезд на основании их размеров, то использовали бы вы функцию std::sort() 
// или std::stablesort()?

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template<typename T>
void DisplayContents(const T& Input)
{
    for(auto iElement = Input.begin(); iElement != Input.end(); ++iElement)
        cout << iElement->show_string() << endl << endl;
}


class Stars
{
    public:
    string nameStars;
    long long sizeStars;
    long long heightStars;

    Stars(string Name, long long size, long long height): nameStars(Name), sizeStars(size), heightStars(height){}

    string show_string() const
    {
        return "Name Stars: " + this->nameStars + "\nhere size: " +  to_string(this->sizeStars) + "\nhere height: " + to_string(this->heightStars);
    }
};


bool Predicat(const Stars& LInput, const Stars& RInput)
    {
        return LInput.sizeStars < RInput.sizeStars;
    }
int main()
{
    vector<Stars> All_Stars;

    All_Stars.push_back(Stars("Star A", 100, 10));
    All_Stars.push_back(Stars("Star B", 120, 110));
    All_Stars.push_back(Stars("Star C", 100, 50));
    All_Stars.push_back(Stars("Star D", 120, 200));



    stable_sort(All_Stars.begin(), All_Stars.end(), Predicat);   

    DisplayContents(All_Stars);

    return 0;
}