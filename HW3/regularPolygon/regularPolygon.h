/////////////////////////////////////////////
//Brady Simmelink
//Homework 3, Problem 10.13 regular polygon
//3-15-16
/////////////////////////////////////////////

#ifndef regularPolygon_H_
#define regularPolygon_H_

class regularPolygon
{
private:
	int n; //defines the number of sides in the polygon
	double side; //stores the length of the side
	double x; //defines the x-coordinate of the center of the polygon
	double y; //defines the y-coordinate of the center of the polygon

public:
	regularPolygon(); //no argument constructor. n = 3; side = 1; x = 0; y = 0;
	regularPolygon(int sides, double side); //constructor, user specified number of sides and length of sides; x = 0, y = 0
	regularPolygon(int sides, double side, double x, double y);//constructor, user specified number of sides, length, x and y coordinates

	int getN() const; //returns the number of sides
	double getSides() const; // returns side length
	double getX() const; //returns x coordinate
	double getY() const; //returns y coordinate
	void setN(int newN); //sets the number of sides
	void setSide(double newSide); //sets the side length
	void setX(double newX); //sets the x coordinate
	void setY(double newY); //sets the y coordinate

	double getPerimeter() const; //returns the perimeter of the polygon
	double getArea() const; //returns the area of the polygon





};

#endif
