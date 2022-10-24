#include "pch.h"
#include "Peklova_serial.h"

using namespace std;

IMPLEMENT_SERIAL(Peklova_serial, Peklova_class, VERSIONABLE_SCHEMA | 0);

void Peklova_serial::input_film_by_console()
{
	cout << endl;
	cout << "������� ��������: ";
	string name1;
	cin >> name1;
	name = name1.c_str();
	cout << "������� ���������� �����������: ";
	cin >> census;
}

void Peklova_serial::show_film()
{
	std::string s((LPCTSTR)name);
	cout << "��������: " << name << endl << "���������� �����������: " << census << endl;
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