#pragma once
#include <iostream>
#include <fstream>
#include "Peklova_class.h"
#include <vector>

class Peklova_contclass
{
private:
	vector<Peklova_class*> films;
public:
	void input_film_by_console();
	void show_films();
	void load_from_file(ifstream& infile);
	void insert_into_file(ofstream& outfile);
	void delete_films();
	~Peklova_contclass()
	{
		delete_films();
	}

};