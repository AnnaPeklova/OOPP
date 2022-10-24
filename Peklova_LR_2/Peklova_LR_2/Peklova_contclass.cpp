#include "pch.h"
#include "Peklova_contclass.h"
#include "Peklova_serial.h"
#include <iostream>

using namespace std;

void Peklova_contclass::input_films_by_console()
{
	cout << "0 - добавить фильм; 1 - добавить сериал ";
	int film_selection;
	cin >> film_selection;
	shared_ptr<Peklova_class> film;
	if (!film_selection)
		film = make_shared<Peklova_class>();
	else
		film = make_shared<Peklova_serial>();
	film->input_film_by_console();
	films.push_back(film);
}


void Peklova_contclass::show_films()
{
	if (films.size() > 0)
	{
		for (auto& film : films)
			film->show_film();
	}
	else cout << "Вы не ввели ни одного фильма!" << endl;
}

void Peklova_contclass::delete_films()
{
	if (films.size() > 0)
	{
		films.clear();
	}
	else cout << "Вы не ввели ни одного фильма!" << endl;
}

void Peklova_contclass::insert_into_file(CString file)
{
	CFile f(file, CFile::modeCreate | CFile::modeWrite);
	CArchive ar(&f, CArchive::store);
	ar << films.size();
	for (auto film : films)
	{
		ar << film.get();
	}
}


void Peklova_contclass::load_from_file(CString file)
{
	CFile f(file, CFile::modeRead);
	CArchive ar(&f, CArchive::load);
	int hotels_count;
	ar >> hotels_count;
	for (int i = 0; i < hotels_count; ++i)
	{
		Peklova_class* ptr;
		ar >> ptr;
		shared_ptr<Peklova_class> film(ptr);
		films.push_back(film);
	}

}