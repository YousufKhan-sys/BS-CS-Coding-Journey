#include <iostream>
using namespace std;

int deposit(int a,int balance) {
	balance = balance + a;
	return balance;
}
int withdraw(int a,int balance) {
	balance = balance - a;
	return balance;
}
int showbalance(int balance) {
	return balance;
}

int main()
{
	int a,choice,balance = 0;
	cout << "Welcome to ATM" << endl;
	do
	{
		cout << "Select options (Deposit,Withdraw,Check balance,exit)(1-4)" << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "Enter Amount to Deposit" << endl;
			cin >> a;
			cout << "Amount Deposited, Current Balance:" << deposit(a, balance) << endl;
			balance = balance + a;
		}
		else if (choice == 2) {
			cout << "Enter Amount to Withdraw" << endl;
			cin >> a;
			cout << "Amount Withdrawn, Current Balance:" << withdraw(a, balance) << endl;
			balance = balance - a;
		}
		else if (choice == 3) {
			cout << "Current Balance:" << showbalance(balance) << endl;
		}
		else if (choice == 4) {
			cout << "Program exit..." << endl;
		}
		else {
			cout << "Enter valid choice" << endl;
		}
	} while (choice!=4);

	return 0;
}