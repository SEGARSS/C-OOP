﻿//Перегрузка оператора индексирования . Перегрузка операторов пример. C++ Для начинающих. Урок#87 - Видео №18.

#include<iostream>
using namespace std;


//------------------------------------------------------------------------------------
class TestClass
{
public:
	int &operator[](int index)
	{
		return arr[index];
	}

private:
	int arr[5]{ 5,68,4,6,348 };
};
//------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "ru");

	TestClass a;
	cout << a[0] << endl;

	a[0] = 100;
	cout << a[0] << endl;

	return 0;
}
//------------------------------------------------------------------------------------
/*
Реализация работы массива в ООП.
*/
