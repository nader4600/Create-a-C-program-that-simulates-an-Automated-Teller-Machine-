#include<iostream>
using namespace std;
int choice, balance = 500 ;
void display_menu()
{
	cout << "MENU" << endl;
	cout << "1 Deposit" << endl;
	cout << "2 Withdraw" << endl;
	cout << "3 Check Balance " << endl;
	cout << "4 exit" << endl;
}
int deposit()
{
	int deposit_amount;
	cout << "How much do you want to deposit : ";
	cin >> deposit_amount;
	balance = balance + deposit_amount;
	return balance;
}
int withdraw()
{
	int withdraw_amount;
	cout << "How much do you want to withdraw : " << endl;
	cin >> withdraw_amount;
	if (withdraw_amount <= balance)
	{
		balance = balance - withdraw_amount;
	}
	else
	{
		cout << "The balance is not enough" << endl;
	}
	return balance;
}
void check_balance()

{
	cout << "Check Balance : " << balance << endl;
}

int main()
{
	
	cout << "Welcome to the ATM " << endl;
	cout << "Initial Balance : $500 " << endl;
	do {
		display_menu();
		cout << "what is your choice : " << endl;
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1:
			deposit();
			break;
		case 2:
			withdraw();
			break;
		case 3:
			check_balance();
			break;
		}
	} while (choice != 4);
}