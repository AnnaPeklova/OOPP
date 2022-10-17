#pragma once
#include <afx.h>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Peklova_class : public CObject
{
protected:
	CString name;
	int census;
public:
	DECLARE_SERIAL(Peklova_class);
	Peklova_class() {};
	virtual ~Peklova_class() {};
	virtual void input_film_by_console();
	virtual void show_film();
	virtual void Serialize(CArchive& ar);
};