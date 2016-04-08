/////////////////////////////////////////
//Brady Simmelin72
//CS-16
//Homewerk 5 EX05_01 Rectanlge Class, see Rectangle2D.cpp
//3-31-16
//////////////////////////////////////////


#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H

class rectangle
{
private:
	//the x coordinate of the center
	double x;
	//the y coordinate of the center
	double y;

	double width;
	double height;

public:
	//default constructor, x = 0, y = 0, width = 1, height = 1
	rectangle();
	//constructor with user specified x,y,width, and height 
	rectangle(double newX, double newY, double newWidth, double newHeight);
	//returns x 
	double getX() const;
	//returns y
	double getY() const;
	//returns width
	double getWidth() const;
	//returns height
	double getHeight() const;
	//changes the x
	void setX(double newX);
	//changes the y
	void setY(double newY);
	//changes the width
	void setWidth(double newWidth);
	//changes the height
	void setHeight(double newHeight);
	//calculates and returns the area
	double getArea() const;
	//calculates and returns the perimeter
	double getPerimeter() const;
	//checks if a given point is inside the rectangle
	bool contains(double x, double y) const;
	//checks if a given rectangle is entirely inside the rectangle
	bool contains(const rectangle &r) const;
	//checks if a given rectangle overlaps 
	bool overlaps(const rectangle &r) const;



};






#endif 


