#pragma once
#include <afx.h>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Peklova_class :public CObject
{
protected:
	CString name;
	int age;
public:
	
	void input_film_by_console();
	void show_film();
	void insert_into_file(ofstream& outfile);
	void load_from_file(ifstream& infile);
};