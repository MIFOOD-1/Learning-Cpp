// 🟢 Уровень 1 — разминка
// 1. Конвертер температуры
// Напиши программу, которая спрашивает температуру в Цельсиях и выводит:
// - Fahrenheit
// - Kelvin
// Используй:
// - переменные;
// - const для коэффициентов;
// - арифметические операции;
// - функции.

#include <iostream>
using namespace std;

void conversion(const double& Cels, double& Farengeith, double& Kelvin)
{
    Farengeith = Cels * (9.0 / 5.0) + 32;
    Kelvin = Cels + 273.15;
}

int main()
{
    double Cels, Farengeith, Kelvin;
    Cels = Farengeith = Kelvin = 0;

    cout << "Input Cels gradus: ";
    cin >> Cels;

    conversion(Cels, Farengeith, Kelvin);
    cout << "C = " << Cels << " F = " << Farengeith << " K = " << Kelvin << endl;
    
  
    return 0;
}

