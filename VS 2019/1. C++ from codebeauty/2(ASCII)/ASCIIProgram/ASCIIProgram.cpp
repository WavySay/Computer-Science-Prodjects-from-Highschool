#include <iostream>
using namespace std;

//testing to se the relationsip between ASCII and characters
int main()
{
    //chararter to number
    cout << (int) 'a' << endl;
    cout << int('a') << endl;

    cout << (int)'A' << endl;
    cout << int('A') << endl;

    //number to charater
    cout << char(64) << endl;
    cout << char(56) << endl;
    cout << char(100) << endl;

    return 0;
}
