#pragma once
#include "Graduate.h"
class Doctor :
	public Graduate
{
private:
	int Paper;
public:
	Doctor() {};
	Doctor(char* id, int year, int month, int day, double math, double english, double program, int shsj, int paper) :
		Graduate(id, year, month, day, math, english, program, shsj), Paper(paper) {
		set_ZHPD(calculate());
	};

	Doctor(Doctor &other) :Graduate(other), Paper(other.Paper) {};
	~Doctor() {};
	virtual int calculate();
	virtual void Show();

	int get_Paper();
};

