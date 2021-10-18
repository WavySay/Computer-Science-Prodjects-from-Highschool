#include <iostream>
using namespace std;

//user enters side lenghts of a triangle (a,b,c)
//program displays weahther it is a equalateral, scalene, or isoceles

int main()
{

    float a=0, b=0, c=0;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;

    /*
    Program starts with the extreams of the 
    triangle possibilites (equalateral and scalene)
    and assumes the rest.
    */

    if(a != b && b != c && c != a)
    {    
        cout << "This is an scalene triangle" << endl;
    }
    else if(a == b && b == c)
    {
        cout << "This is an equalateral triangle" << endl;
    }
    else
    {
        cout << "This is and isoceles triangle" << endl;
    }

    system("pause");
    return 0;
}
