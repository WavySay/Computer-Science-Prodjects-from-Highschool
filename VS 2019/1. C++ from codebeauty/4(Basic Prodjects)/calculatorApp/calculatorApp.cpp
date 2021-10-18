#include <iostream>
using namespace std;

int main()
{

    float num1, num2;
    char operation;

    cout << "Osay's Calculator**" << endl;
    cin >> num1 >> operation >> num2;
    switch (operation)
    {
    case '-': cout << num1 << operation << num2 << "=" << num1 - num2 << endl; break;
    case '+': cout << num1 << operation << num2 << "=" << num1 + num2 << endl; break;
    case '*': cout << num1 << operation << num2 << "=" << num1 * num2 << endl; break;
    case '/': cout << num1 << operation << num2 << "=" << num1 / num2 << endl; break;
    case '%':
        bool isnum1int, isnum2int;
        isnum1int = ((int)num1 == num1);
        isnum2int = ((int)num2 == num2);
        if (isnum1int && isnum2int)
            cout << num1 << operation << num2 << "=" << ((int)num1 % (int)num2);
        else
            cout << "*NOT VALID*" << endl;
        break;
    default: cout << "Not valid operation!" << endl;
    }


    system("pause>0");
    return 0;
}
