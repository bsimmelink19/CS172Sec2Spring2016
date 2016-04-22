//////////////////////////////////////
//Brady Simmelink
//CS-172-2
//Homework 6, new account class
//see Transaction.h
//4-22-16
//////////////////////////////////////

#include "Transaction.h"

//constructor, user specified type, amount, balance, and description
Transaction::Transaction(char T, double A, double B, string D)
{
	type = T;
	amount = A;
	balance = B;
	description = D;
}

//returns the type of transaction
char Transaction::getType() const
{
	return type;
}

//returns the amount of the transaction
double Transaction::getAmount() const
{
	return amount;
}

//returns the remaining balance
double Transaction::getBalance() const
{
	return balance;
}

//returns the description of the transaction
string Transaction::getDescription() const
{
	return description;
}

//changes the type of transaction
void Transaction::setType(char T)
{
	type = T;
}

//changes the amount of the transaction
void Transaction::setAmount(double A)
{
	amount = A;
}

//changes the balance
void Transaction::setBalance(double B)
{
	balance = B;
}

//changes the description of the transaction
void Transaction::setDescription(string D)
{
	description = D;
}