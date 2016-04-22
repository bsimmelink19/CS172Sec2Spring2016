//////////////////////////////////////
//Brady Simmelink
//CS-172-2
//Homework 6, isSorted
//4-22-16
//////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		//returns false if the next element in the array is less than the current 
		if (list[i] > list[i + 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	//creates an array of integers
	int integerList[] = { 1, 2, 4, 6, 7, 8, 11, 14 };

	//runs the function for an array of integers and displays if it is sorted or not
	//should say the list is sorted
	if (isSorted(integerList, 8))
	{
		cout << "The integer list is sorted" << endl;
	}
	else cout << "The integer list is not sorted" << endl;

	//creates an array of doubles 
	double doubleList[] = { 3.2, 2.1, 8.9, 9.1, 9.9, 23.4, 25.0 };

	//runs the function for an array of doubles and displays if it is sorted or not
	//should say the list is not sorted
	if (isSorted(doubleList, 7))
	{
		cout << "The double list is sorted" << endl;
	}
	else cout << "The double list is not sorted" << endl;

	//creates an array of strings
	string stringList[] = { "abc", "abg", "bcd", "efg" };

	//runs the function for an array of strings and displays if it is sorted or not
	//should say the list is sorted
	if (isSorted(stringList, 4))
	{
		cout << "The string list is sorted" << endl;
	}
	else cout << "The string list is not sorted" << endl;

	return 0;
}