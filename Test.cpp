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


// //Листинг 3.1 Использование переменных для хранения чисел и результата их умножения
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "This program will help you multiply two numbers"
//     <<endl;

//     cout << "Enter the fisrst number: ";
//     int FirstNumber = 0;
//     cin >> FirstNumber;

//     cout << "Enter the second number: ";
//     int SecondNumber;
//     cin >> SecondNumber;

//     //Умножение двух числе,сохранение резлуьтата в переменной
//     int MultiplicationResult = FirstNumber * SecondNumber;

//     //Отображение результата
//     cout << FirstNumber << " x " << SecondNumber++;
//     cout << " = " << MultiplicationResult << endl;

//     //альтернатива 
//     cout <<FirstNumber << " * "<< SecondNumber<< " = " << FirstNumber * SecondNumber;

//     return 0;
// }

// //Листинг 3.2 Демонстрация области видимости перменных
// #include <iostream>
// using namespace std;

// int MultiplyNumbers()
// {
//     cout << "Enter the first number: ";
//     int FirstNumber = 0;
//     cin >> FirstNumber;

//     cout << "Enter the second number: ";
//     int SecondNumber = 0;
//     cin >> SecondNumber;

//     //Умножение двух числе, и сохранение резултата переменной
//     int MultilicationResult = FirstNumber * SecondNumber;

//     //отображние результата
//     cout << FirstNumber << " x " << SecondNumber;
//     cout << " = " << MultilicationResult << endl;

//     return 0;
// }

// int main()
// {
//     cout << "This programm will help you multiply two numbers"
//         << endl;

//     //вызов функции, выполняющей всю работу
//     MultiplyNumbers();
    
//     //cout << First Number << " x " << SecondNumber;
//     //cout << " = " << MultiplicationResult << endl;

//     cout <<"kuku eou: " << MultiplyNumbers();

//     return 0;
// }

// //Листинг 3.3 Использование глобальных переменных
// #include <iostream>
// using namespace std;

// //три глобальных целых числа
// int FirstNumber = 0;
// int SecondNumber = 0;
// int MultiplicationResult = 0;

// void MultiplyNumbers()
// {
//     cout << "Enter the fisrst number: ";
//     cin >> FirstNumber;

//     cout << "Enter the secon nubmer: ";
//     cin >> SecondNumber;

//     //Умнлжение
//     MultiplicationResult = FirstNumber * SecondNumber;

//     //отображение
//     cout << "Displaying from MultiplyNumbers(): ";
//     cout << FirstNumber << " x " << SecondNumber;
//     cout << " = " << MultiplicationResult << endl;
// }

// int main()
// {
//     cout << "This program will help you multiply two numbers"
//         <<endl;

//     //Вызов функции, выполняющий всю работу
//     MultiplyNumbers();

//     cout << "Displaying from main(): ";
//     //Теперь эта строка компилириуется и работает!
//     cout << FirstNumber << " x " << SecondNumber;
//     cout << " = " << MultiplicationResult << endl;

//     return 0;
// }

// //Листинг 3.4 Поиск размера стандартных типов переменных яызка С++
// #include <iostream>

// int main()
// {
//     using namespace std;
//     cout << "Computing the size of some C++ inbuilt variable types"
//         <<endl;
//     cout << "Size of bool: " << sizeof(bool) << endl;
//     cout << "Size of char: " << sizeof(char) << endl;
//     cout << "Size of unsigned short int: " << sizeof(unsigned short)
//         <<endl;
//     cout << "Size of short int: " << sizeof(short) << endl;
//     cout << "Size of unsigned long int: " << sizeof(unsigned long)
//         <<endl;
//     cout << "Size of long: " << sizeof(long) << endl;
//     cout << "Size of int: " << sizeof(int) << endl;
//     cout << "Size of unsigned long long: "
//         <<sizeof(unsigned long long) << endl;
//     cout << "Size of long long: " << sizeof(long long) << endl;
//     cout << "Size of unsigned int: " << sizeof(unsigned long) << endl;
//     cout << "Size of double: " << sizeof(double) << endl;
//     cout << "Size of float: " << sizeof(float) << endl;

//     cout << "The output changes with compiler, hardware and OS"
//                 <<endl;

//     return 0;
// }

// //Листинг 3.5 Использвание ключевого слова auto для выведения типов компилятором
// #include <iostream>
// using namespace std;

// int main()
// {
//     auto Flag = true; 
//     auto Number = 25000000000;

//     cout << "Flag = " << Flag;
//     cout << " , sizeof(Flag) = " << sizeof(Flag) << endl;
//     cout << "Number = " << Number;
//     cout << " , sizeof(Number) = " << sizeof(Number) << endl;

//     return 0;
// }

// //Листинг 3.6 Объявление константы по име ни PI
// #include <iostream>

// int main()
// {
//     using namespace std;

//     const double Pi = 22.0 / 7;
//     cout << "Value of constant Pi is: " << Pi << endl;

//     //Снятие комментария со следующей строки приведет к ошибке
//     //Pi = 345;

//     return 0;
// }

// //Листинг 3.7 Использование перечисляемых знаений для указания направлений ветра
// #include <iostream>
// using namespace std;

// enum CardinalDirections
// {
//     North = 25,
//     South,
//     East,
//     West
// };

// int main()
// {
//     cout << "Displaying directions and their symbolic values" << endl;
//     cout << "North: " << North << endl;
//     cout << "South: " << South << endl;
//     cout << "East: " << East << endl;
//     cout << "West: " << West << endl;

//     CardinalDirections WindDirection = South;
//     cout << "Variable WindDirection = " << WindDirection << endl;

//     return 0;
// }

// // 1. Измените перечисление YOURCARDS контрольного вопроса 4 так, чтоб<л значением 
// // константы QUEEN стало 45.

// #include <iostream>

// enum YOURCARDS{ACE = 43, JACK, QUEEN, KING};

// using namespace std;

// int main(void)
// {
//     for(int index = ACE; index <= KING; index++)
//     {
//         cout << index << endl;
//     }

//     cout << "QUEEN = "<< QUEEN;
//     return 0;
// }


// /*2. Напишите программу, демонстрирующую, что размер беззнакового целого числа 
// и обычного целого числа одинаков и что размер обоих их меньше, чем у длинного 
// целого числа.*/

//не правильно понял задачу
// #include <iostream>

// using namespace std;
// int main(void)
// {

//     int num1 = 100;
//     long long num2 = 100;

//     if(num1 == num2)
//         cout << num1 << " == " << num2 << " = true "<< endl;
//     if(sizeof(num1) != sizeof(num2))
//         cout << "sizeof(num1) = "<< sizeof(num1) << " == "<< "sizeof(num2) = " << sizeof(num2) 
//             << " = false "<< endl;

//     return 0;
// }


// /*2. Напишите программу, демонстрирующую, что размер беззнакового целого числа 
// и обычного целого числа одинаков и что размер обоих их меньше, чем у длинного 
// целого числа.*/

// #include <iostream>

// using namespace std;

// int main()
// {
//     cout << "sizeof(int) = " << sizeof(int) << endl;
//     cout << "sizeof(unsigned int) = " << sizeof(unsigned int) << endl;
//     cout << "sizeof(long long) = " << sizeof(long long) << endl;

//     if(sizeof(int) == sizeof(unsigned int))
//         cout <<"int and unsigned int imeut odinakoviy razmer" << endl;

//     if(sizeof(int) < sizeof(long long) && sizeof(unsigned int) < sizeof(long long))
//         cout << "oba menche long long";

//     return 0;
// }


// // 3. Напишите программу для вычисления площади и периметра круга, радиус которого 
// // вводится пользователем.

// #include <iostream>
// using namespace std;
// const double PI = 3.1415;

// int main()
// {
//     double radius;
//     cout << "VVedite radius: ";
//     cin >> radius;

//     double ploshad = PI * radius * radius;
//     double perimetr = 2 * PI * radius;

//     cout << "ploshad kruga radiusom: " <<radius<< " ravna = " << ploshad<< endl;
//     cout << "perimetr kruga radiusom: " <<radius<< " ravna = " << perimetr << endl;

//     return 0;
// }

// //Листинг 4.1 Объявление массива целых чисел и доступ к его элементам
// #include <iostream>

// using namespace std;

// int main()
// {
//     int MyNumbers [5] = {34, 56, -21, 5002, 365};

//     cout << "First elemnt at index 0: " << MyNumbers [0] << endl;
//     cout << "Second element at index 1: " << MyNumbers [1] << endl;
//     cout << "Third element at  index 2: " << MyNumbers [2] << endl;
//     cout << "Fourth element at index 3: " << MyNumbers [3] << endl;
//     cout << "Fifth element at index 4: " << MyNumbers[4] << endl;

//     return 0;
// }

// //Листинг 4.2. Присвоение значений элементами массива
// #include <iostream>
// using namespace std;

// int main()
// {
//     const int ARRAY_LENGHT = 5;

//     //Массив из целых 5 чисел, инициализированных нулями
//     int MyNumbers[ARRAY_LENGHT] = {0};

//     cout << "Enter index of the element to be changed: ";
//     int nElementIndex = 0;
//     cin >> nElementIndex;
//     cout << "Enter new value: ";
//     cin >> MyNumbers[nElementIndex];

//         cout << "First elemnt at index 0: " << MyNumbers [0] << endl;
//     cout << "Second element at index 1: " << MyNumbers [1] << endl;
//     cout << "Third element at  index 2: " << MyNumbers [2] << endl;
//     cout << "Fourth element at index 3: " << MyNumbers [3] << endl;
//     cout << "Fifth element at index 4: " << MyNumbers[4] << endl;

//     return 0;
// }

// //Листинг 4.3 Доступ к элементам в многомерном массиве
// #include <iostream>
// using namespace std;

// int main()
// {
//     int ThreeRowsThreeColumns[3][3] = \
//         {{-501, 206, 2011}, {989, 101, 206}, {303, 456, 596}};

//         cout << "Row 0: " <<ThreeRowsThreeColumns[0][0] << " " \
//                           <<ThreeRowsThreeColumns[0][1] << " " \
//                           <<ThreeRowsThreeColumns[0][2] << endl;

//         cout << "Row 1: " <<ThreeRowsThreeColumns[1][0] << " " \
//                           <<ThreeRowsThreeColumns[1][1] << " " \
//                           <<ThreeRowsThreeColumns[1][2] << endl;

//         cout << "Row 2: " <<ThreeRowsThreeColumns[2][0] << " " \
//                           <<ThreeRowsThreeColumns[2][1] << " " \
//                           <<ThreeRowsThreeColumns[2][2] << endl;

//     return 0;           
// }

// //Листинг 4.4 Создание динамического массива целых и заполнение его знаениями
// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> DynArrNums (3);
    
//     DynArrNums[0] = 356;
//     DynArrNums[1] = -421;
//     DynArrNums[2] = 789;

//     cout << "Number of integers in array: " << DynArrNums.size() << endl;
//     int AnotherNum = 0;
//     cin >> AnotherNum;
//     DynArrNums.push_back(AnotherNum);

//     cout << "Number of integers in array: " << DynArrNums.size() << endl;
//     cout << "Last element in array: ";
//     cout << DynArrNums[DynArrNums.size() -1] << endl;
//     //cout << DynArrNums[3] << endl;

//     return 0;
// }

// //Листинг 4.5 Анализ завершабющейся нулем строки в стиле С
// #include <iostream>
// using namespace std;

// int main()
// {
//     char SayHello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};

//     cout << SayHello << endl;
//     cout << "Size of array: " << sizeof(SayHello) << endl;

//     cout << "Replacing space with null" << endl;
//     SayHello[5] = '\0';
//     cout << SayHello << endl;
//     cout << "Size of array: " << sizeof(SayHello) << endl;
//     cout << SayHello[7];

//     return 0;
// }

// //Листинг 4.6 Риск использования строк в стиле С и пользовательского ввода
// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     cout << "Enter a word NOT longer than 20 characters: " << endl;

//     char UserInput [21] = {'\0'};
//     cin >> UserInput;

//     cout << "Length of your input was: " << strlen(UserInput) << endl;
//     // cout << UserInput;

//     return 0;
// }

//Листинг 4.7 Использование типа std::string для инициализации храенения 
//пользовательного ввода,  а также копирование, конкатенация и определение длины строки
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Greetings ("Hellow std::string!");
    cout << Greetings << endl;

    string Greetings1 = "Hellow std::string!";
    cout << Greetings1 << endl;

    cout << "Enter a line of text: " << endl;
    string FirstLine;
    getline(cin, FirstLine);

    cout << "Enter another: " <<endl;
    string SecLine;
    getline(cin, SecLine);

    cout << "Result of concatenation: " << endl;
    string Concat = FirstLine + " " + SecLine;
    cout << Concat << endl;

    cout << "Copy of concatenated string: " << endl;
    string Copy;
    Copy = Concat;

    cout << Copy << endl;

    cout << "Length of concat string: " << Concat.length() << endl;

    return 0;
}
