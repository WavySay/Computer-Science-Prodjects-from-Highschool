#include <iostream>
using namespace std;

int main()
{
    //binary atherimic operators: +, -, *, /, %
    cout << 5 + 2 << endl;//7
    cout << 5 / 2 << endl;//2
    cout << 5 % 2 << endl;//1

    //uniary atherimic operators: ++, --
    int counter = 7;

    cout << ++counter << endl; //"8" If the operator of incrament is behind the variable the operator will be done first
    cout << counter++ << endl; //"7" If the operator of incrament is behind the variable the operator will be done first
    cout << --counter << endl; //"6"
    cout << counter-- << endl; //"7"

    system("cls");

    //>,<,>=,<=,==,!=
    int a = 5, b = 5;
    cout << (a == b)<<endl;

    system("cls");

    //&&(and),||(or),!(not)
    cout << (a == 5 && b == 3 + 2) << endl;

    system("cls");

    //=,+=,-+,*=,/=,%=
    int x = 5;

    //x = x + 7;
    x += 7;

    cout << x << endl;

    system("pause");
    return 0;


}
