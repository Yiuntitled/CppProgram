#pragma once
#include"Birthday.h"
#include<string>
class Junior
{
private:
	char* ID;
	Birthday BT;
	double ZHPD;
	double Math;
	double English;
	double Program;
public:
	Junior() {};
	Junior(char* id,int year,int month,int day,double math,double english,double program):BT(year,month,day),Math(math),
		English(english), Program(program)
	{
		int len = strlen(id);
		ID = new char[len + 1];
		strcpy(ID, id);
		ZHPD = calculate();
	}
	Junior(const Junior& other) : BT(other.BT), ZHPD(other.ZHPD), Math(other.Math), English(other.English), Program(other.Program) {
		int len = strlen(other.ID);
		ID = new char[len + 1];
		strcpy(ID, other.ID);
	}
	~Junior()
	{
		delete[]ID;
	}

    virtual	int calculate();
    virtual void Show();
    
	char* get_ID();
    double get_Math();
    double get_English();
    double get_Program();
	int get_ZHPD();
	void set_ZHPD(int input);
};

