#include "pch.h"
#include "Peklova_serial.h"

using namespace std;

IMPLEMENT_SERIAL(Peklova_serial, Peklova_class, VERSIONABLE_SCHEMA | 0);

void Peklova_serial::input_film_by_console()
{
	cout << endl;
	Peklova_class::input_film_by_console();
	cout << "Введите название: ";
	std::string name1;
	cin >> name1;
	name = name1.c_str();
	cout << "Введите возрастное ограничение: ";
	cin >> census;
}

void Peklova_serial::show_film()
{
	Peklova_class::show_film();
	cout << "Название: " << name << endl << "Возрастное ограничение: " << census << endl;
}

void Peklova_serial::Serialize(CArchive& ar)
{
	Peklova_class::Serialize(ar);
	if (ar.IsStoring())
	{
		ar << name << census;
	}
	else
	{
		ar >> name >> census;
	}
}