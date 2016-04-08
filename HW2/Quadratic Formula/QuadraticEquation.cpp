#include "QuadraticEquation.h"
#include <cmath>

//constructor, arbitrary values
QuadraticEquation::QuadraticEquation()
{
	coefficientA = 1;
	coefficientB = 1;
	coefficientC = 1;
}

//returns the first coefficient
int QuadraticEquation::getCoefficientA()
{
	return coefficientA;
}

//returns the second coefficient
int QuadraticEquation::getCoefficientB()
{
	return coefficientB;
}

//returns the third coefficient
int QuadraticEquation::getCoefficientC()
{
	return coefficientC;
}

//calculates and returns the discriminant
int QuadraticEquation::getDiscriminant()
{
	return ((coefficientB * coefficientB) - (4 * coefficientA * coefficientC));
}

//calculates and returns the first root
double QuadraticEquation::getRoot1()
{
	return (-coefficientB) + sqrt((coefficientB * coefficientB) - (4 * coefficientA * coefficientC));
}

//calculates and returns the second root
double QuadraticEquation::getRoot2()
{
	return (-coefficientB) - sqrt((coefficientB * coefficientB) - (4 * coefficientA * coefficientC));
}