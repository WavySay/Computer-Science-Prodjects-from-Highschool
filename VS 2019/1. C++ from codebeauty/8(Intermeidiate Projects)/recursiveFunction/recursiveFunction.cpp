#include <iostream>
using namespace std;

int recursive_sum(int m, int n);
int main()
{
    //add numbers from user specified range together
    int m = 1, n = 4;
    
    cout << "The sum of your range of numbers is: " << recursive_sum(m,n) << endl;

    
    /*int sum = 0;
    for (int i = m; i <= n ; i++)
    {
        sum += i;
    }

    cout << "The sum of your range of numbers is: " << sum << endl;
    
    system("pause>0");
    return 0;
    */
}
int recursive_sum(int m, int n)
{
    if (m == n)
        return m;
    return m + recursive_sum(m + 1, n);

}