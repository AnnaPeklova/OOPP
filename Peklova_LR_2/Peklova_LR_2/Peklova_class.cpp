#include <iostream>
#include <fstream>
#include "Peklova_class.h"

using namespace std;

void Peklova_class::input_film_by_console()
{
	cout << "������� �������� ������ ��� �������: ";
	cin >> name;
	cout << "���������� �����������: ";
	cin >> age;

	}

void Peklova_class::show_film()
{
	cout << "�������� �����������: " << name << endl << "���������� �����������: " << age << endl;
}

void Peklova_class::insert_into_file(ofstream& outfile)
{
	outfile << name << endl << age << endl;
}

void Peklova_class::load_from_file(ifstream& infile)
{
	infile >> name >> age;
}