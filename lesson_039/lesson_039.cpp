﻿//С++ множественное наследование одинаковые методы. ООП. Изучение С++ для начинающих. Урок #112 - Видео 47.

#include<iostream>
#include<string>
using namespace std;

//------------------------------------------------------------------
class Car
{
public:
	void Use()
	{
		cout << "Я еду!" << endl;
	}
};
//------------------------------------------------------------------
class Airplan
{
public:
	void Use()
	{
		cout << "Я лечу!" << endl;
	}
};
//------------------------------------------------------------------
class FlyingCar : public Car, public Airplan
{
public:
	
};
//------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	FlyingCar fc;

	((Car)fc).Use();
	((Airplan)fc).Use();

	return 0;
}
//------------------------------------------------------------------

/*Новый ситаксис записи, при множественном наследовании классо.
Если в классах допустим, одинаковые методы вывода реализации, в даном случаии void Use() есть в классе Car и в классе Airplan.
Чтобы класс FlyingCar унаследованный от классво Car, Airplanб смог воспользоваться тем или иным методом и не запустался каким именно,
указываем ему вот такой синтаксис - ((Car)fc).Use(); или если другой класс ((Airplan)fc).Use();*/