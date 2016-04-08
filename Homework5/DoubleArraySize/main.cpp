/////////////////////////////////////////
//Brady Simmelin72
//CS-16
//Homewerk 5 Increase Array Size
//3-31-16
/////////////////////////////////////////

#include <iostream>
using namespace std;


int* doubleCapacity(const int* list, int size);

int main()
{
	int size;
	cout << "Enter the size of the array: " << endl;
	cin >> size;
	//creates a pointer of the specified size
	int* list = new int[size];

	doubleCapacity(list, size);

}

int* doubleCapacity(const int* list, int size)
{
	//allocates a pointer with twice the size of the original size
	int* doubleList = new int[size * 2];

	return doubleList;
}
