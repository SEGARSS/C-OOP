// Как измерить время выполнения кода | Изучение С++ для начинающих. Урок #145 - Видео №95.

#include<iostream>
#include<thread>
using namespace std;


//-------------------------------------------------------------------------------------------------
class Timer
{
public:
	Timer()
	{
		start = chrono::high_resolution_clock::now();
	}
	~Timer()
	{
		end = chrono::high_resolution_clock::now();
		chrono::duration<float> duration = end - start;
		cout << "DURATION " << duration.count() << " s" << endl;
	}

private:
	chrono::time_point<chrono::steady_clock> start, end;
};
//-------------------------------------------------------------------------------------------------
int Sum(int a, int b)
{
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "ID поток = " << this_thread::get_id() << " =================\tSum STARTED \t=================" << endl;

	this_thread::sleep_for(chrono::milliseconds(5000));
	cout << "ID поток = " << this_thread::get_id() << " =================\tSum STOPPED \t=================" << endl;

	return a + b;
}
//-------------------------------------------------------------------------------------------------
int main()
{
	Timer st;

	setlocale(LC_ALL,"ru");

	int result;

	thread t([&result]() 
	{ 
		result = Sum(2, 5);
	});
	
	for (size_t i = 1; i <= 10; i++)
	{
		cout << "ID потокa = " << this_thread::get_id() << "\tmain works\t" << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	t.join();
	cout << "Sum Result = " << result << endl;

	return 0;
}
//-------------------------------------------------------------------------------------------------

/*Реализация как посмотреть сколько времени тратит та или инная операция, или участок кода.*/