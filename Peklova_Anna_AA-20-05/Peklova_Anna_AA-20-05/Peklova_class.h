#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Peklova_class
{
public:
	string name;
	string kinokartina;
	void input_film_by_console();
	void show_film();
	void insert_into_file(ofstream& outfile);
	void load_from_file(ifstream& infile);
};