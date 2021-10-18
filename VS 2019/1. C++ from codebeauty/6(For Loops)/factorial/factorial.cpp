#include <iostream>
using namespace std;

int main()
{
    //let user input a number
    //then take the factorial of inputed number

    int num;
    int numDependant;

    cout << "Enter an integer to take the factorial of: ";
    cin >> num;
    numDependant = num;

    for (int i = 1; i < num; i++)
    {
        numDependant *= i;
    }

    //Remider: You can also start from the top number down

    cout << "The factorial of " << num << " is: " << numDependant << endl;

    system("pause>0");
}
