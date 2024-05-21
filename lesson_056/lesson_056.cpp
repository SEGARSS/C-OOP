﻿//Специализация шаблона класса. Изучение С++ для начинающих. Урок #128 - Видео № 148.

//-------------------------------------------------------------------------------------------
#include<iostream>
#include<string>
using namespace std;
//-------------------------------------------------------------------------------------------
template<class T> 
class Printer // Обычный метод реализации (не специализированный)
{
public:
	void Print(T value)
	{
		cout << "35 " << value << " 35 " << endl;
	}
};
//-------------------------------------------------------------------------------------------
template<>
class Printer<string> // Шаюлонный метод реализации (где только строковое значение может быть)
{
public:
	void Print(string value)
	{
		cout << "____" << value << "_____" << endl;
	}
};
//-------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	Printer<int> g; // Обычный метод реализации (не специализированный)
	g.Print(325);

	cout << endl;

	Printer<string> p; // Шаюлонный метод реализации
	p.Print("Привет Прогер!!!");

	return 0;
}
//-------------------------------------------------------------------------------------------

/*Метод специализированной реализации шаблонный классов.*/