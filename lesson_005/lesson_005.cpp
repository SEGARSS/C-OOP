﻿// Конструктор класса пример. Зачем нужен. Конструктор с параметрами. Конструктор по умолчанию. Урок#78 - Видео 7.

#include<iostream>
using namespace std;


//------------------------------------------------------------------------------------------
class point
{
public:
	point(int valueX, int valueY) //Конструтктор.
	{
		x = valueX;
		y = valueY;
	}

	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}

	int GetX()
	{
		return x;
	}
	void SetX(int valueX)
	{
		x = valueX;
	}

	int GetY()
	{
		return y;
	}
	void SetY(int valueY)
	{
		y = valueY;
	}
	

private:
	int x;
	int y;	
};
//------------------------------------------------------------------------------------------
int main() 
{
	setlocale(LC_ALL, "ru");
	
	point a(0, 8);
	a.Print();

	point b(4, 38);
	b.Print();
	
	return 0;
}
//------------------------------------------------------------------------------------------
/*
Конструктор. По умолчанию в классах создаються конструкторы не явные, мы их не видим и он всегда создаються
с данными по умолчанию, тобижь с мусором.
К примеру, class point у него коснтруктор не явный по умолчанию point(), в этому случаи при стандарте
вызова класса мы получим мусор если не инициализируем туда данные, инициализаровать через Get и Set.
Но, если мы создали конструктор в ручную, а именно вот так - 

point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}

То в таком случаи, при вызове класса, мы уже больше не можем написать point a; мы уже будет обязанны писать
point a(5б,5); где указали(инициализировали) любые данные, без приминения Get и Set, по сути и упрастили задачу,
и ушли от проблемы изначального инициализированного мусора.

Также стоит заметить, косруктор создаёться в нутри класса и только в разделе public:, если мы его засуним в 
раздел private: мы не сможем им воспользоваться, во всяком случаи для применения в данном уроке он не должен
быть в разделе private: .

Также, название конструктора не может отличаться от названия класса, тоесть если лкасс называеться point
то и конструктор должен быть с таким же название, если написать с другим, попросту не будет рабоать.
*/