#include <iostream>
#include <fstream>
#include "Peklova_contclass.h"

using namespace std;

void menu()
{
	cout << "1.Ввести название фильма/сериала" << endl;
	cout << "2.Вывести список на экран" << endl;
	cout << "3.Cчитать список из файла" << endl;
	cout << "4.Вывести список в файл" << endl;
	cout << "5.Удалить список" << endl;
	cout << "6.Выход" << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	Peklova_contclass class_films;
	while (true)
	{
		menu();
		int command;
		cout << ": ";
		cin >> command;
		switch (command)
		{
		case 1:
		{
			class_films.input_film_by_console();
			break ;
		}
		case 2:
		{
			class_films.show_films();
			system("Pause");
			break;
		}
		case 3:
		{
			ifstream fromfile("file.txt", ios::binary);
			if (fromfile.is_open())
			{
				class_films.load_from_file(fromfile);
				fromfile.close();
			}
			else cout << "Файл не удалось открыть" << endl;
			system("pause");
			break;
		}
		case 4:
		{
			ofstream tofile("file.txt", ios::binary);
			if (tofile.is_open())
			{
				class_films.insert_into_file(tofile);
				tofile.close();
			}
			else cout << "Файл не удалось открыть" << endl;
			system("pause");
			break;
		}
		case 5:
		{
			class_films.delete_films();
			system("pause");
			break;
		}
		case 6:
		{
			return 0;
		}
		}
	}

}