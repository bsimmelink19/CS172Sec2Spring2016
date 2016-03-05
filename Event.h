///////////////////////////////////////////////////////////////////////////////////////////
//Author: Brady Simmelink
//Purpors: Support utilizing an event venue
//3-3-16
//CS-172 Exam
//I affirm that all code given below was written solely by me, 
// Brady Simmelink, and that any help I received adhered to the rules stated for this exam. 
////////////////////////////////////////////////////////////////////////////////////////////

#ifndef Event_H
#define Event_H
#include <string>

class Event 
{
private: 
	//The time the event is at
	int time;
	//The name of the event
	std::string title;

public: 
	//default constructor, time == -1, title == free
	Event();
	//creates an event with user input for time and title
	Event(int, std::string);
	//Returns the time of the event
	int getTime() const;
	//returns the title of the event
	std::string getTitle() const;
	//sets the time of an event
	void setTime(int t);
	//sets the title of an event
	void setTitle(std::string name);

};

#endif 
