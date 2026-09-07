// 1. Создайте оператор преобразования для класса Date, который преобразует содержа
// щуюся в нем дату в целое число.
#include <iostream>

using namespace std;
class Date
{
    private:
    int day, month, year;
    public:
        Date(int DAY, int MONTH, int YEAR) : day(DAY), month(MONTH), year(YEAR){}

        void showDate()
        {
            cout << day << " / " << month << " / " << year << endl;
        }

        operator int() const
        {
            return day + month + year;
        }
};

int main()
{
    Date data(10, 10, 2011);

    data.showDate();

    int lol = (int)data;

    cout << lol;

    return 0;
}