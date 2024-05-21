﻿//Цикл foreach C++ | range-based циклы | Изучение С++ для начинающих. Урок #137 - Видео №161. 

#include<iostream>
#include<list>
#include<vector>
#include<string>
using namespace std;

//-----------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	int arr[] = {5, 11, 94, 99, 32};

	/*можно написать и вот такую запись - for (auto var: arr) - где перемменая var может не быть ввиде ссылке,
	но в этом случаии, рабоать будет помедленней.
	Если мы боимся случайно заменитить или изминить элементы в массиве, то просто дописываем const - for (const auto &var: arr)*/
	for (auto &var: arr)//auto - тип элемента (auto - тоесть любой тип какойбы нибыл). arr - в каком массиве перебрать элементы.
	{
		//var = -1; - Такой записью, все элементы заполняться -1.
		cout << var << endl;//var - в какую переменную будет вывод.
	}

	return 0;
}
//-----------------------------------------------------------------------------------------
/*Цикл foreach это запись for, но запись другая, он служит для перебора элеметов в массиве и не только в масиве, но и в листе и не только.*/