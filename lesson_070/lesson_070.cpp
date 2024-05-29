// Захват контекста лямбдой | Лямбда функции | Лямбда-выражения | Анонимные функции | Урок #144 - Видео №94.

#include<iostream>
using namespace std;


//--------------------------------------------------------------------------------------------
class MyClass
{
public:
	int m = 11;void Msg()
	{
		cout << "msg" << endl;
	}

	void Lampda()
	{
		auto r = [this]()
		{
			this->Msg();
		};
		r();
	}
};

//--------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	int a = 55;
	int b = 78;
	int c = 36;
	int s = 34;
	int n = 28;
	int q = 85;

	cout << "НЕ можем внести изминения в переменную (а) и (b)" << endl;
	auto f = [a, b]()
	{
		cout << a << endl;
		cout << b << endl;
	};
	f();

	cout << "Можем внести изминения в переменную (а) и (b)" << endl;
	auto g = [&a, &b]()
	{
		a = 1313;
		b = 4532;
		cout << a << endl;
		cout << b << endl;
	};
	g();

	cout << "Переменную (а) можем менять, а переменную (c) нет." << endl;
	auto y = [&a, c]()
	{
		a = 1313;
		cout << a << endl;
		cout << c << endl;
	};
	y();

	cout << "Считать все данные без перечисления переменных(s,n,q)" << endl;
	auto v = [=]()
	{
		cout << s << endl;
		cout << n << endl;
		cout << q << endl;
	};
	v();

	cout << "Сразу можем внести изминения в переменные (s,n,q)" << endl;
	auto l = [&]()
	{
		s = 321;
		n = 456;
		q = 963;
		cout << s << endl;
		cout << n << endl;
		cout << q << endl;
	};
	l();

	cout << "Захват класса" << endl;
	MyClass m;
	m.Lampda();

	cout << "Указывает что мы должнеы возвращать(какой конкретно тип)" << endl;
	auto j = []()->int
	{
		return 133;
	};
	auto result = j();
	cout << result << endl;

	return 0;
}
//--------------------------------------------------------------------------------------------