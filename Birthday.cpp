#include "Birthday.h"
#include<iostream>
using namespace std;

void Birthday::Set_Birthday(int year,int month,int day)
{
	// TODO: 在此处添加实现代码.
	Year = year;
	Month = month;
	Day = day;
}


void Birthday::Show_Birthday()
{
	// TODO: 在此处添加实现代码.
	cout << Year << "/" << Month << "/" << Day << endl;
}
