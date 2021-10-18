#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int num = 1241055674;
    int count = 0;
    do
    {
        count++;
        cout << num << ", ";
        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num = 3 * (num) + 1;
        }
        if (count == 10)
        {
            count = 0;
            cout << endl;
        }

    } while (num != 1);


    system("pause>0");
    return 0;
}