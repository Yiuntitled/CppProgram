#include "Birthday.h"
#include<iostream>
using namespace std;

void Birthday::Set_Birthday(int year,int month,int day)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	Year = year;
	Month = month;
	Day = day;
}


void Birthday::Show_Birthday()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	cout << Year << "/" << Month << "/" << Day << endl;
}
