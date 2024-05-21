﻿// Пространства имен с++. namespace c++ что это. Изучение С++ для начинающих. Урок #125 - Видео № 61.

#include<iostream>
#include<string>
using namespace std;

//-------------------------------------------------------------------------------------------
namespace firstNS
{
	void FOO()
	{
		cout << "FOO firstNS" << endl;
	}
}
//-------------------------------------------------------------------------------------------
namespace secondNS
{
	void FOO()
	{
		cout << "FOO secondNS" << endl;
	}
}
//-------------------------------------------------------------------------------------------
namespace thisNS
{
	namespace secondNS
	{
		void FOO()
		{
			cout << "FOO thisNS - secondNS" << endl;
		}
	}
}
//-------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "ru");

	secondNS::FOO();
	firstNS::FOO();
	thisNS::secondNS::FOO();

	return 0;
}
//-------------------------------------------------------------------------------------------

/*Пространства имён, к чему мы используем в уроках using namespace std; ? в библиотеку std заложенно много стандартных
функций и классов, и так как мы прописали using namespace std мы можем их сразу неявно использовать.
К примеру тот cout мы можем сразу прописать и вывести даннеы в терминал.
А если к примеру убрать using namespace std, то к примеру чтобы вывести данные в терминалой командой cout,
перед этим придёться прописать std тоесть - std::cout.... 

Насчёт пространства имён дополнительных, которые можем создать.
На примере созданных, мы можем благодаря этому использовать в них фугкцию FOO с одинаковым названием, но перед этим
явно указать из какова пространства имён мы её берём. 

В пространстве имён мы можем создать ещё одно пространство имён!*/