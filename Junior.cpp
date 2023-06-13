#include "Junior.h"
#include<iostream>
using namespace std;

int Junior::calculate()
{
	int temp;
	double average = (Math + English + Program) / 3;
	if (average < 60)
	{
		temp = 5;
	}
	else if (average < 70)
	{
		temp = 4;
	}
	else if (average < 80)
	{
		temp = 3;
	}
	else if (average < 90)
	{
		temp = 2;
	}
	else
	{
		temp = 1;
	}

		
	return temp;
}


void Junior::Show()
{   
	cout << "ID:" << get_ID() << endl;
	cout << "English:" << get_English() << endl;
	cout << "Math:" << get_Math() << endl;
	cout << "Program:" << get_Program() << endl;
	BT.Show_Birthday();
	cout << "ZHPD:" << get_ZHPD() << endl;
}


char* Junior::get_ID()
{
	return ID;
}
double Junior::get_Math()
{
	return Math;
}
double Junior::get_English()
{
	return English;
}
double Junior::get_Program()
{
	return Program;
}


int Junior::get_ZHPD()
{
	// TODO: 在此处添加实现代码.
	return ZHPD;
}


void Junior::set_ZHPD(int input)
{
	ZHPD = input;
}
