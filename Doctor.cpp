#include "Doctor.h"
#include<iostream>
using namespace std;

int Doctor::get_Paper()
{
	// TODO: 在此处添加实现代码.
	return Paper;
}
int Doctor::calculate()
{
	int paper = get_Paper();
	if (paper < 3)
	{
		return 5;
	}
	else if (paper < 4)
	{
		return 4;
	}
	else if (paper < 5)
	{
		return 3;
	}
	else if (paper < 6)
	{
		return 2;
	}
	else
	{
		return 1;
	}
}
void Doctor::Show()
{
	Graduate::Show();
	cout << get_Paper()<< endl;
}

