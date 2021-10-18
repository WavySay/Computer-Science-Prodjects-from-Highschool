#include <iostream>

using namespace std;

int main()
{
	//iphone password program
	//user has three tries to get the password right

	int password = 1234;
	int num;
	int triesLeft = 3;
	do
	{
		cout << "Enter pin number:" << endl;
		cin >> num;

		triesLeft--;
	} while (triesLeft > 0 && num != password);

	if (num == password) 
	{
		cout << "loading program..." << endl;

	}
	else
	{
		cout << "Bloked..."<< endl;
	}

	system("pause>0");
}
