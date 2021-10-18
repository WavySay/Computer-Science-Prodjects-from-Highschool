#include <iostream>
using namespace std;

void GenerateCardNumber(int arr[]);
bool AuthenticateCardNumber(int arr[]);
void DisplayCardNumber(int arr[]);

int main()
{
	int arr[16] = {3, 3, 7, 9, 5, 1, 3, 5, 6, 1, 1, 0, 8, 7, 9, 5};
	//GenerateCardNumber(arr);
	DisplayCardNumber(arr);
	if (AuthenticateCardNumber(arr))
		cout << "*Valid Card Number*";
	else
		cout << "*Invalid Card Number*";

	system("pause>0");
	return 0;
}
void GenerateCardNumber(int arr[])
{
	for (int i = 0; i < 16; i++)
		arr[i] = 5;
}
bool AuthenticateCardNumber(int arr[])
{
	int var1 = 0;
	int var2 = 0;
	int multiplierCount = 2;

	for (int i = 0; i < 16; i++)
	{
		var1 = arr[i] * multiplierCount;
		if (var1 >= 10)
		{
			switch (var1)
			{
			case 10:
				var1 = 1; break;
			case 12:
				var1 = 3; break;
			case 14:
				var1 = 5; break;
			case 16:
				var1 = 7; break;
			case 18:
				var1 = 9; break;
			}
		}
		if (multiplierCount == 1)
			multiplierCount = 2;
		else if (multiplierCount == 2)
			multiplierCount = 1;

		var2 += var1;
	}
	if ((var2 % 10) == 0)
		return true;
	else
		return false;
}
void DisplayCardNumber(int arr[])
{
	int spc = 0;//spc is the traker of the spaces within the card number
	for (int i = 0; i < 16; i++)
	{
		if (spc == 4)
		{
			cout << " ";
			spc = 0;
		}
		cout << arr[i];
		spc++;
	}
	cout << endl;
}