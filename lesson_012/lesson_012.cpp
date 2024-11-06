//Перегрузка оператора сложения. Перегрузка операторов пример.C++ Для начинающих. Урок#85 - Видео 16.

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

	point operator +(const point& other)
	{
		point temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;
		return temp;
	}

	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}

private:
	int x;
	int y;
};
//----------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "ru");	

	point a(5, 85);
	point b(3, 32);

	point c = a + b;

	c.Print();

	return 0;
}
//----------------------------------------------------------------------------------
