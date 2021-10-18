#include <iostream>
using namespace std;

int main()
{
    int luckyNums[5];

    /*
    cout << luckyNums << endl; //does same thing
    cout << &luckyNums[0] << endl;

    cout << luckyNums[2] << endl; //does same thing
    cout << *(luckyNums + 2) << endl;
    */
    for (int i = 0; i <= 4; i++)
    {
        cout << "Number: ";
        cin >> luckyNums[i];
    }
    for (int i = 0; i <= 5; i++) //should be 4! do not acsses mem not for you!
    {
        cout << *(luckyNums+i) << endl;
    }



    system("pause>0");
    return 0;
}
