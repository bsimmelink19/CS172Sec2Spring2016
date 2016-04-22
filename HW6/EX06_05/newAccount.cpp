//////////////////////////////////////
//Brady Simmelink
//CS-172-2
//Homework 6, new account class
//see newAccount.h
//4-22-16
//////////////////////////////////////

#include "newAccount.h"

//default constructor
newAccount::newAccount()
{
	id = 0;
	balance = 0;
	annualInterestRate = 0;
}

//3 argument constructor, user specified name, id and balance
newAccount::newAccount(string newName, int newID, double newBalance)
{
	name = newName;
	id = newID;
	balance = newBalance;
}

//returns the id of the account
int newAccount::getID() const
{
	return id;
}

//returns the balance of the account
double newAccount::getBalance() const
{
	return balance;
}

//returns the annual interest rate of the account
double newAccount::getAnnualInterestRate() const
{
	return annualInterestRate;
}

//returns the name of the owner of the account
string newAccount::getName() const
{
	return name;
}

//changes the name of the owner of the account
void newAccount::setName(string N)
{
	name = N;
}

//changes the id of the account
void newAccount::setID(int newID)
{
	id = newID;
}

//changes the balance of the account
void newAccount::setBalance(double newBalance)
{
	balance = newBalance;
}

//changes the annual interest rate of the account
void newAccount::setAnnualInterestRate(double newInterestRate)
{
	annualInterestRate = newInterestRate;
}

//calculates and returns the monthly interest rate
double newAccount::getMonthlyInterestRate()
{
	double monthlyInterestRate = annualInterestRate / 12;

	return monthlyInterestRate;
}

//withdraws money from the balance
//adds the information to the transaction vector
void newAccount::withdraw(double amount)
{
	balance = balance - amount;

	Transaction newTransaction('W', amount, balance, "Money was withdrawn");

	transactions.push_back(newTransaction);
}

//adds money to the balance
//adds information to the transaction vector
void newAccount::deposit(double amount)
{
	balance = balance + amount;

	Transaction newTransaction('D', amount, balance, "Money was deposited");

	transactions.push_back(newTransaction);

}

double newAccount::annualInterestRate = 1.5;