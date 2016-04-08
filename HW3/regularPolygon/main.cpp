/////////////////////////////////////////////
//Brady Simmelink
//Homework 3, Problem 10.13 regular polygon
//see regularPolygon.h and regularPolygon.cpp
//3-15-16
/////////////////////////////////////////////

#include <iostream>
#include "regularPolygon.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	regularPolygon polygon1; //creates a polygon with 3 sides, side lengths of 1, x and y coordinates at 0
	regularPolygon polygon2(6, 4); //creates a polygon with 6 sides, sides lengths of 4, x and y coordinates at 0
	regularPolygon polygon3(10, 4, 5.6, 7.8); //creates a polygon with 10 sides, side lengths of 4, x coordinate at 5.6 and y coordinate at 7.8

	cout << "The perimeter of polygon1 is: " << polygon1.getPerimeter() << endl; //displays the perimeter of the first polygon
	cout << "The area of polygon1 is: " << polygon1.getArea() << endl; //displays the area of the first polygon
	cout << "The perimeter of polygon2 is: " << polygon2.getPerimeter() << endl; //displays the perimeter of the second polygon
	cout << "The area of polygon2 is: " << polygon2.getArea() << endl; //displays the area of the second polygon
	cout << "The perimeter of polygon3 is: " << polygon3.getPerimeter() << endl; //displays the perimeter of the third polygon
	cout << "The area of polygon3 is: " << polygon3.getArea() << endl; //displays the area of the third polygon

	return 0;
}