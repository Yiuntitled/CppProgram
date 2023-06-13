#include "Graduate.h"
#include<iostream>
using namespace std;

int Graduate::calculate()
{
	int temp2;
	if (SHSJ < 24)
	{
		temp2 = 5;
	}
	else if(SHSJ<36)
	{
		temp2 = 4;
	}
	else if (SHSJ < 48)
	{
		temp2 = 3;
	}
	else if(SHSJ<60)
	{
		temp2= 2;
	}
	else
	{
		temp2 = 1;
	}
	int temp1 = Junior::calculate();
	int temp = 0.3*temp2+0.7*temp1;
	return temp;
}
void Graduate::Show()
{
	Junior::Show();
	cout << get_SHSJ() << endl;
}


int Graduate::get_SHSJ()
{
	// TODO: 在此处添加实现代码.
	return SHSJ;
}
