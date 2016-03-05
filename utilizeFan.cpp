#include<iostream>
#include "fan.h"
using namespace std;

int main()
{
	//creates two variables of the fan type
	fan fan1;
	fan fan2;

	//changes the speed, on/off and radius of fan1
	fan1.speed = 3;
	fan1.on = true;
	fan1.radius = 10;

	//sets fan2's speed
	fan2.speed = 2;

	//displays properties of fan1
	cout << "Fan 1 has speed " << fan1.speed << endl;
	cout << "Fan 1 on or off: " << fan1.on << endl;
	cout << "Fan 1 radius: " << fan1.radius << endl;

	cout << endl; //to seperate fan1 and fan2

	//displays properties of fan2
	cout << "Fan 2 has speed " << fan2.speed << endl;
	cout << "Fan 2 on or off: " << fan2.on << endl;
	cout << "Fan 2 radius: " << fan2.radius << endl;

	return 0; 
}