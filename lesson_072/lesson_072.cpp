//Функторы в с++ | Что такое функтор | Изучение С++ для начинающих. Урок #146 - Видео №96.

#include<iostream>
using namespace std;


//-------------------------------------------------------
class MyFunctor
{
public:
	int operator ()(int a, int b)
	{
		cout << "Я функтор " << endl;
		return a + b;
	}
private:
};
//-------------------------------------------------------
class EvenFunctor
{
public:
	void operator()(int value)
	{
		if (value % 2 == 0)
		{
			evenSum += value;
			evenCount++;
		}
	}

	void ShowEvenSum()
	{
		cout << "сумма чётных чисел = " << evenSum << endl;
	}

	void ShowEvenCount()
	{
		cout << "количество чётных чисел = "  << evenCount << endl;
	}

private:
	int evenSum = 0;
	int evenCount = 0;
};
//-------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	int arr[] = {1,2,55,99,44,3};

	EvenFunctor ef;

	for (auto element : arr)
	{
		ef(element);
	}

	ef.ShowEvenCount();
	ef.ShowEvenSum();

	return 0;
}
//-------------------------------------------------------