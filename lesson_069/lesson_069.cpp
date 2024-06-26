﻿//Лямбда-выражения | Лямбда функции | Анонимные функции | Изучение С++ для начинающих. Урок #143 - Видео №92.
#include<iostream>
#include<functional>
#include<vector>
using namespace std;


//-------------------------------------------------------------------
void Foo(int a)
{
	if (a > 10 && a < 40)
		cout << "Foo2 " << a << endl;
}
//-------------------------------------------------------------------
void Bar(int a)
{
	if (a % 2 == 0)
		cout << "Bar2 " << a << endl;
}
//-------------------------------------------------------------------
void DoWork(vector<int> &vc, function<void(int)> func)
{
	for (auto el : vc)
	{
		func(el);
	}
}
//-------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	int p = 0;

	[&p](int a)
	{
		p = 5;
	};


	vector<int> vc = {1,51,4,10,44,98,8,12,22,29,49};

	DoWork(vc, [](int a)
	{
			cout << "вызвана анонимная функция с параметрами - " << a << endl;
	});

	return 0;
}
//-------------------------------------------------------------------