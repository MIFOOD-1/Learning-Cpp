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

// //Листинг 4.7 Использование типа std::string для инициализации храенения 
// //пользовательного ввода,  а также копирование, конкатенация и определение длины строки
// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string Greetings ("Hellow std::string!");
//     cout << Greetings << endl;

//     string Greetings1 = "Hellow std::string!";
//     cout << Greetings1 << endl;

//     cout << "Enter a line of text: " << endl;
//     string FirstLine;
//     getline(cin, FirstLine);

//     cout << "Enter another: " <<endl;
//     string SecLine;
//     getline(cin, SecLine);

//     cout << "Result of concatenation: " << endl;
//     string Concat = FirstLine + " " + SecLine;
//     cout << Concat << endl;

//     cout << "Copy of concatenated string: " << endl;
//     string Copy;
//     Copy = Concat;

//     cout << Copy << endl;

//     cout << "Length of concat string: " << Concat.length() << endl;

//     return 0;
// }

// // 5. Посмотрите объявление вектора в листинге 4.4 и попытайтесь создать динамиче
// // ский массив, содержащий элементы типа char.

// #include <iostream>
// #include <vector>

// using namespace std;

// int main(void)
// {
//     vector<char> array(3);

//     array[0] = 'a';
//     array[1] = 'b';
//     array[2] = 'c';

//     char lol = '1';
//     array.push_back(lol);

//     cout << array[0] << array[1] << array[2] << array[3] << array[array.size() - 1];

//     return 0;
// }

// // 1. Объявите массив, представляющий клетки на шахматной доске; типом массива мо
// // жет быть перечисление, определяющее характер фигур на доске.

// #include <iostream>

// using namespace std;

// int main()
// {
//     char array[8][8] =
//     {
//         {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
//         {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
//         {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
//         {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
//         {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
//         {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
//         {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
//         {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
//     };

//     return 0;
// }


// // 1. Объявите массив, представляющий клетки на шахматной доске; типом массива мо
// // // жет быть перечисление, определяющее характер фигур на доске.
// #include <iostream>

// using namespace std;

// enum Figure
// {
//     EMPTY,
//     PAWN,
//     ROOK,
//     KNIGHT,
//     BISHOP,
//     QUEEN,
//     KING
// };

// int main()
// {
//     Figure board[8][8] =
//     {
//         {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK},
//         {PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN},
//         {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
//         {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
//         {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
//         {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
//         {PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN},
//         {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK},
//     };

//     return 0;
// }

// //Литсинг 5.1 демонстрация арифметических операторов с введенными пользоватлем числами
// #include <iostream>

// using namespace std;

// int main(void)
// {
//     cout << "Enter two integers: " << endl;
//     int Num1 = 0, Num2 = 0;
//     cin >> Num1;
//     cin >> Num2;

//     cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
//     cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;
//     cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
//     cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
//     cout << Num1 << " % " << Num2 << " = " << Num1 % Num2 << endl;

//     return 0;
// }

// //Листинг 5.2 Разлиия между постфиксными и префиксными операторами
// #include <iostream>
// using namespace std;

// int main(void)
// {
//     int MyInt = 101;
//     cout << "Start value of integer being operated: " << MyInt << endl;

//     int PostFixInc = MyInt++;
//     cout << "Result of Postfix Increment = " << PostFixInc << endl;
//     cout << "After Postix Increment, MyInt = " << MyInt << endl;

//     MyInt = 101; // Переустановка
//     int PreFixInc = ++MyInt;
//     cout << "Result of Prefix Increment = " << PreFixInc << endl;
//     cout << "After Ptefix Increment, MyInt = " << MyInt << endl;

//     MyInt = 101;
//     int PostFixDec = MyInt--;
//     cout << "Result of Postfi Decrement = " << PostFixDec << endl;
//     cout << "After Postix Decrement, MyInt = " << MyInt << endl;

//     MyInt = 101; // Переустановка
//     int PreFixDec = --MyInt;
//     cout << "Result of Prefix Decrement = " << PreFixInc << endl;
//     cout << "After Ptefix Decrement, MyInt = " << MyInt << endl;
    
//     return 0;
// }

// //Листинг 5.3 Ошибка переполнения у знаковых и безнаковых целочисленных переменных
// #include <iostream>
// using namespace std;

// int main()
// {
//     unsigned short UShortValue = 65535;
//     cout << "Increment unsigned short " << UShortValue
//             << " gives: ";
//     cout << ++UShortValue << endl;

//     short SignedShort = 32767;
//     cout << "Incrementing signed short " << SignedShort << " gives: ";
//     cout << ++SignedShort << endl;

//     return 0;
// }

// //Листинг 5.4 Операторы равенства и сравнения 
// #include <iostream>
// using namespace std;

// int main(void)
// {
//     cout << "Enter two integers:" << endl;
//     int Num1 = 0, Num2 = 0;
//     cin >> Num1;
//     cin >> Num2;

//     bool Equality = (Num1 == Num2);
//     cout << "Result of equality test: " << Equality << endl;

//     bool Inequality = (Num1 != Num2);
//     cout << "Result of inequality test: " << Inequality << endl;

//     bool GreaterThan = (Num1 < Num2);
//     cout << "Result of " << Num1 << " > " << Num2;
//     cout << " test: " << GreaterThan << endl;

//     bool LessThan = (Num1 < Num2);
//     cout << "Result of" << Num1 << " < " << Num2 << " test: " << LessThan << endl;

//     bool GreaterThanEquals = (Num1 >= Num2);
//     cout << "Result of" << Num1 << " >= " << Num2;
//     cout << " test: " << GreaterThanEquals << endl;

//     bool LessThanEquals = (Num1 <= Num2);
//     cout << "Result of" << Num1 << " <= " << Num2;
//     cout << " test: " << LessThanEquals << endl;

//     return 0;
// }

// //Листинг 5.5 Анализ логичесих операторов C++ && и || 
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Enter true(1) or false(0) for two operands:" << endl;
//     bool Op1 = false, Op2 = false;
//     cin >> Op1;
//     cin >> Op2;

//     cout << Op1 << " AND " << Op2 << " = " << (Op1 && Op2) << endl;
//     cout << Op1 << " OR " << Op2 << " = " << (Op1 || Op2) << endl;

//     return 0;
// }

//Листинг 5.6 Использование логических операторов NOT(!)
// и AND(&&) в условынх операторах для изменения потока выделения
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Use boolean value(0 / 1) to answer the quations" << endl;
//     cout << "Is it raining? ";
//     bool Raining = false;
//     cin >> Raining;
    
//     cout << "Do you have buses on the streets? ";
//     bool Buses = false;
//     cin >> Buses;

//     //Условный оператор использует логические операторы AND и NOT
//     if(Raining && !Buses)
//         cout << "You cannot to go to work" << endl;
//     else
//         cout << "You can go to work" << endl;

//     if(Raining && Buses)
//         cout << "Take an umbrella" << endl;
    
//     if((!Raining) && Buses)
//         cout << "Enjoy the sun and have nice day" << endl;

//     return 0;
// }

// //Листинг 5.7 Использование логических операторов NOT и OR для принятия решения
// //о том, можете ли вы купить автомобиль своей мечты
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Answer quastions with 0 or 1" << endl;
//     cout << "Is there a deep discount on your favorite car? ";
//     bool Discount = false;
//     cin >> Discount;

//     cout << "Did you get a fantastic bonus? ";
//     bool FantasticBonus = false;
//     cin >> FantasticBonus;

//     if(Discount || FantasticBonus)
//         cout << "Congratulations, you can buy that car!" << endl;
//     else
//         cout << "Ssory, waiting a while is a good idea" << endl;

//     return 0;
// }

// //5.8 Использование побитовых операторов для выполнения операций
//     //  NOT AND OR and XOR с отдельными битами целого числа
// #include <iostream>
// #include <bitset>
// using namespace std;

// int main()
// {
//     cout << "Enter a number (0 - 255): ";
//     unsigned short InputNum = 0;
//     cin >> InputNum;

//     bitset<8> InputBits (InputNum);
//     cout << InputNum << " in binary is " << InputBits << endl;

//     bitset<8> BitwiseNOT = (~InputNum);
//     cout << "Logical NOT " << endl;
//     cout << "~" << InputBits << " = " << BitwiseNOT << endl;

//     cout << "Logical AND, & with 00001111" << endl;
//     bitset<8> BitwiseAND = (0x0F & InputNum);
//                         //0x0F шестнадцатериная форма числа 0001111
//     cout << "0001111 & " << InputBits << " = " << BitwiseAND << endl;

//     cout << "Logical OR, | with 00001111" << endl;
//     bitset<8> BitwiseOR = (0x0F | InputNum);
//     cout << "00001111 | " << InputBits << " = " << BitwiseOR << endl;

//     cout << "Logical XOR, ^ with 00001111" << endl;
//     bitset<8> BitwiseXOR = (0x0F ^ InputNum);
//     cout << "00001111 ^ " << InputBits << " = " << BitwiseXOR << endl;
    
//     return 0;
// }

// /*Листинг 5.9 Использование побитового оператора сдвига вправо(>>)
// для полуения четверти и половины знаения, а также оператора сдвига
// влевло(<<) для удвоения знаения и умножения на четыре*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Enter a number: ";
//     int Input;
//     cin >> Input;

//     int Half = Input >> 1;
//     int Quarter = Input >> 2;
//     int Double = Input << 1;
//     int Quardruple = Input << 2;

//     cout << "Quarter: " << Quarter << endl;
//     cout << "Half: " << Half << endl;
//     cout << "Double: " << Double << endl;
//     cout << "Quardruple: " << Quardruple << endl;
    
//     return 0;
// }

// /*Листинг 5.10 Использование составных операторов для добавления
// вычитания, деления и деления по модулю, а также побитовых операций, OR, AND, XOR*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Enter a number";
//     int Value = 0;
//     cin >> Value;

//     Value += 8;
//     cout << "After += 8, Value = " << Value << endl;
//     Value -= 2;
//     cout << "After -=2, Value = " << Value << endl;
//     Value /=4;
//     cout << "After /=4, Value = " << Value << endl;
//     Value *= 4;
//     cout << "After *=4, Value = " << Value << endl;
//     Value %= 1000;
//     cout << "After %=1000, Value = " << Value << endl;

//     //Примечание: далее присвоение просиходит в пределах cout
//     cout << "After <<= 1, value = " << (Value <<= 1) << endl;
//     cout << "After >>= 2, value = " << (Value >>= 2) << endl;
//     cout << "After |= 0x55, value = " << (Value |= 0x55) << endl;
//     cout << "After ^= 0x55, value = " << (Value ^= 0x55) << endl;
//     cout << "After &= 0x0F, value = " << (Value &= 0x0F) << endl;

//     return 0;
// }

//Листинг 5.11 Испольщование оператора sizeof() для определения количества
//байтов, занятых массивом из 100 целых чисел и каждыем его элементом
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Use sizeof of detemine memory occupied by arrays"
//         <<endl;
//     int MyNumbers[100] = {0};

//     cout << "Bytes occupied by an int: " << sizeof(int) << endl;
//     cout << "Bytes occupied by array MyNumbers: " << sizeof(MyNumbers) << endl;
//     cout << "Bytes occupied by each element: " << sizeof(MyNumbers[0]) << endl;

//     return 0;
// }

// // 3. Напишите программу, которая запрашивает у пользователя два логических значе
// // ния и демонстрирует результаты различных побитовых операций над ними.
// #include <iostream>
// using namespace std;


// int main()
// {
// int num1;
// int num2;

// cout << "Enter two numbers\n";

// cin >> num1;
// cin >> num2;

// cout << num1 << " | " << num2 << " = " << (num1 | num2) << endl;
// cout << num1 << " & " << num2 << " = " << (num1 & num2) << endl;
// cout << num1 << " ^ " << num2 << " = " << (num1 ^ num2) << endl;
// cout << num1 << " << " << num2 << " = " << (num1 << num2) << endl;
// cout << num1 << " >> " << num2 << " = " << (num1 >> num2) << endl;

// return 0;
// }

// //Листинг 6.1 Умножение или сложение двух целых чисел на основе пользовательского ввода
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Enter two integers: " << endl;
//     int Num1 = 0, Num2 = 0;
//     cin >> Num1;
//     cin >> Num2;

//     cout << "Enter \'m\' to mitliply, anything else to add: ";
//     char UserSelection = '\0';
//     cin >> UserSelection;

//     int Result = 0;
//     if(UserSelection == 'm')
//         Result = Num1 * Num2;
//     else
//         Result = Num1 + Num2;
//     cout << "Result is: "<< Result << endl;
    
//     return 0;
// }

// //Листинг 6.2 Проверка емкости перед копированем строки в символьный массив
// #include <iostream>
// #include <cstring>
// #include <string>
// using namespace std;

// int main(void)
// {
//     char Buffer[20] = {'\0'};
//     char Buffer1[20] = {"dwdwdwdd"};


//     cout << "Enter a line of text: " << endl;
//     string LineEtered;
//     getline(cin, LineEtered);
//     // cin >> LineEtered;

//     if(LineEtered.length() < 20)
//     {
//         strcpy(Buffer, LineEtered.c_str());
//         // strcpy(Buffer, Buffer1);

//         cout << "Buffer contains: " << Buffer << endl;
//     }

//     return 0;
// }

// //Листинг 6.3 Использование вложеннхы операторов if
// // в  приложении умножения или деления чисел
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Enter two numbers: " << endl;
//     float Num1 = 0, Num2 = 0;
//     cin >> Num1;
//     cin >> Num2;

//     cout << "Enter 'd' to divide, anything else to mutiply: ";
//     char UserSelection = '\0';
//     cin >> UserSelection;

//     if(UserSelection == 'd')
//     {
//         cout << "You want division!" << endl;
//         if(Num2 != 0)
//         {
//             cout << "No div-by-zero, proceeding to calculate" << endl;
//             cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
//         }

//         else cout << "Division by zero iz not allowed" << endl;
//     }
//     else
//     {
//             cout << "You want multi[lication!" << endl;
//             cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
//     }
// }

// //Листинг 6.4 Узнайте в честь его назван день недели
// #include <iostream>
// using namespace std;

// int main()
// {
//     enum DaysOfWeek
//     {
//         Sunday = 0,
//         Monday,
//         Tuesday,
//         Wednesdey,
//         Thursday,
//         Friday,
//         Saturday
//     };

//     cout << "Find what days of the week are named after!" << endl;
//     cout << "Enter a number for a day (Sunday = 0): ";

//     int Day = Sunday; //инициализация днем Sunday
//     cin >> Day;
    
//     if(Day == Sunday)
//         cout << "Sunday was named after the Sun" << endl;
//     else if(Day == Monday)
//         cout << "Monday was named after the Moon" << endl;
//     else if(Day == Tuesday)
//         cout << "Tuesday was named after the Mars" << endl;
//     else if(Day == Wednesdey)
//         cout << "Wednesdey was named after the Mercury" << endl;
//     else if(Day == Thursday)
//         cout << "Thursday was named after the Jupiter" << endl;
//     else if(Day == Friday)
//         cout << "Friday was named after the Venus" << endl;
//     else if(Day == Saturday)
//         cout << "Saturday was named after the Saturn" << endl;
//     else
//         cout << "Wrong input, execute again" << endl;
    
//     return 0;
// }

// //Листинг 6.5 Узнайте в есть его назван день недели, с помощью конструкции swith-case
// #include <iostream>
// using namespace std;

// int main(void)
// {
//     enum DaysOfWeek
//     {
//         Sunday = 0,
//         Monday,
//         Tuesday,
//         Wednesdey,
//         Thursday,
//         Friday,
//         Saturday
//     };

//     cout << "Find what days of week are named after!" << endl;
//     cout << "Enter a number for a day (Sunday = 0): ";

//     int Day = Sunday;
//     cin >> Day;

//     switch (Day)
//     {
//     case Sunday:
//         cout << "Sunday was named after the Sun" << endl;
//         break;
    
//     case Monday:
//         cout << "Monday was named after the Moon" << endl;
//         break;

//     case Tuesday:
//         cout << "Tuesday was named after the Mars" << endl;
//         break;

//     case Wednesdey:
//         cout << "Wednesdey  was named after the Mercury" << endl;
//         break;

//     case Thursday:
//         cout << "Thursday  was named after the Jupiter" << endl;
//         break;

//     case Friday:
//         cout << "Friday  was named after the Venus" << endl;
//         break;
        

//     case Saturday:
//         cout << "Saturday  was named after the Saturn" << endl;
//         break;
    
//     default:
//         cout << "wrong input, execute again" << endl; 
//         break;
//     }

//     return 0;

// }

// //Литсинг 6.6 Использование условного оператора (?:) для поиска большего из двух чисел
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Enter two numbers" << endl;
//     int Num1 = 0, Num2 = 0;
//     cin >> Num1;
//     cin >> Num2;

//     int Max = (Num1 > Num2)? Num1 : Num2;
//     cout << "The greater of "  << Num1 << " And " << Num2 << " is: " << Max << endl;

//     return 0;
// }

// //Листинг 6.7 Запрос пользователю, не хочет ли он повторить вычисления, использузя оператор goto
// #include <iostream>
// using namespace std;

// int main()
// {
//     JumpToPoint:
//     int Num1 = 0, Num2 = 0;
    
//     cout << "Enter two integers: " << endl;
//     cin >> Num1;
//     cin >> Num2;

//     cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
//     cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;

//     cout << "Do you wish to perform another operation (y/n)?" << endl;

//     char Reapeat = 'y';
//     cin >> Reapeat;

//     if(Reapeat == 'y')
//         goto JumpToPoint;
//     cout << "Goodbye!" << endl;

//     return  0;
// }

////Листинг 6.8 Использование цикла while позволяет пользователю повторно выпонлять вычисления
// #include <iostream>
// using namespace std;

// int main()
// {
//     char UserSelection = 'm'; //Исходное значение

//     while(UserSelection != 'x')
//     {
//         cout << "Enter two integers: " << endl;
//         int Num1 = 0, Num2 = 0;
//         cin >> Num1;
//         cin >> Num2;

//         cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
//         cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;

//         cout << "Press x to exit(x) or any other key to recalculate" <<endl;

//         cin >> UserSelection;
//     }

//     cout << "Goodbye!" << endl;
    
//     return  0;
// }

// //Листинг 6.9 Использование цикла do ... while для повторного выполнения блока кода
// #include <iostream>
// using namespace std;

// int main()
// {
//     char UserSelection = 'x'; //Исходное значение

//     do
//     {
//         cout << "Enter two integers: " << endl;
//         int Num1 = 0, Num2 = 0;
//         cin >> Num1;
//         cin >> Num2;

//         cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
//         cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;

//         cout << "Press x to exit(x) or any other key to recalculate" <<endl;

//         cin >> UserSelection;
//     } while(UserSelection != 'x');
    
//     cout << "Goodbye!" << endl;

//     return  0;
// }

// //Листинг 6.10 Использование цикла for для ввода отображения статиеского массива
// #include <iostream>
// using namespace std;

// int main()
// {
//     const int ARRAY_LENGHT = 5;
//     int MyInts[ARRAY_LENGHT] = {0};

//     cout << "Populate array of " << ARRAY_LENGHT << " integers" << endl;

//     for(int ArrayIndex = 0; ArrayIndex < ARRAY_LENGHT; ++ArrayIndex)
//     {
//         cout << "Enter an integer for element " << ArrayIndex << ": ";
//         cin >> MyInts[ArrayIndex];
//     }

//     cout << "Dispalaying contents of the array: " << endl;

//     for(int ArrayIndex = 0; ArrayIndex < ARRAY_LENGHT; ++ArrayIndex)
//         cout << "Element " << ArrayIndex << " = "
//         << MyInts[ArrayIndex] << endl;
    
//     return 0;
// }

// //Листинг 6.11 Использование цикла for без выражения цикладля повторения выиселний до просбьы пользователя
// #include <iostream>
// using namespace std;

// int main()
// {
//     //Без выражения цикла (тертье выражение пропущено)
//     for(char UserSelection = 'm'; (UserSelection != 'x'); )
//     {
//         cout << "Enter the two integers: " << endl;
//         int Num1 = 0, Num2 = 0;
//         cin >> Num1;
//         cin >> Num2;

//         cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
//         cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;

//         cout << "Press x to exit(x) or any other key to recalculate" <<endl;

//         cin >> UserSelection;
//     } 
    
//     cout << "Goodbye!" << endl;

//     return  0;
// }

// //Листинг 6.12 Использование оператора continie для перезапуска 
// //и оператора break для выхожа из бесконечного цикла for

// #include <iostream>
// using namespace std;

// int main()
// {
//     for(;;)
//     {
//         cout << "Enter the two integers: " << endl;
//         int Num1 = 0, Num2 = 0;
//         cin >> Num1;
//         cin >> Num2;

//         cout << "Do you wish to correct the numbers? (y/n): ";
//         char ChangeNumbers = '\0';

//         cin >> ChangeNumbers;

//         if(ChangeNumbers == 'y')
//             continue; //перезапуск цикла
        
//         cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
//         cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;

//         cout << "Press x to exit or any other key to recalculate" <<endl;

//         char UserSelection = '\0';
//         cin >> UserSelection;

//         if(UserSelection == 'x')
//             break; // выход из бесконечнго цикла
//     } 
    
//     cout << "Goodbye!" << endl;

//     return  0;
// }

// //Листинг 6.13 Использование вложеннхы циклов для умножения каждого элемента одного массива на каждый элемент другого
// #include <iostream>
// using namespace std;

// int main()
// {
//     const int ARRAY1_LEN = 3;
//     const int ARRAY2_LEN = 2;

//     int MyInts1[ARRAY1_LEN] = {35, -3, 0};
//     int MyInts2[ARRAY2_LEN] = {20, -1};

//     cout << "Multiplying each int in MyInts1 by each in MyInts2:" << endl;

//     for(int ArrayIndex = 0; ArrayIndex < ARRAY1_LEN; ++ArrayIndex)
//         for(int Array2Index = 0; Array2Index < ARRAY2_LEN; ++Array2Index)
//             cout << MyInts1[ArrayIndex] << " x " << MyInts2[Array2Index] 
//                 << " = " << MyInts1[ArrayIndex] * MyInts2[Array2Index] << endl;

//     return 0;
// }

// //Листинг 6.14 Использование вложенных циклов для перебора элементов двумерного массива
// #include <iostream>
// using namespace std;

// int main()
// {
//     const int MAX_ROWS = 3;
//     const int MAX_COLS = 4;

//     //Двумерный массив целых чисел
//     int MyInts[MAX_ROWS][MAX_COLS] = { {34, -1, 879, 22},
//                                         {24, 365, -101, -1},
//                                         { -20, 40, 90, 97}};
//     //перебор всех рядов массива
//     for(int Row = 0; Row < MAX_ROWS; ++Row)
//     {
//         //перебор всех числе в каждом ряду(столбцов)
//         for(int Column = 0; Column < MAX_COLS; ++Column)
//         {
//             cout << "Integer["<< Row << "]["<< Column \
//                 << "] = " << MyInts[Row][Column] << endl;
//         }
//     }

//     return 0;
// }

// //Листинг 6.15 Использование вложенных циклов для вычисления чисел прогрессии Фибоначчи
// #include <iostream>
// using namespace std;

// int main()
// {
//     const int NumsToCal = 5;
//     cout << "This program will calculate " << NumsToCal
//         <<" Fibonacci Numbers at a time" << endl;

//     int Num1 = 0, Num2 = 1;
//     char WantMore = '\0';
//     cout << Num1 << " " << Num2 << " ";

//     do
//     {
//         for(int Index = 0; Index < NumsToCal; ++Index)
//         {
//             cout << Num1 + Num2 << " ";

//             int Num2Temp = Num2;
//             Num2 = Num1 + Num2;
//             Num1 = Num2Temp;
//         }
//         cout << endl << "Do you want more numbers (y/n)? ";
//         cin >> WantMore;
//     }while(WantMore == 'y');
    
//     cout << "Goodbye!" << endl;

//     return 0;
// }

// //Листинг 7.1 Две функции, вычисляющеие плоащь и перемитр круга, заданного радиусом
// #include <iostream>
// using namespace std;

// const double Pi = 3.14159;

// //Объявление функции(прототипы)
// double Area(double InputRadius);
// double Circumference(double Inputradius);

// int main()
// {
//     cout << "Enter radius: ";
//     double Radius = 0;
//     cin >> Radius;

//     //ВЫзов функции "Area"
//     cout << "Area is: " << Area(Radius) << endl;

//     //ВЫзов функции "Circumference"
//     cout << "Cirrcumference is: " << Circumference(Radius) << endl;

//     return 0;
// }

// //Определение функйии реалиазции
// double Area(double InputRadius)
// {
//     return Pi * InputRadius * InputRadius;
// }

// double Circumference(double InputRadius)
// {
//     return 2 * Pi * InputRadius;
// }

// //Листинг 7.2 Функция получающая два параметра вычисляющая площадь поверхности цилиндра
// #include <iostream>
// using namespace std;

// const double Pi = 3.14159;

// //Обяъвление содержит два параметра
// double SurfaceArea(double Radius, double Height);

// int main()
// {
//     cout << "Enter the radius of the cylinder: ";
//     double InRadius = 0;
//     cin >> InRadius;
//     cout << "Enter the height of the cylinder: ";
//     double InHeight = 0;
//     cin >> InHeight;

//     cout << "Surface Area: " << SurfaceArea(InRadius, InHeight) << endl;

//     return 0;
// }

// double SurfaceArea(double Radius, double Height)
// {
//     double Area = 2 * Pi * Radius * Radius + 2 * Pi * Radius * Height;
//     return Area;
// }

// //Листинг 7.3 Функция без параметров и возврващаемых значений
// #include <iostream>
// using namespace std;

// void SayHello();

// int main()
// {
//     SayHello();
//     return 0;
// }

// void SayHello()
// {
//     cout << "Hello World" << endl;
// }

// /*Листинг 7.4 Функция, вычисляющая площадь круга и испоьзующая
// число Пи как второй параметр со значением по умолчанию 3.14*/
// #include <iostream>
// using namespace std;

// //Объявление функции(Прототип)
// double Area(double InputRadius, double Pi = 3.14); //Pi со значением по умолчанию

// int main()
// {
//     cout << "Enter radius: ";
//     double Radius = 0;
//     cin >> Radius;

//     cout << "Pi is 3.14, do you wish to change this (y / n)? ";
//     char ChangePi = 'n';
//     cin >> ChangePi;

//     double CircleArea = 0;
//     if(ChangePi == 'y')
//     {
//         cout << "Enter new Pi: ";
//         double NewPi = 3.14;
//         cin >> NewPi;
//         CircleArea = Area(Radius, NewPi);
//     }
//     else
//         CircleArea = Area(Radius); //2-й параметр игнорируется,
//                                 //значит, использовать значение по умолчанию
//     //Вызов функции "Area"
//     cout << "Area is: " << CircleArea << endl;

//     return 0;
// }

// //В определении фунции щачение по умолчаниюне задается снова
// double Area(double InputRadius, double Pi)
// {
//     return Pi * InputRadius * InputRadius;
// }

// //Листинг 7.5 Использование рекурисвной функции для вычисления чисел прогрессии Фибоначи
// #include <iostream>
// using namespace std;

// int GetFibNumber(int FibIndex)
// {
//     if(FibIndex < 2)
//         return FibIndex;
//     else //рекурсия, если FibIndex >= 2
//         return GetFibNumber(FibIndex - 1) \
//             + GetFibNumber(FibIndex - 2);
// }

// int main()
// {
//     cout << "Enter 0-based index of desired Fibonacci Number: ";
//     int Index = 0;
//     cin >> Index;

//     cout << "Fibonacci number is: " << GetFibNumber(Index) << endl;
//     return 0;
// }

// //7.6 Использование несколких операторов rturn в одной функции
// #include <iostream>
// using namespace std;
// const double Pi = 3.14159;

// void QueryAndCalculate()
// {
//     cout << "Enter radius: ";
//     double Radius = 0;
//     cin >> Radius;

//     cout << "Area: " << Pi * Radius * Radius << endl;

//     cout << "Do you wish to calculate circumference (y / n)? ";
//     char CalcCirum = 'n';
//     cin >> CalcCirum;

//     if(CalcCirum == 'n')
//         return;

//     cout << "Circumference: " << 2 * Pi * Radius << endl;
//     return;      
// }

// int main()
// {
//     QueryAndCalculate();
    
//     return 0;
// }

// //Листинг 7.7 Использование перегруженной фунеции для вычисления площади круга иили цилиндра
// #include <iostream>
// using namespace std;

// const double Pi = 3.14159;

// double Area(double Radius); //для круга
// double Area(double Radius, double Height); //перегружено для цилиндра

// int main()
// {
//     cout << "Enter z for Cylinder, c for Circle: ";
//     char Choice = 'z';
//     cin >> Choice;

//     cout << "Enter radius: ";
//     double Radius = 0;
//     cin >> Radius;

//     if(Choice == 'z')
//     {
//         cout << "Enter height: ";
//         double Height = 0;
//         cin >> Height;

//         //Вызов перегруженной версии Area для цилиндра
//         cout << "Area of cylinder is: " << Area (Radius, Height) << endl;
//     }
//     else
//         cout << "Area of cylinder is: " << Area (Radius) << endl;

//     return 0;
// }

// //для круга
// double Area(double Radius)
// {
//     return Pi * Radius * Radius;
// }

// //прегружено для цилиндра
// double Area(double Radius, double Height)
// {
//     //повторное использование версии для площади круга
//     return 2 * Area(Radius) + 2 * Pi * Radius * Height;
// }

// //Листинг 7.8 Функция, получающая массив как парметр
// #include <iostream>
// using namespace std;

// void DisplayArray(int Numbers[], int Lenght)
// {
//     for(int Index = 0; Index < Lenght; ++Index)
//         cout << Numbers[Index] << " ";
    
//     cout << endl;
// }

// void DisplayArray(char Characters[], int Lenght)
// {
//     for (int Index = 0; Index < Lenght; ++Index)
//         cout << Characters[Index] << " ";
    
//     cout << endl;
// }

// int main()
// {
//     int MyNumbers[4] = {24, 58, -1, 245};
//     DisplayArray(MyNumbers, 4);

//     char MyStatement[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
//     DisplayArray(MyStatement, 7);

//     return 0;
// }

// //Листинг 7.9 Возврат площади круга по ссылке, а не в качестве возвращаемого значения
// #include <iostream>
// using namespace std;

// const double Pi = 3.1416;

// //Выходной параметр Result по ссылке
// void Area(double Radius, double &Result)
// {
//     Result = Pi * Radius * Radius;
// }

// int main()
// {
//     cout << "Enter radius: ";
//     double Radius = 0;
//     cin >> Radius;

//     double AreaFetched = 0;
//     Area(Radius, AreaFetched);

//     cout << "The area is: " << AreaFetched << endl;

//     return 0;
// }

// //Листинг 7.10 Использование встраиваемой функции, удваивющей целое число
// #include <iostream>
// using namespace std;

// //определение встраиваемой функции удвоение
// inline long DoubleNum(int InputNum)
// {
//     return InputNum * 2;
// }

// int main()
// {
//     cout << "Enter an integer: ";
//     int InputNum = 0;
//     cin >> InputNum;

//     //Вызов встраиваемой функции
//     cout << "Double is: " << DoubleNum(InputNum) << endl;

//     return 0;
// }

// //Листинг 7.11 Использование лямбда-функции для сортировки отображения элементов массива
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// void DisplayNums(vector<int> &DynArray)
// {
//     for_each(DynArray.begin(), DynArray.end(), \
//             [](int Element) {cout << Element << " ";} ); //лямбда
//     cout << endl;
// }

// int main()
// {
//     vector<int> MyNumbers;
//     MyNumbers.push_back(501);
//     MyNumbers.push_back(-1);
//     MyNumbers.push_back(25);
//     MyNumbers.push_back(-35);

//     DisplayNums(MyNumbers);

//     cout << "Sorting them in descending order" << endl;

//     sort(MyNumbers.begin(), MyNumbers.end(), \
//             [](int Num1, int Num2) {return (Num2 < Num1); } );
        
//     DisplayNums(MyNumbers);

//     return 0;
// }

// //Листинг 8.1 Определение адресов переменных типа int и double
// #include <iostream>
// using namespace std;

// int main()
// {
//     int Age = 30;
//     const double Pi = 3.1416;

//     //Использование & для поиска адреса в памяти
//     cout << "Integer Age is at: 0x" << hex << &Age << endl;
//     cout << "Double Pi is located at: 0x" << hex << &Pi << endl;

//     return 0;
// }

// //Листинг 8.2 Объявление и инициалихация указателя
// #include <iostream>
// using namespace std;

// int main()
// {
//     int Age = 30;
//     int * pInteger = &Age;  //указатель на тип int, инициализированный результатом &Age
    
//     //отображение значения указателя
//     cout << "Interger Age is at: " << pInteger << endl;

//     return 0;
// }

// //Листинг 8.3 Переназначение указателя другой переменной
// #include <iostream>
// using namespace std;

// int main()
// {
//     int Age = 30;

//     int * pInteger = &Age;
//     cout << "pInteger points to age now" << endl;

//     cout << "pInteger = " << hex << pInteger << endl;

//     int DogsAge = 9;
//     pInteger = &DogsAge;
//     cout << "pInteger pints to DoggsAge now" << endl;
//     cout << "pInteger = " << hex << pInteger << endl;

//     return 0;
// }

// //Листинг 8.4 Использование оператора обращения к значению
// //(*) для доступа к целочисленному значению
// #include <iostream>
// using namespace std;

// int main()
// {
//     int Age = 30;
//     int DogsAge = 9;

//     cout << "Integer Age = " << Age << endl;
//     cout << "Integer DogsAge = " << DogsAge << endl;

//     int * pInteger = &Age;
//     cout << "pInteger points to Age" << endl;

//     //Отображение значения указателя
//     cout << "pInteger = " << hex << pInteger << endl;

//     //Отображение значения в указанной области
//     cout << "*pInteger = " << dec << *pInteger << endl;

//     pInteger = &DogsAge;
//     cout << "pInteger points to DogsAge now" << endl;

//     cout << "pIntege = " << hex << pInteger << endl;
//     cout << "*pIntege = " << dec << *pInteger << endl;

//     return 0;
// }

// //Листинг 8.5 Манипурлирование данными при помощи указателя и оператора обращения к значению(*)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int DogsAge = 30;
//     cout << "Initialized DogsAge = " << DogsAge<< endl;
    
//     int * pAge = &DogsAge;
//     cout << "Enter an age for your dog: ";
//     //сохранить ввод в области памяти, на которую указывает pAge
//     cin >> *pAge;

//     //Отобразить адрес, по которому хранится возраст
//     cout << "Input stored using pAge at" << hex << pAge << endl;

//     cout << "Integer DogsAge = " << dec << DogsAge << endl;
//     return 0;
// }

// //Листинг 8.6 Указатели на различные типы имеют одинаковый размер
// #include <iostream>
// using namespace std;

// int main()
// {
//     int Age = 30;
//     double Pi = 3.1416;
//     char SayYes = 'y';

//     //инициализация указателей адресами переменных
//     int * pInt = &Age;
//     double * pDouble = &Pi;
//     char * pChar = &SayYes;

//     cout << "sizeof fundamental types -" << endl;
//     cout <<"sizeof(int) = " << sizeof(int) << endl;
//     cout <<"sizeof(double) = " << sizeof(double) << endl;
//     cout <<"sizeof(char) = " << sizeof(char) << endl;

//     cout << "sizeof pointers to fundamental types -" << endl;
//     cout <<"sizeof(pInt) = " << sizeof(pInt) << endl;
//     cout <<"sizeof(pDouble) = " << sizeof(pDouble) << endl;
//     cout <<"sizeof(pChar) = " << sizeof(pChar) << endl;

//     return 0;
// }

// //Листинг 8.7 Использование оператора(*) для доступа к облати памяти, 
// //зарезервированной оператором new, и ее освобождение оператором delete
// #include <iostream>
// using namespace std;

// int main()
// {
//     //Запрос области памяти int 
//     int * pAge = new int;
//     //Использование распределенной память для хранения числа
//     cout << "Enter your dog`s age: ";
//     cin >> *pAge;

//     //Использование оператора косвенного доступа * для обращения к значению
//     cout << "Age " << *pAge << " is stored at " << hex << pAge << endl;

//     // int Age = 10;
//     // pAge = &Age;
//     cout << pAge << " "<< dec << *pAge;

//     delete pAge;  //освобождение памяти
    
//     return 0;
// }

// //Листинг 8.8 Резервирование с использованием оператора new[...]
// // и освобождение с использованием опретора delete[]
// #include <iostream>
// #include <cstring> 
// #include <string>
// using namespace std;

// int main()
// {
//     cout << "Enter your name: ";
//     string Name;
//     cin >> Name;

//     //Добавить 1 к резервируемому объему памяти для заверешающего нулевого символа
//     int CharsToAllocate = Name.length() + 1;

//     //Запрос памяти для содержания копии ввода
//     char * CopyOfName = new char [CharsToAllocate];

//     //strcpy копирует из строки с завершающим нулевым символом
//     strcpy(CopyOfName, Name.c_str());

//     //Отобразить скпоированную строку
//     cout << "Dynamically allocated buffer contains: " << CopyOfName << endl;

//     //Буфер больше не используется? удалить его
//     delete[] CopyOfName;

//     return 0;
// }

// /*Листинг 8.9 Динамическое резервирование на оснвании потребности,
//  исследование приращения указателей при помощи значений смещения оператора ++*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "How many integers you wish to enter? ";
//     int InputNums = 0;
//     cin >> InputNums;

//     int * pNumbers = new int [InputNums];   //Резервирование требуемого количества целых чисел
//     // int * pCpy = pNumbers;

//     cout << "Successfully allocated memory for " << InputNums << " integers" << endl;

//     for(int Index = 0; Index < InputNums; ++Index)
//     {
//         cout << "Enter number " << Index << ": ";
//         cin >> * (pNumbers + Index);
//     }

//     cout << "Displaying all numbers input: " << endl;
//     for(int Index = 0, *pCopy = pNumbers; Index < InputNums; Index++)
//         cout << *(pCopy++) << " ";

//     cout << endl;

//     //указатель больше не используется? освободить память
//     delete[] pNumbers;

//     return 0;
// }

// /*Литстинг 8.10 использование ключевого слова const при вычислении
// площади круга, радиус и чисо Пи передаются как указатели*/
// #include <iostream>
// using namespace std;

// void CalcArea(const double * const pPi, const double * const pRadius, //Константый указатель, константные данные
//                                         double * const pArea) //изменяемо значение но не адрес
// {
//     //проверить указатели перед использованием!
//     if(pPi && pRadius && pArea)
//         *pArea = (*pPi) * (*pRadius) * (*pRadius);
// }

// int main()
// {
//     const double Pi = 3.1416;

//     cout << "Enter radius of circle: ";
//     double Radius = 0;
//     cin >> Radius;

//     double Area = 0;
//     CalcArea(&Pi, &Radius, &Area);

//     cout << "Area is = " << Area << endl;

//     return 0;
// }

// /*Листинг 8.11 Демонстрация того, что переменная типа массива 
// - это указатеть на первый его элемент*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     //Cтатический массив из 5 целых чисел
//     int MyNumbers[5];

//     //Массив присваивается указателю на тип int 
//     int * pNumbers = MyNumbers;

//     //Отображение адреса содержащегося в указателе
//     cout << "pNumbers = " << hex << pNumbers << endl;

//     //Адрес первого элемента массива
//     cout << "&MyNumbers[0] = " << hex << &MyNumbers[0] << endl;

//     return 0;
// }

// /*Листинг 8.12 Доступ к элементам массива с использованием оператора обращения 
// к значению (*) и использование оператора массив([]) при работе с указателем*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     const int ARRAY_LEN = 5;

//     //Инициализированный статисесчкий массив из 5 целыъ чисел
//     int MyNumbers[ARRAY_LEN] = {24, -1, 365, -999, 2011};

//     //указатель
//     int * pNumbers = MyNumbers;

//     cout << "Displaying array using pointer syntax, operator*" << endl;
//     for(int Index = 0; Index < ARRAY_LEN; ++Index)
//         cout << "Element " << Index << " = " << *(MyNumbers + Index) << endl;

//     cout << "Displaying array using pointer with array syntax, operator[]" << endl;

//     for(int Index = 0; Index < ARRAY_LEN; ++Index)
//         cout << "Element " << Index << " = " << pNumbers[Index] << endl;

//     return 0;
// }

// /*Листинг 8.13 Пример плохого программирования 
// с использованием недопустимых указателей*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     //неиницаилизрованный указатель (плохо)
//     int * pTemperature;

//     cout << "Is it sunny (y/n)?" << endl;

//     char UserInput = 'y';
//     cin >> UserInput;

//     if(UserInput == 'y')
//     {
//         pTemperature = new int;
//         *pTemperature = 30;
//     }
//     //pTemperature содердит недопустимое значение, если пользователь ввел 'n'

//     cout << "Temperature is: " << *pTemperature;

//     //оператор delete также может быть вызван для указателя без применения оператора new
//     delete pTemperature;

//     return 0;
// }

// //Листинг 8.14 Более безопасная программа, исправленный листинг 8.13
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Is it sunny (y/n)?";
//     char UserInput = 'y';
//     cin >> UserInput;

//     if(UserInput == 'y')
//     {
//         //инициализрованный указатель(хорошо)
//         int * pTemperature = new int;
//         *pTemperature = 30;

//         cout << "Temperature is: " << *pTemperature << endl;

//         //указатель больше не используется? удалить
//         delete pTemperature;
//     }
//     return 0;
// }

// //Листинг 8.15 Обработка исключения как изящный выход
// //из ситуации при неудаче операторе new
// #include <iostream>
// using namespace std;

// int main()
// {
//     try
//     {
//         //Запрос большой области памяти
//         int * pAge = new int [536870911];

//         //Использование предоставленной памяти

//         delete[] pAge;
//     }
//     catch (bad_alloc)
//     {
//         cout << "Memory allocation failed. Ending program" << endl;
//     }

//     return 0;
// }

// //Листинг 8.16 Использование оператора new(northrow),
// //возвращаемого при неудаче значение NULL
// #include <iostream>
// using namespace std;

// int main()
// {
//     //Запрос большой области памятим с исользованием nothrow
//     int * pAge = new(nothrow) int [0x1fffffff];

//     if(pAge) // проверка pAge != Null
//     {
//         //использование представелнной памяти
//         delete[] pAge;
//     }
//     else
//         cout << "Memory allocation failed. Ending program" << endl;

//     return 0;
// }

// /*Листинг 8.17 Демонстрация того, чтоссылки - это 
// псведонимы для значений переменных*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int Original = 30;
//     cout << "Original = " << Original << endl;
//     cout << "Original is at adress: " << hex << &Original << endl;

//     int & Ref = Original;
//     cout << "Ref is at adress: " << hex << &Ref << endl;

//     int & Ref2 = Ref;
//     cout << "Ref2 is at adress: " << hex << &Ref2 << endl;
//     cout << "Ref2 gets value, Ref2 = " << dec << Ref2 << endl;

//     return 0;
// }

// /*Листинг 8.18 Функция вычисялет квадрат числа и возвращает его в параметре по ссылке*/
// #include <iostream>
// using namespace std;

// void ReturnSquare(int &Number)
// {
//     Number *= Number;
// }

// int main()
// {
//     cout << "Enter a number you wish to square: ";
//     int Number = 0;
//     cin >> Number;

//     ReturnSquare(Number);
//     cout << "Square is: " << Number << endl;

//     return 0;
// }

// /*Листинг 8.19 Использование константной ссылки для гарантити невозможности
// вызываемой функции изменить значение, переданное по ссылке*/
// #include <iostream>
// using namespace std;

// void CalculateSquare(const int &Number, int &Result)
// {
//     Result = Number*Number;
// }

// int main()
// {
//     cout << "Enter a number you wish to square: ";
//     int Number = 0;
//     cin >> Number;

//     int Square = 0;
//     CalculateSquare(Number, Square);
//     cout << Number << "^2 =" << Square << endl;

//     return 0;
// }

// //Листинг 9.1 Готовый для компиляции класс Human
// #include <iostream>
// #include <string>
// using namespace std;

// class Human
// {
//     private:
//         string Name;
//         int Age;
    
//     public:
//         void SetName(string HumansName)
//         {
//             Name = HumansName;
//         }

//         void SetAge(int HumansAge)
//         {
//             Age = HumansAge;
//         }

//         void IntroduceSelf()
//         {
//             cout << "I am " + Name << " and am ";
//             cout << Age << " years old" << endl;
//         }
// };

// int main()
// {
//     //Создание объекта класса Human со значением "Adam"
//     //атрибута Name

//     Human FirstMan;
//     FirstMan.SetName("Adam");
//     FirstMan.SetAge(30);

//     //Создание объекта класса Human со значением "Eve"
//     //атрибута Name
//     Human FirstWoman;
//     FirstWoman.SetName("Eve");
//     FirstWoman.SetAge(28);

//     FirstMan.IntroduceSelf();
//     FirstWoman.IntroduceSelf();
// }

// /*Листинг 9.2 Модель класса Human, где истинный возраст абстрагируется
// от пользователя и сообщается более молодой возраст*/
// #include <iostream>
// using namespace std;

// class Human
// {
//     private:
//         //закрытые данные-члены:
//         int Age;
    
//     public:
//         void SetAge(int InputAge)
//         {
//             Age = InputAge;
//         }

//         //Человек лжет о своем возрасте (если ему за 30)
//         int GetAge()
//         {
//             if(Age > 30)
//                 return (Age - 2);
//             else
//                 return Age;
//         }
// };

// int main()
// {
//     Human FirstMan;
//     // FirstMan.SetAge(35);

//     Human FirstWoman;
//     // FirstWoman.SetAge(22);

//     cout << "Age of FirstMan " << FirstMan.GetAge() << endl;
//     cout << "Age of FirstWoman " << FirstWoman.GetAge() << endl;

//     return 0;
// }

// /*Листинг 9.3 Использование конструктора для инициализации перемененных-членов класса*/
// #include <iostream>
// #include <string>
// using namespace std;

// class Human
// {
//     private:
//         //закрытые данные - члены:
//         string Name;
//         int Age;
//     public:
//         //конструктор
//         Human()
//         {
//             Age = 0;    //Инициализаця гарантирует отсуствие случайного значения
//             cout << "Constructed an instance of class Human" << endl;
//         }

//         void SetName(string HumansName)
//         {
//             Name = HumansName;
//         }

//         void SetAge(int HumansAge)
//         {
//             Age = HumansAge;
//         }
//         void IntroduceSelf()
//         {
//             cout << "I am " + Name << " and am ";
//             cout << Age << " years old" << endl;
//         }
// };

// int main()
// {
//     Human FirstMan;
//     FirstMan.SetName("Adam");
//     FirstMan.SetAge(30);

//     Human FirstWoman;
//     FirstWoman.SetName("Eve");
//     FirstWoman.SetAge(28);

//     FirstMan.IntroduceSelf();
//     FirstWoman.IntroduceSelf();
// }

// /*Листинг 9.4 Класс Human с несколькими конструкторами*/
// #include <iostream>
// #include <string>
// using namespace std;

// class Human
// {
//     private:
//         //Закрытые данные-члены:
//         string Name;
//         int Age;

//     public:
//         //конструктор
//         Human()
//         {
//             Age = 0; 
//             cout << "Default constructur creates an instance of Human" << endl;
//         }

//         //перегруженный конструктор, получающий Name
//         Human(string Humansname)
//         {
//             Name = Humansname;
//             Age = 0;    //инициализация гарантирует отсутствие
//                         //случайного значения
//             cout << "Overloaded constructor creates " << Name << endl;
//         }

//         //перегруженный конструктор, получающий Name и Age
//         Human(string HumansName, int HumansAge)
//         {
//             Name = HumansName;
//             Age = HumansAge;
//             cout << "Overloaded constructor creates ";
//             cout << Name << " of " << Age << " years" << endl;
//         }

//         void SetName(string HumasName)
//         {
//             Name = HumasName;
//         }

//         void SetAge(int HumansAge)
//         {
//             Age = HumansAge;
//         }

//         void IntroduceSelf()
//         {
//             cout << "I am " + Name << " and am ";
//             cout << Age << " years old" << endl;
//         }
// };

// int main()
// {
//     Human FirstMan; //использование стандартного конструктора
//     FirstMan.SetName("Adam");
//     FirstMan.SetAge(30);

//     Human FirstWoman("Eve");    //использование стандартного конструктора
//     FirstWoman.SetAge(28);

//     Human FirstChild("Rose", 1);

//     FirstMan.IntroduceSelf();
//     FirstWoman.IntroduceSelf();
//     FirstChild.IntroduceSelf();

//     return 0;
// }

// /*Листинг 9.5 Класс с перегруженным конструктором, но без стандартного конструктора*/
// #include <iostream>
// #include <string>
// using namespace std;

// class Human
// {
//     private:
//         //Закрытые данные-члены
//         string Name;
//         int Age;

//     public:
//     //перегруженный конструктор без стандратного конструктора
//     Human(string HumansName, int HumansAge)
//     {
//         Name = HumansName;
//         Age = HumansAge;
//         cout << "Overloaded constructor creates " << Name;
//         cout << " of age " << Age << endl;
//     }

//     void IntroduceSelf()
//     {
//         cout << "I am " + Name << " and am ";
//         cout << Age << " years old" << endl;
//     }
// };

// int main()
// {
//     //Закомментирована следующая строка, пытающаяся создать объект
//     //с использованим стандартного конструктора Human FirstMan;

//     Human FirstMan("Adam", 30);
//     Human FirstWoman("Eve" , 28);

//     FirstMan.IntroduceSelf();
//     FirstWoman.IntroduceSelf();

    
//     return 0;
// }

// /*Литсинг 9.6 Стандартный конструктор, способный олучать параметры, но со значениями
// по умолчанию и списокм инциализации для установки значений членов*/
// #include <iostream>
// #include <string>
// using namespace std;

// class Human
// {
//     private:
//         int Age;
//         string Name;

//     public:
//         Human(string InputName = "Adam", int InputAge = 25)
//             :Name(InputName), Age(InputAge)
//         {
//             cout << "Constructed a Human called " << Name;
//             cout << ", " << Age << " years old" << endl;
//         }
// };

// int main()
// {
//     Human FirstMan;
//     Human FirstWoman("Eve" , 18);

//     return 0;
// }

// /*Листинг 9.7 пример класса, инкапсулирующего буфер в стиле С
// для гарантии его освобождения при помощи деструктора*/
// #include <iostream>
// #include <cstring>
// using namespace std;

// class MyString
// {
//     private:
//     char * Buffer;

//     public:
//         //Конструктор
//         MyString(const char * InitialInput)
//         {
//             if(InitialInput != NULL)
//             {
//                 Buffer = new char [strlen(InitialInput) + 1];
//                 strcpy(Buffer, InitialInput);
//             }
//             else
//                 Buffer = NULL;
//         }
//         //Деструктор: освобождает буфер, зарезервированный в конструткторе
//         ~MyString()
//         {
//             cout << "Invoking destructor, clearing up" << endl;
//             if(Buffer != NULL)
//                 delete[] Buffer;
//         }
//         int GetLength()
//         {
//             return strlen(Buffer);
//         }
//         const char * GetString()
//         {
//             return Buffer;
//         }
// };  //Конец класса Mystring

// int main()
// {
//     MyString SayHello("Hello from String Class");
//     cout << "String buffer in MyString is " << SayHello.GetLength();
//     cout << " characters long" << endl;

//     cout << "Buffer contains: " << SayHello.GetString() << endl;

//     return 0;
// }


// /*Листинг 9.8 Проблема передачи объекта класса, такого как MyString, по значению*/
// #include <iostream>
// #include <cstring>
// using namespace std;

// class MyString
// {
//     private:
//     char * Buffer;

//     public:
//         //Конструктор
//         MyString(const char * InitialInput)
//         {
//             if(InitialInput != NULL)
//             {
//                 Buffer = new char [strlen(InitialInput) + 1];
//                 strcpy(Buffer, InitialInput);
//             }
//             else
//                 Buffer = NULL;
//         }
//         //Деструктор: освобождает буфер, зарезервированный в конструткторе
//         ~MyString()
//         {
//             cout << "Invoking destructor, clearing up" << endl;
//             if(Buffer != NULL)
//                 delete[] Buffer;
//         }
//         int GetLength()
//         {
//             return strlen(Buffer);
//         }
//         const char * GetString()
//         {
//             return Buffer;
//         }
// };  //Конец класса Mystring

// void UseMyString(MyString Input)
// {
//     cout << "String buffer in MyString is " << Input.GetLength();
//     cout << " characters long" << endl;

//     cout << "Buffer contains: " << Input.GetString() << endl;
//     return;
// }

// int main()
// {
//     MyString SayHello("Hello from String Class");
  

//     //Передать Say("Hellow from string Class");
//     UseMyString(SayHello);
//     cout << SayHello.GetString();

//     return 0;
// }

// /*Листинг 9.9 Определение конструктора копий, гарантирующего глубокое 
// копирование буферов в динамически распределяемой памяти*/
// #include <iostream>
// #include <cstring>
// using namespace std;


// class MyString
// {
//     private:
//         char * Buffer;
//     public:
//         //конструктор
//         MyString(const char * InitialInput)
//         {
//             cout << "Constructor: creating new MyString" << endl;
//             if(InitialInput != NULL)
//             {
//                 Buffer = new char [strlen(InitialInput) + 1];
//                 strcpy(Buffer, InitialInput);

//                 //Отображение адреса области памяти локального буфера
//                 cout << "Buffer points to: " << hex;
//                 cout << (unsigned int *)Buffer << endl;
//             }
//             else
//                 Buffer = NULL;
//         }

//     //Конструктор копий
//     MyString(const MyString &CopySource)
//     {
//         cout << "Copy constructor: copying from MyString" << endl;

//         if(CopySource.Buffer != NULL)
//         {
//             //гарантироать глубокое копирование, создав сначала собственный буфер
//             Buffer = new char [strlen(CopySource.Buffer) + 1];

//             //копирование из оригинала в локальный буфер
//             strcpy(Buffer, CopySource.Buffer);

//             //Отображение адреса области памяти локального буфера
//             cout << "Buffer points to: " << hex;
//             cout << (unsigned int *)Buffer << endl;
//         }
//         else
//             Buffer = NULL;
//     }

//     //Деструктор
//     ~MyString()
//     {
//         cout << "Invoking destructor, clearing up" << endl;
//         if(Buffer != NULL)
//             delete[] Buffer;
//     }
    
//     int GetLenght()
//     {
//         return strlen(Buffer);
//     }

//     const char * GetString()
//     {
//         return Buffer;
//     }
// };

// void UseMyString(MyString Input)
// {
//     cout << "String buffer in MyString is " << Input.GetLenght();
//     cout << " charaters long" << endl;

//     cout << "Buffer contains: " << Input.GetString() << endl;
//     return;
// }

// int main()
// {
//     MyString SayHello("Hello from String Class");

//     //Передача SayHello по значению (с копированием)
//     UseMyString(SayHello);

//     return 0;
// }


// /*Листинг 9.10 Синглетонный класс President, 
// запрещающий копирование, присвоение и создание нескольких экземпляров*/
// #include <iostream>
// #include <string>

// using namespace std;

// class President
// {
//     private:
//         //Закрытый стандартный конструктор (запрет создания извне)
//         President() {};

//         //закрытый конструктор копий(запрет создания копии)
//         President(const President&);

//         //закрытый оператор присвоения (запрет присвоения)
//         const President &operator = (const President &); 
        

//         //Данные -члены: имя прездиента
//         string Name;

//     public:
//         //контролируемое создание экземпляра
//         static President &GetInstance()
//         {
//             //статические объекты создаются только однажды
//             static President OnlyInstance;

//             return OnlyInstance;
//         }

//         //открытые методы
//         string GetName()
//         {
//             return Name;
//         }

//         void SetName(string InputName)
//         {
//             Name = InputName;
//         }
// };

// int main()
// {
//     President &OnlyPresident = President::GetInstance();
//     OnlyPresident.SetName("Abraham Linkoln");

//     //Чтобы увидеть, как отказ при компиляции запрещает
//     //дублирование, снимите комментарии со следующих строк
//     // President Second;                            //конструктор недоступен
//     // President * Third = new President();         //конструктор недоступен 
//     // President Fourth = OnlyPresident;            //конструктор копий недоступен

//     // OnlyPresident = President::GetInstance();        //опертаор = недоступен 

//     cout << "The name of the President is: ";
//     cout << President::GetInstance().GetName() << endl;
    
//     return 0;
// }

// /*Листинг 9.11 Класс базы данных MonsterDB, позволяющий создавать
// свои объйекты только в динамической памяти(используя оператор new)*/
// #include <iostream>
// using namespace std;

// class MonsterDB
// {
//     private:
//         ~MonsterDB() {}; //закрытый деструктор
//     public:
//         static void DestroyInstance(MonsterDB * pInstance)
//         {
//             //статический член класса может обратиться к закрытому декструктору
//             delete pInstance;
//         }
//         // ... несколько других методов
// };

// int main()
// {
//     MonsterDB * pMyDatabase = new MonsterDB;

//     //pMyDatabase -> member methods (...);

//     //снимите кмментарий со следуюзиъ строк, чтобы получить ошибку при компиляции
//     //delete pMyDatabase;       //закрытый декструктор не может быть вызван

//     //для освобождения используйте статический метод
//     MonsterDB::DestroyInstance(pMyDatabase);

//     return 0;
// }

// //Листинг 9.12 Результат применения опертора sizeof() к классам и их экземплярам
// #include <iostream>
// #include <cstring> 
// using namespace std;

// class MyString
// {
//     private: 
//         char * Buffer;

//     public:
//         //конструктор
//         MyString(const char * InitialInput)
//         {
//             if(InitialInput != NULL)
//             {
//                 Buffer = new char[strlen(InitialInput) + 1];
//                 strcpy(Buffer, InitialInput);
//             }
//             else
//                 Buffer = NULL;
//         }

//         //конструкторк копий
//         MyString(const MyString& CopySource)
//         {
//             if(CopySource.Buffer != NULL)
//             {
//                 Buffer = new char [strlen(CopySource.Buffer) + 1];
//                 strcpy(Buffer, CopySource.Buffer);
//             }
//             else
//                 Buffer = NULL;
//         }

//         ~MyString()
//         {
//             if(Buffer != NULL)
//                 delete[] Buffer;
//         }

//         int GetLenght()
//         {
//             return strlen(Buffer);
//         }

//         const char * GetString()
//         {
//             return Buffer;
//         }
// };

// class Human
// {
//     private:
//         int Age;
//         bool Gender;
//         MyString Name;

//     public:
//         Human(const MyString& InputName, int InputAge, bool InputGender)
//             : Name(InputName), Age (InputAge), Gender(InputGender){}

//         int GetAge()
//         {
//             return Age;
//         }
// };

// int main()
// {
//     MyString FirstMan("Adam");
//     MyString FirstWoman("Eve");

//     cout << "sizeof(MyString) = "  << sizeof(MyString) << endl;
//     cout << "sizeof(FirstMan) = "  << sizeof(FirstMan) << endl;
//     cout << "sizeof(FirstWoman) = "  << sizeof(FirstWoman) << endl;

//     Human FirstMaleHuman(FirstMan, 25, true);
//     Human FirstFemaleHuman(FirstWoman, 18, false);

//     cout << "sizeof(Human) = " << sizeof(Human) << endl;
//     cout << "sizeof(FirstMaleHuman) = " << sizeof(FirstMaleHuman) << endl;
//     cout << "sizeof(FirstFemaleHuman) = " << sizeof(FirstFemaleHuman) << endl;
    
//     return 0;
// }

// /*Листинг 9.13 Использование ключевого слова friend, позволяющее внешней
// функции DisplayAge() обращаться к закрытым переменным-членам*/
// #include <iostream>
// #include <string>
// using namespace std;

// class Human
// {
//     private:
//         string Name;
//         int Age;

//         friend void DisplayAge(const Human& Person);

//     public:
//         Human(string InputName, int InputAge)
//         {
//             Name = InputName;
//             Age = InputAge;
//         }
// };

// void DisplayAge(const Human& Person)
// {
//     cout << Person.Age << endl;
// }

// int main()
// {
//     Human FirstMan("Adam", 25);
//     cout << "Accessing private member Age via friend: ";
//     DisplayAge(FirstMan);

//     return 0;
// }

// /*Листинг 9.14 Исользование ключевого слова friend, позволяющее внешнему
// вспомогательному классу обращаться к закрытым ппеременным-членам*/
// #include <iostream>
// #include <string>
// using namespace std;

// class Human
// {
//     private:
//         string Name;
//         int Age;

//         friend class Utility;

//     public:
//         Human(string InputName, int InputAge)
//         {
//             Name = InputName;
//             Age = InputAge;
//         }

        
// };

// class Utility
// {
//     public: 
//     static void DisplayAge(const Human& Person)
//     {
//         cout << Person.Age << endl;
//     }
// };

// int main()
// {
//     Human FirstMan("Adam", 25);
//     cout << "Accessing privare memeber Age via friend class: ";
//     Utility::DisplayAge(FirstMan);
    

//     return 0;
// }

// /*Листинг 10.1 Пример иерархии наследования*/
// #include <iostream>
// using namespace std;

// class Fish
// {
//     public:
//     bool FreshWaterFish;

//     void Swim()
//     {
//         if(FreshWaterFish)
//             cout << "Swim in lake" << endl;
//         else
//             cout << "Swim in sea" << endl;
//     }
// };

// class Tuna: public Fish
// {
//     public:
//         Tuna()
//         {
//             FreshWaterFish = false;
//         }
// };

// class Carp: public Fish
// {
//     public: 
//         Carp()
//         {
//             FreshWaterFish = true;
//         }
// };

// int main()
// {
//     Carp MyLunch;
//     Tuna myDinner;

//     cout << "Getting my food to swim" << endl;

//     cout << "Lunch: ";
//     MyLunch.Swim();
    
//     cout << "Dinner: ";
//     myDinner.Swim();

//     return 0;
// }


// /*Листинг 10.2 Улучшенный класс Fish, использующий ключевое слово protected
// для представления о его переменных-членов только производным классам*/
// #include <iostream>
// using namespace std;

// class Fish
// {
//     protected:
//         bool FreshWaterFish;        //доступно только производным классам
//     public:
//         void Swim()
//         {
//             if(FreshWaterFish)
//                 cout << "Swim in lake" << endl;
//             else
//                 cout << "Swim in sea" << endl;
//         }
// };

// class Tuna: public Fish
// {
//     public:
//         Tuna()
//         {
//             FreshWaterFish = false;     //установка значения защищенного члена базового класса
//         }
// };

// class Carp: public Fish
// {
//     public: 
//         Carp()
//         {
//             FreshWaterFish = true;
//         }
// };

// int main()
// {
//     Carp myLunch;
//     Tuna myDinner;

//     cout << "Getting my food to swim" << endl;

//     cout << "Lunch: ";
//     myLunch.Swim();
    
//     cout << "Dinner: ";
//     myDinner.Swim();

//     //Снимите комменатрйи со строки ниже, чтобы убежится в 
//     //недоступности защещенных данных членов извне иерарахии класса
//     //myLunch.FreshWaterFish = false;

//     return 0;
// }

//Пометка 1.
// /*Листинг 10.3 Конструктор производного класса со списками инициализации*/
// #include <iostream>
// using namespace std;

// class Fish
// {
//     protected:
//         bool FreshWaterFish; //доступно только производным классам
    
//     public:
//         //конструктор класса Fish
//         Fish(bool IsFreshWater) : FreshWaterFish(IsFreshWater){}

//     void Swim()
//     {
//         if(FreshWaterFish)
//             cout << "Swim in lake" << endl;
//         else
//             cout << "Swims in sea" << endl;
//     }
// };

// class Tuna: public Fish
// {
//     public:
//         Tuna() : Fish(false){}
// };

// class Carp: public Fish
// {
//     public:
//         Carp(): Fish(true){}
        
// };

// int main()
// {
//     Carp myLunch;
//     Tuna myDinner;

//     cout << "Geting my food to swim" << endl;

//     cout << "Lunch: ";
//     myLunch.Swim();

//     cout << "Dinner: ";
//     myDinner.Swim();

//     return 0;
// }

// //Листинг 10.4 Производные классы Tuna и Carp,
// //переопредляющие меторд Swim() базового класса Fish
// #include <iostream>
// using namespace std;

// class Fish
// {
//     private:
//         bool FreshWaterFish;

//     public:
//     //конструктор класса Fish    
//     Fish(bool IsFreshWater) : FreshWaterFish(IsFreshWater){}

//     void Swim()
//     {
//         if(FreshWaterFish)
//             cout << "Swims in lake" << endl;
//         else
//             cout << "Swims in sea" << endl;
//     }
// };

// class Tuna: public Fish
// {
//     public:
//         Tuna(): Fish(false) {}

//         void Swim()
//         {
//                 cout << "Tuna swims real fast" << endl;
//         }
// };

// class Carp: public Fish
// {
//     public:
//         Carp() : Fish(true){}
// };

// int main()
// {
//     Carp myLunch;
//     Tuna myDinner;

//     cout << "Geting my food to swim" << endl;

//     cout << "Lunch: ";
//     myLunch.Swim();

//     cout << "Dinner: ";
//     myDinner.Swim();

//     return 0;
// }

// /*Листинг 10.5 Использование оператора бласти видимости (::) для вызова
// методов базового класса из методов производных классов и функции main()*/

// #include <iostream>
// using namespace std;

// class Fish
// {
//     private:
//         bool FreshWaterFish;

//     public:
//         //конструктор класса Fish
//         Fish(bool IsFreshWater) : FreshWaterFish(IsFreshWater){}

//         void Swim()
//         {
//             if(FreshWaterFish)
//                 cout << "Swims in lake" << endl;
//             else
//                 cout << "Swims in sea" << endl;
//         }
// };

// class Tuna: public Fish
// {
//     public:
//         Tuna() : Fish(false) {}
    
//     void Swim()
//     {
//         cout << "Tuna swims real fast" << endl;
//     }
// };

// class Carp: public Fish
// {
//     public:
//         Carp() : Fish(true){}

//         void Swim()
//         {
//             cout << "Carp swims real slow" << endl;
//             Fish::Swim();
//         }
// };

// int main()
// {
//     Carp myLunch;
//     Tuna myDinner;

//     cout << "Getting my food to swim" << endl;

//     cout << "Lunch: ";
//     myLunch.Swim();

//     cout << "Dinner: ";
//     myDinner.Fish::Swim();

    

//     return 0;
// }

// /*Листинг 10.6 Скорытие методом Tuna::Swim() перегруженного метода Fish::Swim(bool)*/
// #include <iostream>
// using namespace std;

// class Fish
// {
//     public:
//         void Swim()
//         {
//             cout << "Fish swims...!" << endl;
//         }

//         void Swim(bool FreshWaterFish)
//         {
//             if(FreshWaterFish)
//                 cout << "Swims in lake" << endl;
//             else
//                 cout << "Swims in sea" << endl;
//         }
// };

// class Tuna: public  Fish
// {
    
//     public: 
//     using Fish::Swim;           //вариант чтоб работало
//         void Swim()
//         {
//             cout << "tuna swims real fast" << endl;
//         }
// };

// int main()
// {
//     Tuna myDinner;

//     cout << "getting my food to swim" << endl;

//     //myDinner.Swim(false); //отказ компиляции: Fish::Swim(bool)
//                             //скрыт методом Tuna::Swim()
//     myDinner.Swim();
//     myDinner.Swim(false);

//     myDinner.Fish::Swim();
//     myDinner.Fish::Swim(true);
//     myDinner.Fish::Swim(false);

//     return 0;
// }

// /*Листинг 10.7 Порядок создания и удаления базового
// класса, производного класса и его членов*/
// #include <iostream>
// using namespace std;

// class FishDummyMember
// {
//     public:
//     FishDummyMember()
//     {
//         cout << "FishDummyMember constructor" << endl;
//     }

//     ~FishDummyMember()
//     {
//         cout << "FishDummyMember destructor" << endl;
//     }
// };

// class Fish
// {
//     protected:
//         FishDummyMember dummy;
    
//     public:
//         //Конструкторк класса Fish
//         Fish()
//         {
//             cout << "Fish constructor" << endl;
//         }

//         ~Fish()
//         {
//             cout << "Fish destructor" << endl;
//         }
// };

// class TunaDummyMember
// {
//     public:
//         TunaDummyMember()
//         {
//             cout << "TunaDummyMember constructor" << endl;
//         }

//         ~TunaDummyMember()
//         {
//             cout << "TunaDummyMember destructor" << endl;
//         }
// };

// class Tuna: public Fish
// {
//     private:
//         TunaDummyMember dummy;

//     public:
//         Tuna()
//         {
//             cout << "Tuna constructor" << endl;
//         }

//         ~Tuna()
//         {
//             cout << "Tuna destructor" << endl;
//         }
// };

// int main()
// {
//     Tuna myDinner;
// }

// //Листинг 10.8 Класс Car, связанный с классом Motor через закрытое наследование
// #include <iostream>
// using namespace std;

// class Motor
// {
//     public:
//         void SwitchIgnition()
//         {
//             cout << "Ignition ON" << endl;
//         }

//         void PumpFuel()
//         {
//             cout << "Fuel in cylindres" << endl;
//         }

//         void FireCylindres()
//         {
//             cout << "Vroooom" << endl;
//         }
// };

// class Car: private Motor
// {
//     public:
//         void Move()
//         {
//             SwitchIgnition();
//             PumpFuel();
//             FireCylindres();
//         }
// };

// int main()
// {
//     Car myDreamCar;
//     myDreamCar.Move();

//     return 0;
// }

// //Листинг 10.9 Класс SuperCar, производный от класса Car,
// //происходящего от класса Motor, при защищенном наследовании
// #include <iostream>
// using namespace std;

// class Motor
// {
//     public:
//         void SwitchIgnition()
//         {
//             cout << "Ignition ON" << endl;
//         }

//         void PumpFuel()
//         {
//             cout << "Fuel in cylindres" << endl;
//         }

//         void FireCylindres()
//         {
//             cout << "Vroooom" << endl;
//         }
// };

// class Car: protected Motor
// {
//     public:
//         void Move()
//         {
//             SwitchIgnition();
//             PumpFuel();
//             FireCylindres();
//         }
// };

// class SuperCar: protected Car
// {
//     public:
//         void Move()
//         {
//             SwitchIgnition();   //имеет доступ к членам базовго благодаря
//             PumpFuel();         //защищенному наследованию между Car и Motor
//             FireCylindres();
//             FireCylindres();
//             FireCylindres();

//             // Car::Move();
//             // FireCylindres();
//             // FireCylindres();
//         }
// };

// int main()
// {
//     SuperCar myDreamCar;
//     myDreamCar.Move();

//     return 0;
// }

// /*Листинг 10.10 Использование множественного наследования для моделирования утконоса
// являющегося млекопитающим, птицей и рептилией*/
// #include <iostream>
// using namespace std;

// class Mammal
// {
//     public:
//         void FeedBabyMilk()
//         {
//             cout << "Mammal: Baby says glug!" << endl;
//         }
// };

// class Reptile
// {
//     public:
//         void SpitVenom()
//         {
//             cout << "Reptile: Shoo enemy! Spits venom!" << endl;
//         }
// };

// class Bird
// {
//     public:
//         void LayEggs()
//         {
//             cout << "Bird: Laid my eggs, am lighter now!" << endl;
//         }
// };

// class Platypus: public Mammal, public Bird, public Reptile
// {
//     public:
//         void Swim()
//         {
//             cout << "Platypus: Voila, I can swim!" << endl; 
//         }
// };

// int main()
// {
//     Platypus realFreak;
//     realFreak.LayEggs();
//     realFreak.FeedBabyMilk();
//     realFreak.SpitVenom();
//     realFreak.Swim();

//     return 0;
// }


// 1. Я хочу, чтобы некоторые члены базового класса были доступны для производного 
// класса, но не вне иерархии классов. Какой модификатор доступа мне использовать? ответ: protected;
// #include <iostream>
// using namespace std;

// class Name1
// {
//     protected:
//         int num;
//     public:
//         Name1(int chislo = 2) : num(chislo){}

//         void NUMS()
//         {
//             cout << num * num << endl;
//         }
// };

// class Name2 : public Name1
// {
//     public:
//         void lol()
//         {
//            cout << num * num * num << endl;
//         }

//         void lol2()
//         {
//             NUMS();
//         }

// };


// int main()
// {
//    Name1 object1(20);
//    Name2 object2;

//    object1.NUMS();
    
//    object2.lol();
//    object2.lol2();
//    object2.NUMS();
// }

// //Листинг 11.1 Вызов методов при помощи экземпляра базового класса Fish, который принаделжит классу Tuna
// #include <iostream>
// using namespace std;

// class Fish
// {
//     public:
//         void Swim()
//         {
//             cout << "Fish swims!" << endl;
//         }
// };

// class Tuna:public Fish
// {
//     public:
//     //переопределение Fish::Swim
//     void Swim()
//     {
//         cout << "Tuna swims!" << endl;
//     }
// };

// void MakeFishSwim(Fish& InputFish)
// {
//     //вызов Fish::Swim
//     InputFish.Swim();
// }

// int main()
// {
//     Tuna myDinner;

//     //вызов Tuna::swim
//     myDinner.Swim();

//     //передача Tuna как Fish
//     MakeFishSwim(myDinner);

//     return 0;
// }

// /*Листинг 11.2 Результат объявления метода Fish::Swim() виртуальным*/
// #include <iostream>
// using namespace std;

// class Fish
// {
//     public:
//         virtual void Swim()
//         {
//             cout << "Fish swims!" << endl;
//         }
// };

// class Tuna: public Fish
// {
//     public:
//         //переопределение Fish::Swim
//         void Swim()
//         {
//             cout << "Tuna swims!" << endl;
//         }
// };

// class Carp:public Fish
// {
//     public:
//         //переопределение Fish::Swim
//         void Swim()
//         {
//             cout << "Carp swims!" << endl;
//         }
// };

// void MakeFishSwim(Fish& InputFish)
// {
//     //вызов виртуального метода Swim()
//     InputFish.Swim();
// }

// int main()
// {
//     Tuna myDinner;
//     Carp myLunch;
//     Fish myBreakfast;

//     //передача Tuna как Fish
//     MakeFishSwim(myDinner);

//     //передача Carp как Fish
//     MakeFishSwim(myLunch);

//     MakeFishSwim(myBreakfast);

//     return 0;
// }

// /*Листинг 11.3 Функция, вызывающая оператор delete для типа Base* */
// #include <iostream>
// using namespace std;

// class Fish
// {
//     public:
//         Fish()
//         {
//             cout << "Constructed Fish" << endl;
//         }
//         ~Fish()
//         {
//             cout << "Destroyed Fish" << endl;
//         }
// };

// class Tuna:public Fish
// {
//     public:
//         Tuna()
//         {
//             cout << "Constructed Tuna" << endl;
//         }
//         ~Tuna()
//         {
//             cout << "Destroyed Tuna" << endl;
//         }
// };

// void DeleteFishMemory(Fish * pFish)
// {
//     delete pFish;
// }

// int main()
// {
//     cout << "Allocatin a Tuna on the free store: " << endl;
//     Tuna * pTuna = new Tuna;
//     cout << "Deleting the Tuna: " << endl;
//     DeleteFishMemory(pTuna); 
    
//     cout << "Instantiatin a Tuna on the stack:" << endl;
//     Tuna myDinner;
//     cout << "Automatic destruction as it goes out of scope: " << endl;

//     return 0;
// }

// /*Листинг 11.4 Использование виртуальных деструкторов для гарантии вызова
// деструкторов производных классов при удалении указателя типа Base* */
// #include <iostream>
// using namespace std;

// class Fish
// {
//     public:
//         Fish()
//         {
//             cout << "Constructed Fish" << endl;
//         }
//         virtual ~Fish() //виртуальный деструктор!
//         {
//             cout << "Destroyed Fish" << endl;
//         }
// };

// class Tuna:public Fish
// {
//     public:
//         Tuna()
//         {
//             cout << "Constructed Tuna" << endl;
//         }
//         ~Tuna()
//         {
//             cout << "Destroyed Tuna" << endl;
//         }
// };

// void DeleteFishMemory(Fish * pFish)
// {
//     delete pFish;
// }

// int main()
// {
//     cout << "Allocatin a Tuna on the free store: " << endl;
//     Tuna * pTuna = new Tuna;
//     cout << "Deleting the Tuna: " << endl;
//     DeleteFishMemory(pTuna); 
    
//     cout << "Instantiatin a Tuna on the stack:" << endl;
//     Tuna myDinner;
//     cout << "Automatic destruction as it goes out of scope: " << endl;

//     return 0;
// }

// /*Листинг 11.5 Демонстрация наличия скрытого указателя VFT при сравнении двух одинаковых классов
// функция одного из которых объйявлена  виртуальной*/
// #include <iostream>
// using namespace std;

// class SimpleClass
// {
//     int a, b;

//     public:
//         void FuncDoSomething(){}
// };

// class Base
// {
//     int a, b;

//     public:
//         virtual void FuncDoSomething(){}
// };

// int main()
// {
//     cout << "sizeof(SimpleClass) = " << sizeof(SimpleClass) << endl;
//     cout << "sizeof(Base) = " << sizeof(Base) << endl;

//     return 0;
//  }

//Листинг 11.6 Класс Fish как абстрактный базовый класс для классов Tuna и Сarp
#include <iostream>
using namespace std;

class Fish
{
    public:
        //определение чистой виртуальной функции Swim
        virtual void Swim() = 0;
};

class Tuna: public Fish
{
    public:
        void Swim()
        {
            cout << "Tuna swims fast in the sea!" << endl;
        }
};

class Carp: public Fish
{
    void Swim()
    {
        cout << "Carp swims slow in the lake!" << endl;
    }
};

void MakeFishSwim(Fish& inputFish)
{
    inputFish.Swim();
}

int main()
{
    //Fish myFish //Ошибка, нельзя создать экземпляр абстрактного класса

    Carp myLunch;
    Tuna myDinner;

    MakeFishSwim(myLunch);
    MakeFishSwim(myDinner);

    return 0;
}