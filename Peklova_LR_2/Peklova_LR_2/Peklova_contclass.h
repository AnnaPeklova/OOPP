#pragma once
#include "Peklova_class.h"

class Peklova_contclass
{
private:
	vector<shared_ptr<Peklova_class>> films;
public:
	CString inputFile;

	void input_films_by_console();
	void show_films();
	void load_from_file(CString file);
	void insert_into_file(CString file);
	void delete_films();
	~Peklova_contclass()
	{
		delete_films();
	}
};