/////////////////////////////////////////////
//Brady Simmelink
//Homework 3, Problem 10.5 regular palindrome
//3-15-16
/////////////////////////////////////////////

#include <iostream>
#include <string>
#include <stack>
using namespace std;

//Returns true if a string variable is a palindrome
//returns false if a string variable is not a palindrome
bool isPalindrome(const string& s)
{
	//creates a stack of characters
	stack<char> palindrome;

	//pushes the characters in the string to a stack
	//changes any uppercase letters to lowercase before pushing
	for (int i = 0; i < s.size(); i++)
	{
		palindrome.push(tolower(s[i]));
	}

	//initializes a counter variable for the while loop
	int i = 0;

	//checks if the a word is a palindrome by comparing the top of the stack to the next letter in the word
	while (!palindrome.empty())
	{

		if (tolower(s[i]) != palindrome.top())
		{
			return false;
		}
		else
		{
			//increments i and removes the top value from the stack
			i++;
			palindrome.pop();
		}

	}
	return true;
}

int main()
{
	string word;
	cout << "Enter a word to check if it is a palindrome: ";
	cin >> word;

	//tests if a word is a palindrome, if true displays "is a palindrome"
	if (isPalindrome(word) == true)
	{
		cout << word << " is a palindrome!" << endl;
	}
	//if not a palindrome, displays "is Not a palindrome"
	else cout << word << " is NOT a palindrome!" << endl;


	return 0;
}