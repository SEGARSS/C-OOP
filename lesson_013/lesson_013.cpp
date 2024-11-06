//Перегрузка инкремента и декремента. Постфиксного и префиксного. ООП перегрузка операторов. C++ #86 - Видео 17.

#include<iostream>
#include<string>
using namespace std;


//----------------------------------------------------------------------------------
class point
{
public:
	point()
	{
		x = 0;
		y = 0;
	}

	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}

	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}

	point &operator ++(int value) // Инкремент
	{
		point temp(*this);
		this -> x++;
		this -> y++;
		return temp;
	}
	point &operator ++ ()//Запись реализации другая, но вывод тотже.
	{
		this -> x++;
		this -> y += 1;
		return *this;
	}

	point &operator --(int value) // Дикремент
	{
		point temp(*this);
		this -> x--;
		this -> y--;
		return temp;
	}
	point &operator -- ()//Запись реализации другая, но вывод тотже.
	{
		this ->x -= 1;
		this ->y --;
		return *this;
	}

private:
	int x;
	int y;
};
//----------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "ru");

	point a(1, 1);
	point b = ++a;
	a.Print();

	point c(1, 1);
	point v = --c;
	c.Print();

	return 0;
}
//----------------------------------------------------------------------------------