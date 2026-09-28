// 2. Отладка: Укажите ошибку в этом коде:
// std::unique_ptr<Tuna> myTuna (new Tuna); 
// unique_ptr<Tuna> copyTuna;               
// copyTuna = myTuna;               //unique запррещает копиррование, можно делать только явно перемещение

#include <iostream>
#include <memory>
#include <string>
using namespace std;
template <typename T>
class Tuna
{
    private:
    T* name_fish;
    public:
        // Tuna(): name_fish("Clown"){};    //так 
        // Tuna(): name_fish(new T("Clown")){}; // или так?

        // Tuna(const T& name): name_fish(name){};      //как выглядит это здесь?
        // Tuna(const T& name): name_fish(new T(name)){};      //ттип так?
        Tuna(const T& name)
        {
            name_fish = new T(name);
        };


        void Show_Tuna()
        {
            cout<<"Name Tuna: " << *name_fish << endl;
        }

        ~Tuna(){delete name_fish;};
};

int main()
{
    unique_ptr<Tuna<string>> name(new Tuna<string>("Termonator"));
    name->Show_Tuna();

    unique_ptr<Tuna<string>> name_move(move(name));
    name_move->Show_Tuna();

    return 0;
}