#include "pch.h"
#include "afxwin.h"
#include "Peklova_class.h"

using namespace std;

IMPLEMENT_SERIAL(Peklova_class, CObject, 0);

void Peklova_class::input_film_by_console()
{
	cout << "Введите название: ";
	string name1;
	cin >> name1;
	name = name1.c_str();
	cout << "Введите возрастное ограничение: ";
	cin >> census;
}

void Peklova_class::show_film()
{
	cout << "Название: " << name << endl << "Возрастное ограничение: " << census << endl;
}

void Peklova_class::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		ar << name << census;
	}
	else
	{
		ar >> name >> census;
	}
}