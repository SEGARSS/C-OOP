﻿//Порядок вызова конструкторов при наследовании. Как вызываются конструкторы. ООП C++ Начинающим C++ #100 - Видео №116.

#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	A()
	{
		cout << "Вызвался конструктор класса А " << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "Вызвался конструктор класса В " << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "Вызвался конструктор класса C " << endl;
	}
};

int main()
{
	setlocale(LC_ALL,"ru");

	C c;

	return 0;
}

/*Довольно удобная последовательность вызова конструктора при наследовании.
Тоесть, если классы унаследованны друг другу, то таким образом, можно скомбинировать вывод данных,
который в принципе не меняеться и т он нужен для многих вещей.*/