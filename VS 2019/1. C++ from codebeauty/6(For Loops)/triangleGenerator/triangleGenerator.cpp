#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //program will use inputs from user to make a triangle
    int lenght;
    char type;

    cout << "Intput Lenght: ";
    cin >> lenght;
    cout << "Enter symbol: ";
    cin >> type;
    cout << endl;


    //base down triangle
    for (int i = 1; i <= lenght; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << type;
        }
        cout << endl;
    }
 
    cout << endl;

    //Base up triangle
    for (int i = lenght; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << setw(2) << type;
        }
        cout << endl;
    }

    system("pause>0");
}
