// Предикаты с++ | Что такое предикат | Изучение С++ для начинающих. Урок #147 - Видео №97/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


//----------------------------------------------------------------------------------------
bool GreaterThanZero(int a)
{
	return a > 0;
}
//----------------------------------------------------------------------------------------
bool LessThanZero(int a)
{
	return a < 0;
}
//----------------------------------------------------------------------------------------
class Person
{
public:
	Person(string name, double score)
	{
		this->Name = name;
		this->Score = score;
	}

	bool operator()(const Person &p)
	{
		return p.Score > 180;
	}

	string Name;
	double Score;
};
//----------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	vector<Person> people 
	{
		Person("Студент-1 ",181),
		Person("Студент-2 ",30),
		Person("Студент-3 ",179),
		Person("Студент-4 ",200),
		Person("Студент-5 ",198),
		Person("Студент-6 ",181),
		Person("Студент-7 ",50),
		Person("Студент-8 ",150),
	};

	int result = count_if(people.begin(), people.end(), people.front() );

	cout << result << endl;

	return 0;
}
//----------------------------------------------------------------------------------------
/*Удобный способ решения простых задач, и для реализации функционала в рабочих программах.*/