//Ключевое слово this в ООП. Что означает. Что это такое. Для чего нужен this указатель C++ #81 Видео - 10.

#include<iostream>
#include<string>
using namespace std;

//----------------------------------------------------------------------------------------------------------------
class point
{
public:
	point()
	{
		x = 0;
		y = 0;
		cout << this << " Constructor" << endl;

	}
	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		cout << this << " Constructor" << endl;
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
	void SetY(int newY) // Параметр с другим именем
	{
		y = newY; // this -> y = y; //Без this, переменная (у) выдаст значение (0)
	}

	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}

private:
	int x;
	int y;
};
//----------------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "ru");

	point a;
	a.SetY(5);
	a.Print();

	point b;
	b.SetX(4);
	b.Print();

	return 0;
}
//----------------------------------------------------------------------------------------------------------------


/*
#include<iostream>
#include<string>
using namespace std;

//----------------------------------------------------------------------------------------------------------------
class point
{
public:
	point()
	{
		x = 0;
		y = 0;
		cout << this << " Constructor" << endl;

	}
	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		cout << this << " Constructor" << endl;
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
	void SetY(int y)
	{
		this -> y = y; //Без this, переменная (у) выдаст значение (0)
	}

	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}

private:
	int x;
	int y;
};
//----------------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "ru");

	point a;
	a.SetY(5);
	a.Print();

	point b;
	b.SetX(4);
	b.Print();

	return 0;
}
//----------------------------------------------------------------------------------------------------------------
*/
/*
Ключевое слово this. Он по умолчанию, неявно указан в классах.
Пример его реализации, почему тут мы его вызвали.
Напишем стандартный класс ниже, где он не нужен.
class point
{
public:
	point()
	{
		x = 0;
		y = 0;
		cout << this << " Constructor" << endl;

	}
	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		cout << this << " Constructor" << endl;
	}
	void SetY(int valueY)
	{
		y = valueY;
	}
	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}

private:
	int x;
	int y;
};

тут подмечаем, что если мы вызываем такую запись

int main()
{
	setlocale(LC_ALL, "ru");

	point a;
	a.SetY(5);
	a.Print();


	return 0;
}

Мы увидем в компеляторе что игроку присвоилась 5.
Но, напишем тепероь клас point по другому.

class point
{
public:
	point()
	{
		x = 0;
		y = 0;
		cout << this << " Constructor" << endl;

	}
	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		cout << this << " Constructor" << endl;
	}

	void SetY(int y) //Вместо int valueY - int y
	{
		y = y;
	}
	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}

private:
	int x;
	int y;
};

Мы в конструкторе поинт изменили данные записи с SetY(int valueY) на SetY(int y), и при вызове

int main()
{
	setlocale(LC_ALL, "ru");

	point a;
	a.SetY(5);
	a.Print();


	return 0;
}

мы получим 0, хотя указали в переменой a.SetY(5);
Потомучто, компелятор по умолчанию прыгает на y = 0;
Чтобы это обойти, прописываем в методе SetY в его теле this.y = y;

class point
{
public:
	point()
	{
		x = 0;
		y = 0;
		cout << this << " Constructor" << endl;

	}
	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		cout << this << " Constructor" << endl;
	}
	void SetY(int y)
	{
		this.y = y;
	}
	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}
private:
	int x;
	int y;
};

И при запросе компелятора, мы увидим присвоенную 5 переменной y.
С добавление ключевого слова this он как ссылка указывает, что именно возьми даннеые для переменной именно там,
где мы его прописали в конструкторе, тобижь -
void SetY(int y)
	{
		this.y = y;
	}
*/