//////////////////////////////////////
//Brady Simmelink
//CS-172-2
//Homework 6, new account class
//see Date.cpp, Transaction.cpp, Date.h
//4-22-16
//////////////////////////////////////

#ifndef _TRANSACTION_
#define _TRANSACTION_
#include "Date.h"
#include <string>
using std::string;

class Transaction
{
private:
	//date of transaction
	Date date;
	//type of transaction (D: deposit, W:withdraw
	char type;
	//amount of transaction
	double amount;
	//remaining balance 
	double balance;
	//description of transaction
	string description;
public:
	Transaction(char type, double amount, double balance, string description);
	char getType() const;
	double getAmount() const;
	double getBalance() const;
	string getDescription() const;
	void setType(char type);
	void setAmount(double amount);
	void setBalance(double balance);
	void setDescription(string description);
};

#endif
