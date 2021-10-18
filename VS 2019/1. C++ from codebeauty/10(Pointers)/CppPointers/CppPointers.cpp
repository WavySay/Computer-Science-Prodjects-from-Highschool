#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << &n << endl;

    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;   //dereferance the pointer in order to get value stored
    *ptr = 10;              //*ptr dereferances(changes) a specific memory location
    cout << *ptr << endl;
    cout << n << endl;      //n now has the value of ten without program saying "n = 5"

    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << "v = " << v << endl; //pointers can be use in various ways, this program is only to show their abilites

    system("pause>0");
    return 0;
}
