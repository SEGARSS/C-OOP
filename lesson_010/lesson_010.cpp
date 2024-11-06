//Перегрузка операторов пример. ООП. Перегрузка оператора присваивания. C++ Для начинающих. Урок#83 - Видео 12.

#include<iostream>
#include<string>
using namespace std;

//---------------------------------------------------------------------------------------------------------------
class MyClass
{
public:
	~MyClass()
	{
		cout << "Вызвался деструктор " << this << endl;
		delete[] data; 
	}

	MyClass(int size)
	{
		this->size = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "Вызвался конструктор " << this << endl;
	}

	MyClass(const MyClass& other)
	{
		this->size = other.size;

		this->data = new int[other.size];

		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << "Вызвался конструктор копирования " << this << endl;
	}

	MyClass &operator = (const MyClass &other)
	{
		cout << "Вызвался оператор = " << this << endl;

		this->size = other.size;

		if (this->data != nullptr)
		{
			delete[] this->data;
		}

		this->data = new int[other.size];

		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}

		return *this;
		
	}

	int *data;

private:
	int size;
};
//---------------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "ru");

	MyClass a(10); 

	MyClass b(2);

	MyClass c(5);

	c = a = b;  

	return 0;
}
//---------------------------------------------------------------------------------------------------------------
