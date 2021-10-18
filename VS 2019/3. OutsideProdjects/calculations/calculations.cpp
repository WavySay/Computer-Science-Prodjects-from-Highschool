#include <iostream>
using namespace std;

int main()
{
    double num = 100;
	for (int i = 0; i < 1000; i++)
	{
		num = (num + (num * .1));
		cout << num << endl;
		num = (num - (num * .1));
		cout << num << endl;
	}
}