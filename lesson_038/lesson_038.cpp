﻿//Порядок вызова деструкторов при множественном наследовании. ООП. С++ начинающих. Урок #111 - Видео 45. 

#include<iostream>
#include<string>
using namespace std;

//------------------------------------------------------------------
class Car
{
public:
	Car()
	{
		cout << "Вызвался конструктор класса Car вызван! " << endl;
	}
	~Car()
	{
		cout << "Вызвался диструктор класса Car вызван! " << endl;
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
		cout << "Вызвался конструктор класса Airplan вызван! " << endl;
	}
	~Airplan()
	{
		cout << "Вызвался диструктор класса Airplan вызван! " << endl;
	}

	void Fly()
	{
		cout << "Я лечу!" << endl;
	}
};
//------------------------------------------------------------------
class FlyingCar : public Airplan, public Car
{
public:
	FlyingCar()
	{
		cout << "Вызвался конструктор класса FlyingCar вызван! " << endl;
	}
	~FlyingCar()
	{
		cout << "Вызвался диструктор класса FlyingCar вызван! " << endl;
	}
	
};
//------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	FlyingCar fc;

	cout << endl << endl;


	return 0;
}
//------------------------------------------------------------------

/*Порядок вызова диструкторов отличаеться от одиночных наследований только тем как у нас и в каком порядке идёт наследования,
тоесть от такой записи в данном примере - class FlyingCar : public Airplan, public Car
где следует, что первый диструктор будет FlyingCar потом Car и потом Airplan.
Поменяем местами class FlyingCar : public Car, public Airplan и соответственно первый всё также диструктор будет 
FlyingCar, а затем Airplan и затем Car.
Первый прородитель наследник, будет уничтожаться в последнюю очередь.*/