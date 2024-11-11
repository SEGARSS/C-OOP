//Статические методы класса зачем нужны. Модификатор static. Как влияет. ООП. Для начинающих. Урок #94 - Видео 26.

#include<iostream>
#include<string>
using namespace std;

//-------------------------------------------------------------------------------------------------------
class Apple
{
public:
	Apple(int weight, string color)
	{
		this->color = color;
		this->weight = weight;
		Count++;
		id = Count;
	}

	void TekeApple()
	{
		cout << "TekeApple " << "weight = " << weight << " color = " << color;
	}

	int GetId()
	{
		return id;
	}

	static int GetCount() //Если метод статитический, то только с такими данными и может рабоать. Переменная Count - static.
	{
		return Count;
	}

	static void ChangeColor(Apple &apple, string color)
	{
		apple.color = color;
	}

private:
	int weight;
	string color;
	int id;
	static int Count;
};
//-------------------------------------------------------------------------------------------------------
int Apple::Count = 0;
//-------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "ru");

	Apple apple(150, "Red");
	Apple apple2(100, "Green");
	Apple apple3(200, "Yellow");

	//Записи равнозначны друг другу.
	apple.ChangeColor(apple, "Green"); 
	Apple::ChangeColor(apple, "Green");
	
	cout << "======================================================" << endl;
	cout << "Индификаторы присвоенные яблока." << endl;
	apple.TekeApple();
	cout << ": id - " << apple.GetId() << endl;
	apple.TekeApple();
	cout << ": id - " << apple2.GetId() << endl;
	apple.TekeApple();
	cout << ": id - " << apple3.GetId() << endl;
	cout << "======================================================" << endl;
	cout << "Записи равнозначны друг другу." << endl;
	cout << "Синтакс написания - apple3.GetCount(), Вывод: " << apple3.GetCount() << " Общее количество яблок." << endl;
	cout << "Синтакс написания - Apple::GetCount(), Вывод: " << Apple::GetCount() << " Общее количество яблок." << endl;
	cout << "======================================================" << endl;

	return 0;
}
//-------------------------------------------------------------------------------------------------------
/*
Базу индификаторов настроили, для вывода нужного, определённого сорта, и общее количество также выводим.
Также настроили инкапсуляцию, защитили данные от изминений.
*/