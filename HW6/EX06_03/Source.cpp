//////////////////////////////////////
//Brady Simmelink
//CS-172-2
//Homework 6, Vector Class
//4-22-16
//////////////////////////////////////
#include <iostream>
using namespace std;

template<typename T>
class Vec
{
private:
	T* element;
	int vecSize;
	int capacity;
public:
	Vec();

	Vec(int size);
	Vec(int size, T defaultValue);
	void doubleCapacity();
	void pop_back();
	void push_back(T element);
	int size();
	bool empty();
	T at(int index);
	void clear();
	void swap(Vec otherVec);
};

//creates a vector with size 0
template<typename T>
Vec<T>::Vec()
{
	vecSize = 0;
	capacity = 50;
	element = new T[capacity];
}
//creates a vector with a user specified size
template<typename T>
Vec<T>::Vec(int size)
{
	vecSize = size;
	capacity = 50;
	element = new T[capacity]
}

//creates a vector with a user specified size, and initializes each element to a user specified value
template<typename T>
Vec<T>::Vec(int size, T defaultValue)
{
	vecSize = size;
	capacity = 50;
	element = new T[capacity]
		for (int i = 0; i < capacity; i++)
		{
			element[i] = defaultValue;
		}
}

//ensures the capacity of the vector by doubling the capacity if the vector size exceeds the capacity
template<typename T>
void Vec<T>::doubleCapacity()
{
	if (vecSize >= capacity)
	{
		T* pnt = element;
		capacity = capacity * 2;
		element = new T[capacity];
		for (int i = 0; i < vecSize; i++)
			element[i] = pnt[i];
		delete[] pnt;

	}

}


//adds an element to the end of the vector
template<typename T>
void Vec<T>::push_back(T value)
{
	//ensures the capacity before adding an element to the vector
	doubleCapacity();
	element[vecSize++] = value;
}

//removes the last element in the vector
template<typename T>
void Vec<T>::pop_back()
{
	vecSize--;
}

//returns the size of the vector
template<typename T>
int Vec<T>::size()
{
	return vecSize;
}

//returns true if the vector is empty, false if it is not
template<typename T>
bool Vec<T>::empty()
{
	if (vecSize == 0)
		return true;
	else return false;
}

//returns the value at a specific index 
template <typename T>
T Vec<T>::at(int index)
{
	return element[index];
}

//removes all elements from this vector 
template<typename T>
void Vec<T>::clear()
{
	vecSize = 0;
}

//swaps this vector with another one. 
template<typename T>
void Vec<T>::swap(Vec<T> otherVec)
{
	T Temporary[100];
	int newSize = otherVec.size();
	for (int i = 0; i < otherVec.size(); i++)
	{
		Temporary[i] = otherVec.at(i);
	}
	otherVec.clear();

	for (int i = 0; i < size(); i++)
	{
		otherVec.push_back(at(i));
	}

	clear();
	for (int i = 0; i < newSize; i++)
	{
		push_back(Temporary[i]);
	}


}

int main()
{

	//creates an integer vector with values 4, 6, 8, 10
	Vec<int> List1;
	List1.push_back(4);
	List1.push_back(6);
	List1.push_back(8);
	List1.push_back(10);

	//creates an integer vector with values 2, 12, 14
	Vec<int> List2;
	List2.push_back(2);
	List2.push_back(12);
	List2.push_back(14);

	//displays List1
	cout << "List1 is: " << endl;
	for (int i = 0; i < List1.size(); i++)
	{
		cout << List1.at(i) << endl;
	}

	//displays List2
	cout << "List2 is: " << endl;
	for (int i = 0; i < List2.size(); i++)
	{
		cout << List2.at(i) << endl;
	}

	//swaps List1 and List2
	List1.swap(List2);

	//displays List1 after being swapped 
	cout << "after the swap function, List1 is: " << endl;
	for (int i = 0; i < List1.size(); i++)
	{
		cout << List1.at(i) << endl;
	}

	//removes the last value of List1
	List1.pop_back();

	//displays List1 after removing the last value
	cout << "After the pop_back function, List1 is:" << endl;
	{
		for (int i = 0; i < List1.size(); i++)
		{
			cout << List1.at(i) << endl;
		}
	}

	return 0;

}