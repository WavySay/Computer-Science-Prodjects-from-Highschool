#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "x, y: ";
    cin >> x >> y;

    int** table = new int*[x];

    for (int i = 0; i < x; i++)
    {
        table[i] = new int[y];
    }

    table[1][2] = 88;
    cout << table[1][2] << endl;

    for (int i = 0; i < x; i++)
    {
        delete[] table[i];
    }

    delete[] table;

    table = NULL;

    system("pause<0");
    return 0;
}

