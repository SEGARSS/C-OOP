//Абстрактный класс с++ пример. Чисто виртуальная функция. virtual. override. Полиморфизм ООП C++ #104 - Видео №37.

#include<iostream>
#include<string>
using namespace std;

//-------------------------------------------------------------------------------
class Weapon //Абстрактный класс (оружие). Потомучто содали виртуальный метод и присовоели ему 0.
{
public:
	virtual void Shoot() = 0;

	void Foo()
	{
		cout << "Foo()" << endl;
	}
};
//-------------------------------------------------------------------------------
class Gun : public Weapon
{
public:
	void Shoot() override
	{
		cout << "BANG!" << endl;
	}
};
//-------------------------------------------------------------------------------
class SubmachineGun :public Gun
{
public:
	void Shoot() override
	{
		cout << "BANG!" << "BANG!" << "BANG!" << endl;
	}
};
//-------------------------------------------------------------------------------
class Bazuka :public Weapon
{
public:
	void Shoot() override
	{
		cout << "BADABUM!!!" << endl;
	}
};
//-------------------------------------------------------------------------------
class Knife :public Weapon
{
public:
	void Shoot() override
	{
		cout << "CHIK CHIK" << endl; // Колим нажом
	}
};
//-------------------------------------------------------------------------------
class Player
{
public:
	void Shoot(Weapon *weapon)
	{
		weapon->Shoot();
	}
};
//-------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	Gun gun;             //Пистолет
	SubmachineGun mach; //Пулимёт
	Bazuka baz;        //Базука
	Knife chil;       //Ножь

	Player player; //Игрок

	player.Shoot(&baz);
	player.Shoot(&gun);
	player.Shoot(&mach);
	player.Shoot(&chil);

	chil.Foo();

	return 0;
}
//-------------------------------------------------------------------------------
/*
Пример полиморфизма, когда все классы использую один метод одну функцию Shoot благодаря наследованию, вируальной функции Shoot
и абстрактному класс Weapon.
Упрощает написание кода, его реализацию и исправление.
Напрямую пользоваться функцией void Foo() в классе Weapon мы не можем. 
Но любой класс наследник, сможет вызвать и использовать данную функцию у класса Weapon.
*/