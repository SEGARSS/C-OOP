//id generator. Генератор уникальных идентификаторов с использованием static переменной Начинающим #93 - Видео №25.

#include<iostream>
#include<string>
using namespace std;

//-------------------------------------------------------------------------------------------------------------------
class Apple
{
public:
	Apple(int weight, string color)
	{
		this->color = color;
		this->weight = weight;
		Count++;
		id = Count; //Присваивание индификатора.
	}

	void TekeApple()
	{
		cout << "TekeApple " << "weight = " << weight << " color = " << color;
	}

	int GetId()
	{
		return id;
	}

	static int Count;

private:
	int weight;
	int id;
	string color;
};
//-------------------------------------------------------------------------------------------------------------------
int Apple::Count = 0;
//-------------------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "ru");

	Apple apple(150, "Red");
	Apple apple2(100, "Green");
	Apple apple3(200, "Yellow");

	apple.TekeApple();
	cout << ": id - " << apple.GetId() << endl;

	apple2.TekeApple();
	cout << ": id - " << apple2.GetId() << endl;

	apple3.TekeApple();
	cout << ": id - " << apple3.GetId() << endl;

	return 0;
}
//-------------------------------------------------------------------------------------------------------------------
/*
Приминение индификатора. Чтобы в базе данных, небыло повторений.
К примеру одинаковые ФИО, и чтобы их не перепутать.
Поэтому сделали индивидуальный индификатор каждому сорту яблока.
в языке SQL примерные схемы используются.
По индификатору, мы уже понимаем, с кем примерно мы хотим рабоать и посмотреть.
*/