#include <iostream>
#include <Queue>
using namespace std;

//This is a simple note about queue functions
//which are used for ordered lists.

void PrintQueue(queue<int>);
int main()
{
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    cout << myQueue.size() << endl;
    cout << myQueue.front() << endl;
    cout << myQueue.back() << endl << endl;
    
    PrintQueue(myQueue);
}
void PrintQueue(queue<int> myQueue)
{
    while (!myQueue.size() == 0)
    {
        cout << myQueue.front() << endl;
        myQueue.pop();
    }
}