#include <iostream>
using namespace std;

int main()
{
    /*
    user will be asked to put a five letter string that 
    will be decifered into ascii by the use of only char type variables
    */

    char c1, c2, c3, c4, c5;
    cout << "Enter five characters: "; 
    cin >> c1 >> c2 >> c3 >> c4 >> c5;

    cout << "\nASCII of " << c1 << " is: " << int(c1) << endl;
    cout << "ASCII of " << c2 << " is: " << int(c2) << endl;
    cout << "ASCII of " << c3 << " is: " << int(c3) << endl;
    cout << "ASCII of " << c4 << " is: " << int(c4) << endl;
    cout << "ASCII of " << c5 << " is: " << int(c5) << endl;

    system("pause");
    return 0;

}