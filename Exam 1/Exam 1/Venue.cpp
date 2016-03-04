///////////////////////////////////////////////////////////////////////////////////////////
//Author: Brady Simmelink
//Purpors: Support utilizing an event venue, see Venue.h
//3-3-16
//CS-172 Exam
//I affirm that all code given below was written solely by me, 
// Brady Simmelink, and that any help I received adhered to the rules stated for this exam. 
////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Venue.h"

//checks if an input time has already been used, if it has it returns false, if not returns true
bool Venue::validTime(int time)
{
	//this loop makes sure the function checks all members of the array, starting from 0
	for (int i = 0; i < 12; i++)
	{
		//checks if the time input is equal to any previously stored times, if so returns false
		if (scheduledEvents[i].getTime() == time)
		{
			return false;
		}
	}
}

//Allows the user to add an event
void Venue::addEvent(int time, std::string name)
{
	//Checks if the time has not been used, if not the event is stored and "Event Scheduled" is displayed
	if (validTime(time))
	{
		scheduledEvents[numEvents].setTime(time);
		scheduledEvents[numEvents].setTitle(name);
		std::cout << "Event Scheduled" << std::endl;
	}
	//if the time has been taken, displays an error message
	else std::cout << "Sorry, that event will not work" << std::endl;

	//increments the number of events stored, so the next event will not erase the previous
	numEvents++;
}

//Allows the user to find an event by time
Event Venue::findEvent(int time) const
{
	//This loop makes sure the function checks the entire array
	for (int i = 0; i < 12; i++)
	{
		//checks if the input time is equal to any of the times stored for events, 
		//if it is it returns the event with that time
		if (scheduledEvents[i].getTime() == time)
		{
			return scheduledEvents[i];
		}
	}
	//If no event is found, returns an empty event
	Event noEvent;
	return noEvent;
}

//Allows the user to search for an event by name 
Event Venue::findEvent(std::string name) const
{
	//This loop makes sure the function checks the entire array
	for (int i = 0; i < 12; i++)
	{
		//Checks if the input title is the same as any stored title, if so it returns the event with that title
		if (scheduledEvents[i].getTitle() == name)
		{
			return scheduledEvents[i];
		}
	}
	//if no event is found, it returns an empty event 
	Event noEvent;
	return noEvent;
}


