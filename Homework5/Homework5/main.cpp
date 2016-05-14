/////////////////////////////////////////
//Brady Simmelin72
//CS-16
//Homewerk 5 EX05_01 Analyze Input
//3-31-16
//////////////////////////////////////////


/*Derek- This runs great and is wonderful, nice job Brady. Why did you put all of the projects like this into one thing though? it only lets me run one main program so then I cant 
check the rest of your programs without putting them into different programs. 
20/20
*/
#include <iostream>
using namespace std;

//Prompts the user to enter the amount of numbers they will enter, stores it as size
void promptSize(int* size);
//dynamically allocates an array
int * allocateArray(int size);
//stores the numbers entered by the user
void storeNumbers(int* numbers, int size);
//returns the average of the entered numbers
double findAverage(int* numbers, int size);
//returns how many entered numbers are larger than the average
int biggerThanAverage(int* numbers, int size, double average);

int main()
{
	int nums;

	promptSize(&nums);
	int* numbers = allocateArray(nums);
	storeNumbers(numbers, nums);
	double average = findAverage(numbers, nums);
	cout << "The average of those numbers is " << average << endl;
	cout << biggerThanAverage(numbers, nums, average) << " of the numbers you entered are larger than the average " << endl;

}

void promptSize(int* size)
{
	cout << "How many integers will you enter? " << endl;
	cin >> *size;
}

void storeNumbers(int* numbers, int size)
{
	//stores entered number until the allocated array is full
	for (int* i = numbers; i < numbers + size; i++)
	{
		cout << "Enter number: ";
		cin >> *i;
	}
}

double findAverage(int* numbers, int size)
{
	//initialize the total to 0
	double total = 0;

	//adds the next value in the array to the previous total
	for (int* i = numbers; i < numbers + size; i++)
	{
		total = total + *i;
	}

	//calculates the average by dividing the total by the size of the array
	double average;
	average = total / size;

	return average;
}

int * allocateArray(int size)
{
	//allocates an array
	int* pntArray = new int[size];

	//initializes the array to 1 (arbitrarily picked value)
	for (int i = 0; i < size; i++)
	{
		pntArray[i] = 1;
	}

	//returns an array pointer
	return pntArray;
}


int biggerThanAverage(int* numbers, int size, double average)
{
	//intitializes the number of values greater than the average to 0
	int counter = 0;
	for (int* i = numbers; i < numbers + size; i++)
	{
		//increments the number of values greater than the average each time the current array value is larger
		if (*i > average)
		{
			counter++;
		}
	}
	return counter;
}
