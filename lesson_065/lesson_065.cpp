﻿// Многофайловый проект | Изучение С++ для начинающих. Урок #139 - Видео №173.

#include<iostream>
#include "Sum.h"
#include "MyClass.h"

using namespace std;

//-----------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	int result = SumPr(2, 3);
	cout << result << endl;

	MyClass m;
	m.PrintMsg("Priva Priger!");

	return 0;
}
//-----------------------------------------------------------------------------
/*Реализация как рабоать в больших проекта, где все разбито на отдельные подключённые файлы*/