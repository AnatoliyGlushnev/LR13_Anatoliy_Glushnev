﻿#include <iostream>
#include "Car.h"
#include "Lorry.h"

using namespace std;
//функция принимает объект базового класса как параметр
void f1(Car& c)
{
	c.Setmark("BMW"); cout << c;
}

//функция возвращает объект базового класса как результат

Car f2()
{
	Lorry l("Honda", 1, 2, 3);
	return l;
}

int main()

{
	Car a;
	cin >> a;
	cout << a;
	Car b("Matiz", 4, 115);
	cout << b;
	a = b;
	cout << a;
	a = f2();
	cout << a;
	Lorry c; //создать объект
	cin >> c;//ввести значения атрибутов
	cout << c;//вывести значенияатрибутов
	system("pause");
}