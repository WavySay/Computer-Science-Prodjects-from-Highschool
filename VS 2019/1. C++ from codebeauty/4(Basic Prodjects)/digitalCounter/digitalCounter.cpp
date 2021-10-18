#include <iostream>
using namespace std;

int main()
{
    //counts digits of a number

    int num;
    int count = 0;

    cout << "Enter a integer: ";
    cin >> num;

    if (num < 0)
    {
        num *= -1;
    }
    if (num == 0)
    {
        cout << "*You have entered zero*" << endl;
    }
    else 
    {
        while (num > 0)
        {
            num /= 10;
            count++;
        }

        cout << count << endl;
    }

    system("pause>0");
}