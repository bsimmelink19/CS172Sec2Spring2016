/////////////////////////////////////////
//Brady Simmelin72
//CS-16
//Homewerk 5 EX05_01 Rectanlge Class, see Rectangle2D.h
//3-31-16
//////////////////////////////////////////

#include "Rectangle2D.h"

//constructor, sets x = 0, y = 0, width = 1, height = 1
rectangle::rectangle()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

//four argument constructor, user specified x, y, width, height 
rectangle::rectangle(double newX, double newY, double newWidth, double newHeight)
{
	x = newX;
	y = newY;
	width = newWidth;
	height = newHeight;
}

//returns x
double rectangle::getX() const
{
	return x;
}

//returns y
double rectangle::getY() const
{
	return y;
}

//returns height
double rectangle::getHeight() const
{
	return height;
}

//returns width
double rectangle::getWidth() const
{
	return width;
}

//changes the value of x
void rectangle::setX(double newX)
{
	x = newX;

}

//changes the value of y
void rectangle::setY(double newY)
{
	y = newY;

}

//changes the value of the height 
void rectangle::setHeight(double newHeight)
{
	height = newHeight;

}

//changes the value of the width
void rectangle::setWidth(double newWidth)
{
	width = newWidth;
}

//calculates and returns the area
double rectangle::getArea() const
{
	return width * height;
}

//calculates and returns the perimeter
double rectangle::getPerimeter() const
{
	return (2 * width) + (2 * height);
}

//chacks if a point is contained inside the rectangle 
bool rectangle::contains(double x, double y) const
{
	//returns false if the lowest value x inside the rectangle is greater than the x value of the point
	if ((getX() - (getWidth() / 2)) > x)
	{
		return false;
	}

	//returns false if the greatest value of x inside the rectangle is less than the x value of the point
	else if ((getX() + (getWidth() / 2)) < x)
	{
		return false;
	}

	//returns false if the lowest value of y contained in the rectangle is greater than the y value of the point
	else if ((getY() - (getHeight() / 2)) > y)
	{
		return false;
	}

	//returns false if the greatest y value inside the rectangle is less than the y value of the point 
	else if ((getY() + (getHeight() / 2)) < y)
	{
		return false;
	}

	//if none of the earlier cases are true, returns true
	else return true;
}

//checks if a rectangle is completely contained in the rectangle 
bool rectangle::contains(const rectangle &r) const
{
	//creates a new pointer to the parameter
	const rectangle*  pntr = &r;

	//returns false if the greatest x value inside the rectangle is less than the greatest x value in the tested rectangle
	if (getX() + (getWidth() / 2) < pntr->getX() + (pntr->getWidth() / 2))
	{
		return false;
	}

	//returns false if the lowest x value inside the rectangle is greater than the lowest x value in the tested rectangle 
	if (getX() - (getWidth() / 2) > pntr->getX() - (pntr->getWidth() / 2))
	{
		return false;
	}

	//returns false if the greatest y value inside the rectangle is less than the greatest y value in the tested rectangle
	if (getY() + (getHeight() / 2) < pntr->getY() + (pntr->getHeight() / 2))
	{
		return false;
	}

	//returns false if the lowest y value inside the rectangle is greater than the lowest y value in the tested rectangle 
	if (getY() - (getHeight() / 2) > pntr->getY() - (pntr->getHeight() / 2))
	{
		return false;
	}

	//if none of these cases are true, returns true
	else return true;
	delete pntr;
}

bool rectangle::overlaps(const rectangle &r) const
{
	//creates a pointer to the parameter
	const rectangle* pntr = &r;

	//calculates the X and Y coordinates of the top left corner of the tested rectangle 
	double topLeftX = pntr->getX() - (pntr->getWidth() / 2);
	double topLeftY = pntr->getY() + (pntr->getHeight() / 2);

	//calculates the X and Y coordinates of the top right corner of the tested rectangle 
	double topRightX = pntr->getX() + (pntr->getWidth() / 2);
	double topRightY = pntr->getY() + (pntr->getHeight() / 2);

	//calculates the X and Y coordinates of the lower left corner of the tested rectangle 
	double bottomLeftX = pntr->getX() - (pntr->getWidth() / 2);
	double bottomLeftY = pntr->getY() - (pntr->getHeight() / 2);

	//calculates the X and Y coordinates of the lower right corner of the tested rectangle 
	double bottomRightX = pntr->getX() + (pntr->getWidth() / 2);
	double bottomRightY = pntr->getY() - (pntr->getHeight() / 2);

	//Tests if the top left point is contained in the rectangle, if so the two must overlap, returns true
	if (contains(topLeftX, topLeftY))
	{
		return true;
	}

	//Tests if the top right point is contained in the rectangle, if so the two must overlap, returns true
	if (contains(topRightX, topRightY))
	{
		return true;
	}

	//Tests if the bottom left point is contained in the rectangle, if so the two must overlap, returns true
	if (contains(bottomLeftX, bottomRightX))
	{
		return true;
	}

	//Tests if the bottom right point is contained in the rectangle, if so the two must overlap, returns true
	if (contains(bottomRightX, bottomRightY))
	{
		return true;
	}


	//if none of these cases are true, the two do not overlap
	else return false;
	delete pntr;
}