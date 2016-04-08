///////////////////////////////////////////////////////////////////////////////////////////
//Author: Brady Simmelink
//Purpors: Support utilizing an event venue, see Event.h
//3-3-16
//CS-172 Exam
//I affirm that all code given below was written solely by me, 
// Brady Simmelink, and that any help I received adhered to the rules stated for this exam. 
////////////////////////////////////////////////////////////////////////////////////////////

#include "Event.h"

//default constructor
Event::Event()
{
	time = -1;
	title = "Free";
}

//constructor for a user determined time and title
Event::Event(int newTime, std::string newTitle)
{
	time = newTime;
	title = newTitle;
}

//returns the time of the event
int Event::getTime() const
{
	return time;
}

//returns the title of an event
std::string Event::getTitle() const
{
	return title; 
}

//sets the time of an event
void Event::setTime(int t)
{
	time = t;
}

//sets the title of an event
void Event::setTitle(std::string name)
{
	title = name; 
}