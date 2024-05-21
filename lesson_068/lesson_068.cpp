//std::function | Полиморфная обёртка функции | Изучение С++ для начинающих. Урок #142 - Видео №91.

#include<iostream>
#include<functional>
#include<vector>
using namespace std;


//-------------------------------------------------------------------
void Foo()
{
	cout << "Foo()" << endl;
}
//-------------------------------------------------------------------
void Bar()
{
	cout << "=============Bar()==========" << endl;
}
//-------------------------------------------------------------------
int Sum(int a, int b)
{
	return a + b;
}
//-------------------------------------------------------------------
void Foo2(int a)
{
	if (a > 10 && a < 40)
		cout << "Foo2 " << a << endl;
}
//-------------------------------------------------------------------
void Bar2(int a)
{
	if (a % 2 == 0)
		cout << "Bar2 " << a << endl;
}
//-------------------------------------------------------------------
void DoWork(vector<int> &vc, vector<function<void(int)>> funcVector)
{
	for (auto el : vc)
	{
		for (auto &fel : funcVector)
			fel(el);
	}
}
//-------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	function<void()> f,b;
	f = Foo;
	f();

	b = Bar;
	b();

	function<int(int,int)> s;
	s = Sum;
	int result = s(5,3);
	cout << result << endl;

	cout << "===============================" << endl;

	vector<int> vc = {1,51,4,10,44,98,8,12,22,29,49};

	/*Чтобы не писать повторно DoWork, мы ему приписываем function в условие. И можем теперь выбирать что ему писать.*/
	
	vector<function<void(int)>> fVector;

	fVector.emplace_back(Foo2);
	fVector.emplace_back(Bar2);

	DoWork(vc, fVector);

	/*Теперь в вывод можно добавлять или убирать функцианал для вывода, а также дописывать методы, если нужно ещё выводы.*/
	return 0;
}
//-------------------------------------------------------------------