﻿// Деструктор что это. Зачем нужен деструктор класса в ООП. Деструктор с параметрами. Перегрузка. #80 Видео - 9.

#include<iostream>
#include<string>
using namespace std;


//-------------------------------------------------------------------------------------------------------
class MyClass
{
	int *data;

public:
	~MyClass()
	{
		delete[] data;
		cout << "Объек " << data << " Вызвался деструктор" << endl;
	}

	MyClass(int size)
	{
		data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "Объек " << data << " Вызвался конструктор" << endl;
	}
};
//-------------------------------------------------------------------------------------------------------
void foo()
{
	cout << "Foo начал работу" << endl;
	MyClass a(1);
	cout << "Foo конец выполнения" << endl;
}
//-------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "ru");

	foo();
	cout << endl;

	MyClass a(1);

	MyClass b(2);

	MyClass c(3);

	return 0;
}
//-------------------------------------------------------------------------------------------------------
/*
Замечания. Все данные которые прописываються в классе, ели мы не указали категорию public: ну или private:, то по умолчанию
всегда без указания будет private: - это важно!
Деструктор - не может быть с параметрами и принимать параметры. 
Создаёться он без параметров всегда с пустым значением и не как иначе.
Чтобы создать Деструктор класса, нужно перед названием написать знак тильду(~) - ~MyClass.
Диструктор вызываеться тогда, когда функция выходит за границы работы. Учень удобный метод для чисты памяти после масивов и 
при любых действиях для освобождения памяти.
*/