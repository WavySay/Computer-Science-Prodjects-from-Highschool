#include <iostream>
using namespace std;

int main()
{
    //write out all numbers between 100 and 500 that are divisable
    //by 3 and 5

    int num = 100;
    while (num <= 500)
    {
        bool numisdivisable;
        if ((num % 3 == 0) && (num % 5 == 0))
            numisdivisable = true;
        else
            numisdivisable = false;
        if (numisdivisable == true)
            cout << num << endl;
        num++;
    }

    system("pause>0");
}
