#include <iostream>
using namespace std;

int main()
{
    //program will use inputs from user to make a rectangle of that dimension 
    int hgt;
    int lnt;
    char type;

    cout << "Intput Hight: ";
    cin >> hgt;
    cout << "Intput Lenght: ";
    cin >> lnt;
    cout << "Enter symbol --> ";
    cin >> type;

    cout << endl;

    for (int i = 0; i < hgt; i++)
    {
        for (int j = 0; j < lnt; j++)
        {
            cout << " " << type << " ";
        }
        cout << endl;
    }

    system("pause>0");
}
