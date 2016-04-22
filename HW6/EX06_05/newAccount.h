//////////////////////////////////////
//Brady Simmelink
//CS-172-2
//Homework 6, new account class
//see newAccount.cpp
//4-22-16
//////////////////////////////////////

#ifndef _newAccount_
#define _newAccount_

#include <string>
#include "Transaction.h"
#include <vector>
using std::string;
using std::vector;

class newAccount
{
private:
	//the id number for the account
	int id;
	//The name of the customer 
	string name;
	//the remaining balance for the account
	double balance;
	//the current interest rate for the account 
	static double annualInterestRate;



public:
	//transactions for the account
	vector <Transaction> transactions;
	newAccount();
	newAccount(string name, int id, double balance);
	int getID() const;
	double getBalance() const;
	double getAnnualInterestRate() const;
	string getName() const;
	void setID(int newID);
	void setBalance(double newBalance);
	void setAnnualInterestRate(double newInterestRate);
	void setName(string name);
	double getMonthlyInterestRate();
	void withdraw(double amount);
	void deposit(double amount);



};

#endif


