/////////////////////////////////////////
//Brady Simmelin72
//CS-16
//Homewerk 5 Find the Smallest Element
//3-31-16
//////////////////////////////////////////
/*Derek- Coudln't check to make sure it ran right so I docked 5 but it looks correct from what I can see
15/20
*/
#include <iostream>
using namespace std;

//Returns the smallest entered number
int smallestElement(int* list, int size);
//allocates an array of the specified size
int* allocateArray(int size);
//stores the given numbers into the allocated array
void storeNumbers(int* list, int size);

int main()
{
	int size;
	cout << "How many numbers will you enter? " << endl;
	cin >> size;
	int * list = allocateArray(size);
	storeNumbers(list, size);
	int min = smallestElement(list, size);
	cout << "The smallest number you entered was " << min << endl;

	return 0;
}
int* allocateArray(int size)
{
	//creates a pointer to an array of the given size
	int* pArray = new int[size];

	//assignes 1 (an arbitrary number) to each element of the array
	for (int i = 0; i < size; i++)
	{
		pArray[i] = 1;
	}

	//returns the array pointer
	return pArray;
}

void storeNumbers(int* list, int size)
{
	//while there remains space in the array, asks the user to input a number, stores the number in the next available location
	for (int i = 0; i < size; i++)
	{
		cout << "Enter number: ";
		cin >> list[i];
	}
}
int smallestElement(int* list, int size)
{
	//sets the minimum to the first value in the array
	int Min = *list;
	for (int i = 0; i < size; i++)
	{
		//if the next number in the array is smaller than the current minimun, that numbers gets set to minimun
		if (Min > list[i])
		{
			Min = list[i];
		}
	}

	return Min;
}