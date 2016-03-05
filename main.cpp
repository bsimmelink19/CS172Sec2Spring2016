///////////////////////////////////////////////////////////////////////////////////////////
//Author: Brady Simmelink
//Purpors: Support utilizing an event venue, see Event.h, see Venue.h
//3-3-16
//CS-172 Exam
//I affirm that all code given below was written solely by me, 
// Brady Simmelink, and that any help I received adhered to the rules stated for this exam. 
////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Event.h"
#include "Venue.h"
using namespace std;

int main()
{
	//Creates a venue to be utilized
	Venue theVenue;
	//Creates an event in the venue at 10 called wedding, displays "Event scheduled"
	theVenue.addEvent(10, "Wedding"); 
	//Creates an event in the venue at 8 called business meeting, displays "Event scheduled"
	theVenue.addEvent(8, "Business Meeting"); 
	//Will not create this event, because the time is already taken, displays error message
	theVenue.addEvent(10, "Poker Night"); 

	//will find and display the event at 10, wedding
	cout << theVenue.findEvent(10).getTitle() << endl; 
	//will find and display the event called business meeting, 8
	cout << theVenue.findEvent("Business Meeting").getTime() << endl;
	//will return -1, because the event poker night does not exist
	cout << theVenue.findEvent("Poker Night").getTime() << endl;
	//will return Free, because there is no event at 6
	cout << theVenue.findEvent(6).getTitle() << endl;

	return 0;
}