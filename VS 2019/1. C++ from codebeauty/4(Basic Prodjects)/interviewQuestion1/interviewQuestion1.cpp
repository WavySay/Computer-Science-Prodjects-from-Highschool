#include <iostream>
using namespace std;


int main()
{
    //Program for swapping values of two variables

    int a = 20, b = 10;
    int temp = a;
    a = b;
    b = temp;

    cout << "Value of a: " << a<< endl << "Value of b: " << b << endl;

    system("cls");

    //Program for swapping values of two variables without the use of a third variable
    
    a = 20, b = 10;

    a = a + b;//30
    b = a - b;//20
    a = a - b;//10

    cout << "Value of a: " << a << endl << "Value of b: " << b << endl;



    return 0;

}