///////////////////////////////////////////////////////////////////////////////////////////
//Author: Brady Simmelink
//Purpors: Support utilizing an event venue
//3-3-16
//CS-172 Exam
//I affirm that all code given below was written solely by me, 
// Brady Simmelink, and that any help I received adhered to the rules stated for this exam. 
////////////////////////////////////////////////////////////////////////////////////////////

#ifndef Venue_H
#define Venue_H
#include "Event.h"

class Venue
{
private:
	//All of the events scheduled at the venue, maximum of 12
	Event scheduledEvents[12];
	//keeps track of the number of events held at the venue
	//used in the addEvent function
	int numEvents = 0;
	//checks to see if an event can be created 
	//used for the addEvent function
	bool validTime(int time);

public:
	//Allows the user to add an event
	void addEvent(int time, std::string name);
	//returns an event at the input time
	Event findEvent(int time) const;
	//returns an event with the input title
	Event findEvent(std::string name) const;
};

#endif
