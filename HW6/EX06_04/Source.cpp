//////////////////////////////////////
//Brady Simmelink
//CS-172-2
//Homework 6, shuffle Vector
//4-22-16
//////////////////////////////////////

#include<iostream>
#include<vector>
#include <ctime> 
using namespace std;

//shuffles the contents of a vector 
template<typename T>
void shuffle(vector<T>& V)
{
	srand(time(0));
	for (int i = 0; i < V.size(); i++)
	{
		//selects a random location in the vector
		int randomLocation = rand() % V.size();
		//sets the element at location i to a placeholder variable
		T temp = V[i];
		//swaps the element at location i with the element at a random location
		V[i] = V[randomLocation];
		V[randomLocation] = temp;
	}
}

int main()
{
	//creates a vector with values in order from 5 to 15
	vector<int> vec1;
	vec1.push_back(5);
	vec1.push_back(6);
	vec1.push_back(7);
	vec1.push_back(8);
	vec1.push_back(9);
	vec1.push_back(10);
	vec1.push_back(11);
	vec1.push_back(12);
	vec1.push_back(13);
	vec1.push_back(14);
	vec1.push_back(15);

	//displays the vector as entered above
	cout << "Before the shuffle function, vec1 is: " << endl;
	for (int i = 0; i < vec1.size(); i++)
	{
		cout << vec1[i] << endl;
	}

	//shuffles the vector
	shuffle(vec1);

	//displays the vector after being shuffled
	cout << "After the shuffle function, vec1 is: " << endl;
	for (int i = 0; i < vec1.size(); i++)
	{
		cout << vec1[i] << endl;
	}

	return 0;
}