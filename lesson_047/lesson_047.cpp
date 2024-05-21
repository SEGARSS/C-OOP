﻿// С++ try catch. Обработка исключений С++. try catch что это. Изучение С++ для начинающих. Урок #120 - Видео № 55.

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//------------------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"Ru");

	string path = "myFile.txt";

	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit); // Библиотеки для вызовов исключений.

	try
	{
		cout << "Попытка открыть файл!" << endl;
		fin.open(path);
		cout << "Файл успешно открыт!" << endl;
	}
	catch (const ifstream::failure &ex) // Даёт развёрнутый вид при выпадании исключения ошибки (если она возникла).
	{
		cout << ex.what() << endl; // Указывает что есть ошибка
		cout << ex.code() << endl; // Указывает номер ошибки (код)
		cout << "Ошибка открытия файла!" << endl;
	}

	return 0;
}
//------------------------------------------------------------------------------------------------------------------
/*Обработка исключейни при работе с файлами.*/