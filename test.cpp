#include<iostream>
using namespace std;
#include<string>
#include"Junior.h"
#include"Graduate.h"
#include"Doctor.h"
bool compare(char* object, char* current);
void search(Junior JN[],int n,char* object)throw(string);
int main()
{
	char id1[] = "12345";
	char id2[] = "1234";
	char id3[] = "123";
	char id4[] = "12";
	char id5[] = "1";
	Junior JN[5] = { Junior(id1,2001,11,12,99,88,77),Graduate(id2,1993,2,23,69,88,77,1),
		Doctor(id3,2004,12,3,99,88,77,1,1),Junior(id4,2000,6,6,66,66,77),Graduate(id5,1997,3,22,88,88,88,5) };

	cout << "请输入要查找的学号" << endl;
	char search_ID[10];
	cin >> search_ID;

	search(JN, 5, search_ID);
	return 0;
}
bool compare(char* object, char* current)
{
	int i = 0;
	while (object[i]!='\0'&&current[i]!='\0')
	{
		if (object[i] != current[i])
		{
			return 0;
		}
		i++;
	}
	if (strlen(object) == strlen(current))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void search(Junior JN[],int n,char* object)
{
	Junior* pjunior;
	try {
		pjunior = &JN[0];
		for (int i = 0; i < n; i++)
		{
			if (compare(object, pjunior->get_ID()))
			{
				cout << "该学号对应的信息是" << endl;
				pjunior->Show();
				break;
			}
			pjunior++;
		}
		throw string("没有找到匹配字符串");
	}
	catch (string e)
	{
		cout << "错误:" << e << endl;
	}
}