#include <iostream>
using std::cout;
using std::endl;

const int length = 100000000;

int main()
{
    bool doesNumGetToOne = true;

    for (int i = 138368; i < length; i++)
    {
        int num = i;
        cout << num << ": ";
        do
        {
            if (num % 2 == 0)
            {
                num /= 2;
            }
            else
            {
                num = 3 * (num) + 1;
            }

        } while (num != 1);
         cout << doesNumGetToOne << " ";
        if (i % 10 == 0)
        {
            cout << endl;
        }
    }

    system("pause>0");
    return 0;
}
