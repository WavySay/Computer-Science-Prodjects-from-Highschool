#include <iostream>
using namespace std;

int main()
{
	//use of for(do while) nest

	int length;
	int num;
	double dependantVar = 0;
	cout << "How many grades do you wa to enter?" << endl;
	cin >> length;

	for (int i = 0; i < length; i++)
	{

		// do while is used to ignore numbers outside of 1-5
		do
		{
			
			cout << "Input grade " << i + 1 << " (1-5):" << endl;
			cin >> num;

		} while (1 > num || num > 5);

		dependantVar += num;

	}


	dependantVar /= length;

	cout << "Average Grade: " << dependantVar << endl;

    system("pause>0");
}