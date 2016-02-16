//////////////////////////////////
//Brady Simmelink
//CS 172-2
//EX01_02
//2-9-16
//////////////////////////////////

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

//initializes the bool variable hasPassedTest to True
//declares variables x and y, assigns random values, compares x and y, displays which value is greater or if they are equal
//declares the variable numberOfShares, inputs value for numberOfShares, displays if the value is greater than 100
//declares variables boxWidth and bookWidth, inputs values for both, displays if the box width is evenly divisible by the book width
//inputs the shelf life of a box of chocolates and the temperature, decreases the shelf life by four if the temperature is greater than 90
void ex02();

//inputs area of square, outputs its diagonal
//Prompts the user for a yes or no response
//initializes char variable to tab
//stores users mailing address
//initializes string to empty
void ex03();

//inputs a value between 1 and 10
//outputs the cube of every number 1 until the number inputed
//outputs same number of asteriks as input value
//outputs even values from 0-40
//doubles a given value
//sums two random integers
//adds one to a given value
void ex04();

//stores five values in an array
//sums and multiplies the values in an array
//outputs the values in the array
//tests if a value is contained in the array
void ex05();

//doubles a given value
int twice(int& interger);

//adds two integers
int add(int integer1, int integer2, int& sum);

//adds one to an integer
int plusOne(int& parameter);

//displays the values of an array
void values(int array[], int size);

//tests if an array contains a given value
void arrayTest(int array[], int size);

int main()
{
	ex02();
	ex03();
	ex04();
	ex05();
}

void ex02()
{
	//initializes variable to true;

	bool hasPassedTest = true;

	//initializes variables x and y to random numbers
	srand(time(0));
	int x = rand() % 10;
	int y = rand() % 10;

	//tests if x is greater than y, if true displays x as greater than y
	if (x > y)
	{
		cout << x << " is greater than " << y << "." << endl << endl;
	}
	//tests if x is less than y, if true displays y as greater than x
	else if (x < y)
	{
		cout << y << " is greater than " << x << "." << endl << endl;
	}
	//tests if x is equal to y, if true displays x and y as equal
	else if (x == y)
	{
		cout << x << " is equal to " << y << "." << endl << endl;
	}

	//declares variable and has the user input a variable
	int numberOfShares;
	cout << "Please input a value: ";
	cin >> numberOfShares;

	//tests if variable is less than 100, if true displays the value is less than 100
	if (numberOfShares < 100)
	{
		cout << "The value " << numberOfShares << " is less than 100." << endl << endl;
	}

	//tests if the varable is greater than 100, if true displays value is greater than 100
	else if (numberOfShares > 100)
	{
		cout << "The value " << numberOfShares << " is greater than 100." << endl << endl;
	}

	//tests if value is equal to 100, if true displays the value is equal to 100
	else if (numberOfShares == 100)
	{
		cout << "The value is equal to 100." << endl << endl;
	}

	//declares variables for box width and book width
	int boxWidth;
	int bookWidth;

	//inputs values for box width and book width respectively
	cout << "Please enter the width of the box: ";
	cin >> boxWidth;
	cout << "Please enter the width of the book: ";
	cin >> bookWidth;

	//tests if box width is evenly divisble by book width, if true displays that it is evenly divisible
	if (boxWidth % bookWidth == 0)
	{
		cout << "The box width is evenly divisble by the book width" << endl << endl;
	}

	else if (boxWidth % bookWidth != 0)
	{
		cout << "The box width is not evenly divisble by the book width. " << endl << endl;
	}


	//declares variables for shelf life and temperature, inputs values for each respectively
	int shelfLife;
	int temp;
	cout << "What is the shelf life of the chocolates? ";
	cin >> shelfLife;
	cout << "What is the temperature? ";
	cin >> temp;

	//tests if temperature is greater than 90, if true decreases value of shelf life by 4 and displays new shelf life
	if (temp > 90)
	{
		shelfLife = shelfLife - 4;
		cout << "With that temperature, the actual shelf Life is " << shelfLife << "." << endl;
	}


}

void ex03()
{
	//declares variable for area and inputs value
	int area;
	cout << "What is the area of the square? ";
	cin >> area;

	//finds the side of the square by taking to square root of the area
	int side = sqrt(area);
	//finds the diagonal of the square by multiplying the side length by the square root of 2
	double diagonal = sqrt(2) * side;

	//displays the diagonal of the square
	cout << "The diagonal of the square is " << diagonal << endl;

	//prompt user to input a y for yes and an n for no
	char answer;
	cout << "input 'y' for yes and 'n' for no: ";
	cin >> answer;

	if (answer == 'y')
	{
		cout << "You selected yes" << endl;
	}
	else if (answer == 'n')
	{
		cout << "you selected no" << endl;
	}

	else cout << "invalid response" << endl;

	//initialize a char variable to tab
	char tab = 9;

	//Declare a string user and prompt user to input their mailing address
	string mailingaddress;
	cout << "Please input your mailing address: " << endl;
	cin >> mailingaddress;
	cout << mailingaddress << endl;

	//initialize a string to empty
	string emptyString = "";


}

void ex04()
{

	int number = -1;
	while (number > 10 || number < 1)
	{
		cout << "Input a number between 1 and 10: ";
		cin >> number;
	}
	cout << "Thank you!" << endl;

	for (int i = 1; i <= number; i++)
	{
		cout << pow(i, 3) << endl;
	}

	int i = 1;
	do
	{
		cout << "*";
		i++;
	} while (i <= number);
	cout << endl;

	for (int i = 1; i <= 40; i++)
	{
		if (i % 2 == 0)
			cout << i << endl;
	}

	int integer;
	cout << "Please enter an integer: ";
	cin >> integer;
	twice(integer);
	cout << integer << endl;

	srand(time(0));
	int integer1 = rand() % 10;
	int integer2 = rand() % 10;
	int sum = 1;
	add(integer1, integer2, sum);
	cout << sum << endl;

	int parameter;
	cout << "Please enter a number: ";
	cin >> parameter;

	plusOne(parameter);
	cout << parameter << endl;
}

void ex05()
{
	int array[5];
	int number;
	cout << "Enter five numbers: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> number;
		array[i] = number;
	}

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += array[i];
	}
	cout << sum << endl;

	int product = 1;
	for (int i = 0; i < 5; i++)
	{
		product *= array[i];
	}
	cout << product << endl;

	int size = 5;
	values(array, size);

	arrayTest(array, size);

}

int twice(int& integer)
{
	integer = integer * 2;
	return integer;
}

int add(int integer1, int integer2, int& sum)
{
	sum = integer1 + integer2;
	return sum;
}

int plusOne(int& parameter)
{
	parameter = parameter + 1;
	return parameter;
}

void values(int array[], int size)
{
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void arrayTest(int array[], int size)
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	for (int i = 0; i < 5; i++)
	{
		if (array[i] == number)
		{
			cout << "The number is contained in the array" << endl;
			break;
		}
	}
}