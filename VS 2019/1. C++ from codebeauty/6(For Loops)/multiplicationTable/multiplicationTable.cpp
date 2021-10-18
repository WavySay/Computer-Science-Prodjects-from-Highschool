#include <iostream>
using namespace std;

int main()
{
	//print out the multiplication table

	int length = 2000;

	for (int i = 1; i <= length; i++)
	{

		for (int j = 1; j <= length; j++)
		{

			cout << i << " * " << j  << " = " << i * j << endl;

		}

		cout << "=============" << endl;

	}


	system("pause>0");
}
