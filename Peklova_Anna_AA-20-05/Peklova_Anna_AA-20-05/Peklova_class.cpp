#include <iostream>
#include <fstream>
#include "Peklova_class.h"

using namespace std;

void Peklova_class::input_film_by_console()
{
	cout << "Введите название фильма или сериала:	";
	cin >> name;
	cout << "Введите вид кинокартины:   ";
	cin >> kinokartina;
	}

void Peklova_class::show_film()
{
	cout << "Название кинокартины:   " << name << endl << "Вид кинокартины:   " << kinokartina << endl;
}

void Peklova_class::insert_into_file(ofstream& outfile)
{
	outfile << name << endl << kinokartina << endl;
}

void Peklova_class::load_from_file(ifstream& infile)
{
	infile >> name >> kinokartina;
}