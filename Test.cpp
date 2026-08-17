// #include <iostream>

// int main()
// {
//     std::cout << "Hello World!" <<std::endl;

//     return 0;
// }

// // 1. Рассмотрите следующую программу и попытайтесь предположить, что она делает, 
// // не запуская ее:
// #include <iostream>
// int main()
// {
//     int x = 8; 
//     int y = 6;
//     std::cout << std::endl;
//     std::cout << x - y << " " << x * y << x + y;
//     std::cout << std::endl;
//     return 0;
// }

// //3. Где ошибка в этой программe:
// #include <iostream>
// int main(void)
// {
//     std::cout << "Hello Buggy World \n";
//     return 0;
// }

// //Файл HelloWorldAnalysis.cpp: анализ рограммы C++
// //Директивра препроцессора, подключающая щаголовок iostream
// #include <iostream>

// //Начало программы: блок функции main()
// int main()
// {
//     //Вывод на экран
//     std::cout <<"Hello World\n" << std::endl;

//     //Возвращение значения операицонной системе
//     return 0;
// }

// //Листинг 2.2. Объявление using namespace
// //Директива препроцессора
// #include <iostream>

// //Начало программы
// int main()
// {
//     //УКазать компилятору пространнство имен для поиска
//     using namespace std;

//     //Вывод на экран с испоьзованием std::cout
//     cout << "Hello world" <<    endl;

//     //Возвразает щначение операционной системе
//     return 0;
// }

// //Листинг 2.3 Другая демонстрация клюевого слова using
// #include <iostream>

// //начало программы
// int main()
// {
//     using std::cout;
//     using std::endl;

//     //Вывод на экран с использованием cout
//     cout << "Hello World" << endl;

//     //возвращает знаения операционной системе
//     return 0;
// }

// #include <iostream>
// using namespace std;

// //Объявление функции
// int DemoConsoleOutput(void);

// int main()
// {
//     //Vizov funcii
//     DemoConsoleOutput();

//     return 0;
// }

// //Определение функции
// int DemoConsoleOutput(void)
// {
//     cout << "This is simple string literal" << endl;
//     cout << "Writing number five: " << 5 <<endl;
//     cout << "Performig division 10 / 5 = " << 10 / 5 << endl;
//     cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
//     cout << "Pi more accurately is 22 / 7 = " << 22.0 / 7 << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// //Объявление функции
// //Определение функции
// int DemoConsoleOutput(void)
// {
//     cout << "This is simple string literal" << endl;
//     cout << "Writing number five: " << 5 <<endl;
//     cout << "Performig division 10 / 5 = " << 10 / 5 << endl;
//     cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
//     cout << "Pi more accurately is 22 / 7 = " << 22.0 / 7 << endl;

//     return 0;
// }

// int main()
// {
//     //Vizov funcii
//    return DemoConsoleOutput();
// }

// //Листинг 2.6. Использование операторов cin и cout
// // для отображения числовых и текстовых
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     //Обхявление переменной для хранения целого числа
//     int InputNumber;

//     cout << "Enter an integer: ";
    
//     //Сохранить введеное пользовательем целое число
//     cin >> InputNumber;

//     //Аналогично с текстовым данными 
//     cout << "Enter your name: ";
//     string InputName;
//     cin >> InputName;

//     cout << InputName << " entered " << InputNumber << endl;

//     return 0;
// }

// //Упражнение 2 глава вопрос 1 и 2
// #include <iostream>
// int main()
// {
//     std::cout << "Is there a bug here";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// //Объявление функции
// int DemoConsoleOutput(void);

// int main()
// {
//     //Vizov funcii
//     DemoConsoleOutput();

//     return 0;
// }


// //Упражнение 3 глава 2
// //Определение функции

// #include <iostream>
// using namespace std;

// //Объявление функции
// int DemoConsoleOutput(void);

// int main()
// {
//     //Vizov funcii
//     DemoConsoleOutput();

//     return 0;
// }

// //Определение функции
// int DemoConsoleOutput(void)
// {
//     cout << "This is simple string literal" << endl;
//     cout << "Writing number five: " << 5 <<endl;
//     cout << "Performig division 10 / 5 = " << 10 / 5 << endl;
//     cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
//     cout << "Pi more accurately is 22 / 7 = " << 22.0 / 7 << endl;

//     putchar('\n');
//     cout << "Pi more accurately is 22 * 7 = " << 22.0 * 7 << endl;
//     cout << "Pi more accurately is 22 - 7 = " << 22.0 - 7 << endl;

//     return 0;
// }


