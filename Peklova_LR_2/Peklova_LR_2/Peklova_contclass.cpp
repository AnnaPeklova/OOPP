#include "Peklova_contclass.h"
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

void Peklova_contclass::input_film_by_console()
{
	Peklova_class* film = new Peklova_class;
	film->input_film_by_console();
	films.push_back(film);
}


void Peklova_contclass::show_films()
{
	if (films.size() > 0)
	{
		for (auto iter = films.begin(); iter != films.end(); iter++)
			(*iter)->show_film();
	}
	else cout << "Вы не ввели ни одного фильма!" << endl;
}

void Peklova_contclass::delete_films()
{
	if (films.size() > 0)
	{
		for (auto iter = films.begin(); iter != films.end(); iter++)
			delete* iter;
		films.clear();
	}
	else cout << "Вы не ввели ни одного фильма!" << endl;
}

void Peklova_contclass::insert_into_file(ofstream& outfile)
{
	outfile << films.size() << endl;
	for (auto iter = films.begin(); iter != films.end(); iter++)
		(*iter)->insert_into_file(outfile);
}


void Peklova_contclass::load_from_file(ifstream& infile)
{

	int films_count;
	infile >> films_count;
	for (int i = 0; i != films_count; i++)
	{
		Peklova_class* film = new Peklova_class;
		film->load_from_file(infile);
		films.push_back(film);
	}
}