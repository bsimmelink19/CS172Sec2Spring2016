//////////////////////////////////////
//Brady Simmelink
//CS-172-2
//Homework 6, new account class
//see Date.h
//4-22-16
//////////////////////////////////////

#include "Date.h"
#include <ctime>

//sets the date to today
Date::Date()
{
	setDate(time(0));
}

//sets the date to a user specified time (using seconds passed since January 1 1970)
Date::Date(int timePassed)
{
	setDate(timePassed);
}

//sets date using user input year, month and day
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

//returns the year
int Date::getYear() const
{
	return year;
}

//returns the month
int Date::getMonth() const
{
	return month;
}

//returns the day
int Date::getDay() const
{
	return day;
}

//checks if the current year is a leap year
//used for setting the date using time elapsed
bool Date::leapYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
	{
		return true;
	}
	else return false;
}

//sets the date according to time passed since january 1 1970
void Date::setDate(int elapseTime)
{

	int seconds = elapseTime;
	//calculates minutes since january 1, 1970
	int minutes = seconds / 60;
	//calculates hours since january 1, 1970
	int hours = minutes / 60;
	//calculates days since january 1, 1970
	day = hours / 24;

	//sets the year to the starting point
	year = 1970;

	while (day >= 365)
	{
		//if the current year is a leap year, subtracts 366 days and increments year
		if (leapYear(year))
		{
			day = day - 366;
			year++;
		}
		//if the current year is not a leap year, subtracts 365 days and increments year
		if (!leapYear(year))
		{
			day = day - 365;
			year++;
		}
	}

	//sets month to the starting point
	month = 1;


	while (day >= daysInMonth(month, year))
	{
		//subtracts the days in the current month from days and increments month
		day = day - daysInMonth(month, year);
		month++;
	}


}
int Date::daysInMonth(int month, int year)
{
	//returns 31 if the month is january, march, may, july, august, october, or decemeber
	if (month == 1 || month == 3 || month == 5 || month == 7 ||
		month == 8 || month == 10 || month == 12)
		return 31;

	//returns 30 if the month is april, june, september, or november
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;

	//if the month is january returns 29 for a leap year and 28 for a regular year
	if (month == 2)
	{
		if (leapYear(year))
			return 29;
		if (!leapYear(year))
			return 28;
	}

	return 0;
}