#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	if (numberOfStudents > capacity)
	{
		doubleArray();
	}
	students[numberOfStudents] = name;
	numberOfStudents++;


}

void Course::dropStudent(const string& name)
{
	const string* pntr = &name;

}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

int Course::getCapacity()
{
	return capacity;
}
string* Course::doubleArray()
{
	int size = getCapacity() * 2;
	string* doubleArray = new string[size];

	for (int i = 0; i < getCapacity(); i++)
	{
		doubleArray[i] = students[i];
	}

	return doubleArray;


}