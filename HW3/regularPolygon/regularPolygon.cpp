/////////////////////////////////////////////
//Brady Simmelink
//Homework 3, Problem 10.13 regular polygon
//see regularPolygon.h 
//3-15-16
/////////////////////////////////////////////


#include "regularPolygon.h"
#include <cmath>

//No argument constructor
regularPolygon::regularPolygon()
{
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}

//constructor, user specified number of sides and length
regularPolygon::regularPolygon(int newN, double newLength)
{
	n = newN;
	side = newLength;
}

//constructor, user specified number of sides, length, x and y coordinates
regularPolygon::regularPolygon(int newN, double newLength, double newX, double newY)
{
	n = newN;
	side = newLength;
	x = newX;
	y = newY;
}


//returns number of sides
int regularPolygon::getN() const
{
	return n;
}

//returns length of sides
double regularPolygon::getSides() const
{
	return side;
}

//reutrns x coordinate
double regularPolygon::getX() const
{
	return x;
}

//returns y coordinate
double regularPolygon::getY() const
{
	return y;
}

//changes number of sides
void regularPolygon::setN(int newN)
{
	n = newN;
}

//changes length of sides
void regularPolygon::setSide(double newSide)
{
	side = newSide;
}

//changes the x coordinate
void regularPolygon::setX(double newX)
{
	x = newX;
}

//changes the y coordinate
void regularPolygon::setY(double newY)
{
	y = newY;
}

//returns the perimeter
double regularPolygon::getPerimeter() const
{
	return n * side;
}

//returns the area
double regularPolygon::getArea() const
{
	return ((n * pow(side, 2)) / (4 * tan(3.14159 / n)));
}