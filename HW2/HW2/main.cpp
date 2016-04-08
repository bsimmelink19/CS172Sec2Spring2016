#include <iostream>
#include "evenNumber.h"
using namespace std;

int main()
{
	//creates an evenNumber variable with a value of 16
	evenNumber number(16);

	//displays original value 
	cout << number.getValue() << endl;

	//displays the next even number
	cout << number.getNext() << endl;

	//displays the previous even number
	cout << number.getPrevious() << endl;

	return 0;
}