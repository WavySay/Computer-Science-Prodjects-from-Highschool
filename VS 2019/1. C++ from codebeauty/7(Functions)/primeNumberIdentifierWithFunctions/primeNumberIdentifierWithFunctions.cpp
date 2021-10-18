#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool isNumPrime(int num);

int main()
{
    int length = 101;
    int count = 0;

    for ( int i = 2; i <= length; i++)
    {
        if (isNumPrime(i))
        {
            cout << i << endl;
            count++;
        }
    }
    cout << "There are " << count << " prime numbers from 1 to " << length << endl;
    system("Pause>0");
    return 0;
}

bool isNumPrime(int num) 
{
    //This if statment is to make negative numbers possible in the equation
    if (num < 0)
    {
        num * -1;
    }
    //This for loop is for the interval calculation
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false; //dont need variable in fuction because I can return immidiatly!
        }
    }
    return true;
}

/*
int main()
{
    int num;
    bool isNumPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    //This if statment is to make negative numbers possible in the equation
    if (num < 0)
    {
        num * -1;
    }
    //This for loop is for the interval calculation
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isNumPrime = false;
            break; //you can use break instead of "i = num;"
        }
    }
    //This is the print condition statment
    if (isNumPrime) //bool can be by its self "true == true" is weird
    {
        cout << "This is a prime number" << endl;
    }
    else
    {
        cout << "This is not prime" << endl;
    }
    system("Pause>0");
}
*/