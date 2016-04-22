//////////////////////////////////////
//Brady Simmelink
//CS-172-2
//Homework 6, new account class
//see Date.cpp
//4-22-16
//////////////////////////////////////

#ifndef _DATE_
#define _DATE_

class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date();
	Date(int timePassed);
	Date(int year, int month, int day);
	int getYear() const;
	int getMonth() const;
	int getDay() const;
	void setDate(int elapseTime);
	bool leapYear(int year);
	int daysInMonth(int month, int year);
};

#endif

