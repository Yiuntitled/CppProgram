#pragma once
#include "Junior.h"
#include"Birthday.h"
class Graduate :
	public Junior
{
private:
	int SHSJ;
public:
	Graduate() {};
	Graduate(char* id, int year, int month, int day, double math, double english, double program, int shsj) :
		Junior(id, year, month, day, math, english, program), SHSJ(shsj) 
	{
		set_ZHPD(calculate());
	};
	Graduate(Graduate& other) :Junior(other), SHSJ(other.SHSJ) {};
	~Graduate() {};
	virtual int calculate();
	virtual void Show();
	int get_SHSJ();
};

