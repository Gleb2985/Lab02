#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(0, "rus");
	char c;

	while (1)
	{
		cout << "Меню Задание 2. Файловые и строковые потоки"
			<< "\n1. Cчитать текст из файла и вывести на экран двузначные числа"
			<< "\n0.Выход\n-> ";
		cin >> c;

		switch (c)
		{
		case '1': {

			ifstream file("input.txt");
			string str;
			char* p = NULL;
			while (getline(file, str))
			{
				int pos = 0;
				string token;
				string delimiter = " ";
				while ((pos = str.find(delimiter)) != string::npos) {
					token = str.substr(0, pos);

					if (token.size() == 2) {
						cout << token << endl;
					}
					str.erase(0, pos + delimiter.length());
				}
				if (str.size() == 2) {
					cout << str << endl;
				}
			}
			file.close();

			break; }
		case '0':			return 0;
		}
	}
}

/*2. Файловые и строковые потоки
С использованием файловых и строковых потоков написать программу,
которая считывает текст из файла и выводит на экран только строки, не
содержащие двузначные числа.*/
