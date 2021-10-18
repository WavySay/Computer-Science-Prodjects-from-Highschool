#include <iostream>
using namespace std;

void display(const int len, int wordInNumerals[]);
void recursion(const int len, int wordInNumerals[]);

int main()
{
	const int len = 5;
    int wordInNumerals[len] = {0,0,0,0,0,};

	system("CLS");
	recursion(len, wordInNumerals);
	system("pause>0");
	return 0;
}
//recursion function
void recursion(const int len, int wordInNumerals[])
{
	int count = 0;
	for (int a = 0; a <= 26; a++)
	{
		wordInNumerals[0] = a;
		for (int b = 0; b <= 26; b++)
		{
			wordInNumerals[1] = b;
			for (int c = 0; c <= 26; c++)
			{
				wordInNumerals[2] = c;
				for (int d = 0; d <= 26; d++)
				{
					wordInNumerals[3] = d;

					count++;
					display(len, wordInNumerals);
					cout << " ";
					if (count > 27)
					{
						cout << endl;
						count = 0;
					}
				}
			}
		}
	}

}
//basic display function capable of outputing number combos
void display(const int len, int wordInNumerals[])
{
	for (int i = 0; i < len; i++)
	{
		switch (wordInNumerals[i])
		{
		case 0: cout << ""; break;
		case 1: cout << "A"; break;
		case 2: cout << "B"; break;
		case 3: cout << "C"; break;
		case 4: cout << "D"; break;
		case 5: cout << "E"; break;
		case 6: cout << "F"; break;
		case 7: cout << "G"; break;
		case 8: cout << "H"; break;
		case 9: cout << "I"; break;
		case 10: cout << "J"; break;
		case 11: cout << "K"; break;
		case 12: cout << "L"; break;
		case 13: cout << "M"; break;
		case 14: cout << "N"; break;
		case 15: cout << "O"; break;
		case 16: cout << "P"; break;
		case 17: cout << "Q"; break;
		case 18: cout << "R"; break;
		case 19: cout << "S"; break;
		case 20: cout << "T"; break;
		case 21: cout << "U"; break;
		case 22: cout << "V"; break;
		case 23: cout << "W"; break;
		case 24: cout << "X"; break;
		case 25: cout << "Y"; break;
		case 26: cout << "Z"; break;
		}
	}
}