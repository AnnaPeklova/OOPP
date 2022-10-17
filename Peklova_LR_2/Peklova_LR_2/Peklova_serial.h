#pragma once
#include "Peklova_class.h"

class Peklova_serial : public Peklova_class
{
private:
	CString name;
	int census;
public:
	DECLARE_SERIAL(Peklova_serial);
	Peklova_serial() {};
	~Peklova_serial() {};
	void input_film_by_console();
	void show_film();
	virtual void Serialize(CArchive& ar);
};