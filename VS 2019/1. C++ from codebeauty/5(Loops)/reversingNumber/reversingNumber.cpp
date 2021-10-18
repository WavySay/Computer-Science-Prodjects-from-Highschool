#include <iostream>
using namespace std;

int main()
{
    //Reversing Number
    int num, reversenum=0;//0

    cout << "Enter an intiger: ";
    cin >> num;

    while (num != 0)
    {
        reversenum *= 10;
        reversenum += num % 10;
        num /= 10;

    }


    cout << reversenum << endl;
    system("pause>0");
}
