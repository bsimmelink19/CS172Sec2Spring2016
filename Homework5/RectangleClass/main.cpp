#include <iostream>
#include "Rectangle2D.h"
using namespace std;

int main()
{
	//Creates three rectangle objects using the four argument constructor
	rectangle r1(2, 2, 5.5, 4.9);
	rectangle r2(4, 5, 10.5, 3.2);
	rectangle r3(3, 5, 2.3, 5.4);

	//displays the area and perimeter of r1
	cout << "The area of r1 is: " << r1.getArea() << endl;
	cout << "The perimeter of r1 is: " << r1.getPerimeter() << endl;

	//checks if the point 3,3 is in the rectangle r1, displays the appropriate output
	if (r1.contains(3, 3))
	{
		cout << "The point (3,3) is inside r1." << endl;
	}

	//checks if the point 3,3 is in the rectangle r1, displays the appropriate output
	if (!r1.contains(3, 3))
	{
		cout << "The point (3,3) is outside r1." << endl;
	}

	//checks if the full rectangle r2 is in the rectangle r1 and displays the appropriate output
	if (r1.contains(r2))
	{
		cout << "The rectangle r2 is contained in r1." << endl;
	}

	//checks if the full rectangle r2 is in the rectangle r1 and displays the appropriate output
	if (!r1.contains(r2))
	{
		cout << "The rectangle r2 is not contained in r1." << endl;
	}

	//checks if r1 and r3 overlaps and displays the appropriate output
	if (r1.overlaps(r3))
	{
		cout << "r1 and r3 overlap." << endl;
	}

	//checks if r1 and r3 overlaps and displays the appropriate output
	if (!r1.overlaps(r3))
	{
		cout << "r1 and r3 do not overlap." << endl;
	}

	return 0;

}

