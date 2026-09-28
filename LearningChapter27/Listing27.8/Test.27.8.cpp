/*Листинг 27.8 Создание новго текстового файла и запись
в него с использованием оюъекта класса ofstream*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myFile;
    myFile.open("HelloFile.txt", ios_base::out);

    if(myFile.is_open())
    {
        cout << "File open successful" << endl;
        myFile << "My first text file!" << endl;
        myFile << "Hello file!";

        cout << "Finished writing to file, will close now" << endl;
        myFile.close();
    }

    return 0;
}