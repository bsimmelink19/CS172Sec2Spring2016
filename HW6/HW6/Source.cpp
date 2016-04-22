//////////////////////////////////////
//Brady Simmelink
//CS-172-2
//Homework 6, Linear Search
//4-22-16
//////////////////////////////////////

#include <iostream>
#include <string> 
using namespace std;

template <typename T>
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		//if the value to be checked is equal to the element at location i, returns i
		if (key == list[i])
		{
			return i;
		}

	}
	//if no element is equal to the value being checked, returns -1
	return -1;
}

int main()
{
	//initializes an array of integers
	int intArray[] = { 1, 3, 6, 2, 8 };
	//initializes an array of doubles
	double doubleArray[] = { 4.1, 6.7, 3.1, 9.2, 8.5, 7.7 };
	//initializes an array of strings
	const char* const stringArray[] = { "ball", "cat", "dog" };


	cout << "linearSearch(intArray, 3, 5) is " << linearSearch(intArray, 3, 5) << endl; //1

	cout << "linearSearch(doubleArray, 8.2, 6) is " << linearSearch(doubleArray, 8.2, 6) << endl; //-1

	cout << "linearSearch(stringArray, 'ball', 3) is " << linearSearch(stringArray, "ball", 3) << endl; //0

	return 0;
}