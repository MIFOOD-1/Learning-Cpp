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

// //2. Отладка: Что не так с этим фрагментом кода?
// int MyNumbers[5] = {0};
// MyNumbers[5] = 450; // Присвоение значения 450 пятому элементу
//Ответ выход за границы массива, MyNumbers[0~4] индекс имеет

// 3. Отладка: Что не так с этим фрагментом кода?
// int MyNumbers[5]; 
// cout << MyNumbers[3] 
//Ответ нет значения, возращает мусор.