#include <iostream>
#include <cmath>
#include "QuadraticEquation.h"
using namespace std;



int main()
{
	//creates a QuadraticEquation variable, with arbitrary values for coefficients
	QuadraticEquation quad;

	//prompts user to input coefficient values to replace arbitrary ones
	cout << "Please enter the three coefficients: ";
	cin >> quad.coefficientA >> quad.coefficientB >> quad.coefficientC;

	//displays the two roots if the discriminant is greater than 0
	if (quad.getDiscriminant() > 0)
	{
		cout << "The roots are " << quad.getRoot1() << " and " << quad.getRoot2() << endl;
	}

	//displays the one root if the discriminant is 0
	else if (quad.getDiscriminant() == 0)
	{
		cout << "The root is " << quad.getRoot1() << endl;
	}

	//displays "the equation has no real roots" if the discriminant is negative
	else if (quad.getDiscriminant() < 0)
	{
		cout << "The equation has no real roots." << endl;
	}

	return 0;
}