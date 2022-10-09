#include <iostream>
#include <fstream>
#include "Peklova_class.h"

using namespace std;

void Peklova_class::input_film_by_console()
{
	cout << "Введите название фильма или сериала: ";
	cin >> name;
	cout << "Возрастное ограничение: ";
	cin >> age;

	}

void Peklova_class::show_film()
{
	cout << "Название кинокартины: " << name << endl << "Возрастное ограничение: " << age << endl;
}

void Peklova_class::insert_into_file(ofstream& outfile)
{
	outfile << name << endl << age << endl;
}

void Peklova_class::load_from_file(ifstream& infile)
{
	infile >> name >> age;
}