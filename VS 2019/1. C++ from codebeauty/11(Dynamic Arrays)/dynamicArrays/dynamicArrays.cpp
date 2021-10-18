#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter a size: ";
    cin >> size;
    //int myArray[size];
    int* myArray = new int[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Array: " << "[" << i << "] " << endl;
        cin >> myArray[i];
    }
    for (int i = 0; i < size; i++)
    {
        //cout << myArray[i] << " ";
        cout <<  *(myArray + i) << " ";
    }

    //Always delete dynamic arrays after runtime is finished
    delete[]myArray;
    myArray = NULL;

    system("pause>0");
    return 0;
}