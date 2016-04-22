//////////////////////////////////////
//Brady Simmelink
//CS-172-2
//Homework 6, new account class
//see Date.cpp, newAccount.cpp, Transaction.cpp,
//Transaction.h, newAccount.h, Date.h
//4-22-16
//////////////////////////////////////
#include <iostream> 
#include "newAccount.h"
#include <ctime>
using namespace std;

int main()
{
	//creates a new account, name george, id 1122, balance 1000
	newAccount A1("George", 1122, 1000);

	//adds 30 to balance
	A1.deposit(30);
	//adds 40 to balance
	A1.deposit(40);
	//adds 50 to balance
	A1.deposit(50);
	//subtracts 5 from balance
	A1.withdraw(5);
	//subtracts 4 from balance
	A1.withdraw(4);
	//subtracts 2 from balance
	A1.withdraw(2);

	//displays name
	cout << "Account Holders Name: " << A1.getName() << endl;
	//displays annual interest rate
	cout << "Annual Interest Rate: " << A1.getAnnualInterestRate() << endl;
	//displays balance
	cout << "Account Balance: " << A1.getBalance() << endl << endl;

	cout << "List of Transactions: " << endl;
	//displays the number the transaction is (1, 2, 3, 4, ...)
	//displays the type, the amount, the remaining balance of each transaction for the account 
	for (unsigned int i = 0; i < A1.transactions.size(); i++)
	{
		cout << "Transaction " << i << ":" << endl;
		cout << "Type of Transaction: " << A1.transactions[i].getType() << endl;
		cout << "Amount:" << A1.transactions[i].getAmount() << endl;
		cout << "Remaining Balance: " << A1.transactions[i].getBalance() << endl;
		cout << endl << endl;
	}

}