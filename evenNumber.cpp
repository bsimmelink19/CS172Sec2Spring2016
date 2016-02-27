#include "evenNumber.h"

//no argument constructor
evenNumber::evenNumber()
{
	value = 0;
}

//single argument constructor
evenNumber::evenNumber(int newValue)
{
	value = newValue;
}

//returns the current value
int evenNumber::getValue()
{
	return value;
}

//returns the next even number
int evenNumber::getNext()
{
	return value + 2;
}

//returns the previous even number
int evenNumber::getPrevious()
{
	return value - 2;
}
