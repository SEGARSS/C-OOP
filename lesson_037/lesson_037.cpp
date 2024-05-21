﻿//Порядок вызова конструкторов при множественном наследовании. ООП. С++ начинающих. Урок #110 - Видео 44.

#include<iostream>
#include<string>
using namespace std;

//------------------------------------------------------------------
class Car
{
public:
	Car()
	{
		cout << "Конструктор класса Car вызван! " << endl;
	}

	void Drive()
	{
		cout << "Я еду!" << endl;
	}
};
//------------------------------------------------------------------
class Airplan
{
public:
	Airplan()
	{
		cout << "Конструктор класса Airplan вызван! " << endl;
	}

	void Fly()
	{
		cout << "Я лечу!" << endl;
	}
};
//------------------------------------------------------------------
class FlyingCar : public Car, public Airplan
{
public:
	FlyingCar()
	{
		cout << "Конструктор класса FlyingCar вызван! " << endl;
	}
	
};
//------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	FlyingCar fc;


	return 0;
}
//------------------------------------------------------------------
/*Вызов и реализация конструктора при множественном наследовании завист от того, какой мы первый клас унаследовали.
С такой записью - class FlyingCar : public Car, public Airplan - первый конструктор будет класса Car, потом Airplan,
потом FlyingCar.
Если, мы сделаем вот такую запись - class FlyingCar : public Airplan, public Car - то в этом случаи, сначла вызовиться
конструктор Airplan, потом Car и FlyingCar. Тобижь, вызовы класса идёт с первого наследника и последущие.*/