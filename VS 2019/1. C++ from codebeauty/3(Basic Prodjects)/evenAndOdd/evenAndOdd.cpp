#include <iostream>
using namespace std;

//User enters integer number
//The number"s property of even or odd is returned

int main()
{
    float num;
    int intnumQ;
    float dubnumQ;

    cout << "Input an integer: ";
    cin >> num;

    intnumQ = num / 2;
    dubnumQ = num / 2;

    if (dubnumQ - intnumQ == 0)
    {

        cout << "Your number is even."<< endl << endl;


    }
    else
    {
        cout << "Your number is odd."<< endl << endl;
    }
    
    system("pause");
    return 0;

}
