#pragma once
class Birthday
{
private:
	int Year;
	int Month;
	int Day;
public:
	Birthday() {};
	Birthday(int year, int month, int day) :Year(year), Month(month), Day(day) {};
	~Birthday() {};
	
	void Set_Birthday(int year, int month, int day);
	void Show_Birthday();
};

