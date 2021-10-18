#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void displayMenu();
double menuOpertion(int a, double accountBalance);

int main()
{
	//Check balacnce, Deposit, Withdrawl, Show Menu
	int numInput = 5;
	double accountBalance = 500;
	do 
	{

		bool isInputValid = false;
		displayMenu();
		cin >> numInput;

		if (numInput == 0) 
		{
			cout << "*INVALID INPUT*";
			system("Pause>0");
			return 0;
		}
		for (int i = 1; i <= 4; i++) 
		{
			if (i == numInput)
			{
				isInputValid = true;
				break;
			}
			
		}
		if (isInputValid) 
		{
			system("ClS");
			accountBalance = menuOpertion(numInput, accountBalance);
		}
		else
		{
			cout << "*INVALID INPUT*" << endl;
		}
	} while (numInput != 4);
	
	system("pause>0");
	return 0;
}
//fuction that covers the back end
double menuOpertion(int a, double accountBalance)
{
	double amount = 0.00;

	switch (a)
	{
	case 1:
		cout << "Account Balance: " << accountBalance << endl;
		return accountBalance;
	case 2: 
		cout << "Deposit Amount: " << endl;
		cout << "-> ";
		cin >> amount;
		amount = amount - 0.00;
		accountBalance += amount;
		cout << "New Account Balance: " << accountBalance << endl;
		return accountBalance;
	case 3: 
		cout << "Withdrawl Amount: " << endl;
		cout << "-> ";
		cin >> amount;
		amount = amount - 0.00;
		if (amount > accountBalance)
		{
			cout << "*Inaficiant Funds*" << endl;
			return accountBalance;
		}
		accountBalance -= amount;
		cout << "New Account Balance: " << accountBalance << endl;
		return accountBalance;
	case 4:
		return accountBalance;
	default: cout << "*INVALID INPUT*" << endl;
	}

}
//function that covers the front end
void displayMenu()
{
	cout << "             ATM              " << endl;
	cout << "==============================" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdrawl" << endl;
	cout << "4. Quit" << endl;
	cout << "-> ";
}
