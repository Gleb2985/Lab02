#include <iostream>
#include "ROUTEKeeper.h"
using namespace std;

int main()
{
	setlocale(0, "rus");

	ROUTEKeeper routeKeeper;
	int c;

	while (1)
	{
		cout << "Меню Задание 1. Стандартные потоки"
			<< "\n1. Добавить маршрут"
			<< "\n2. Введите номер маршрута, информация о котором вас интересует"
			<< "\n0.Выход\n-> ";
		cin >> c;

		switch (c)
		{
		case 1: {
			cout << "Введите начальный пункт, конечный пункт, номер маршрута\n";
			routeKeeper.addROUTE();
			break; }
		case 2: {
			routeKeeper.dataProcessing();
			break; }
		case 0:			return 0;
		}
	}

}

/*1. Стандартные потоки
Определить класс с именем ROUTE, содержащий следующие поля :
● название начального пункта маршрута;
● название конечного пункта маршрута;
● номер маршрута.
Определить методы доступа к этим полям и перегруженные операции
извлечения и вставки для объектов типа ROUTE.
Написать программу, выполняющую следующие действия :
● ввод с клавиатуры данных в массив, состоящий из восьми объектов
типа ROUTE; записи должны быть упорядочены по номерам
маршрутов;
● вывод на экран информации о маршрутах, которые начинаются или
кончаются в пункте, название которого введено с клавиатуры;
● если таких маршрутов нет, выдать на дисплей соответствующее
сообщение.*/