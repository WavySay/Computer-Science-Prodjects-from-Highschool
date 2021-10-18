#include <iostream>
using namespace std;

//int getMin(int arrayOfNum[], int size);
//int getMax(int arrayOfNum[], int size);
void getMinAndMax(int arrayOfNum[], int size, int* min, int* max);

int main()
{
    int arrayOfNum[5] = {5,4,-2,29,6};
    int min = arrayOfNum[0];
    int max = arrayOfNum[0];

    /*cout << "Max is " << getMax(arrayOfNum, 5) << endl;
    cout << "Min is " << getMin(arrayOfNum, 5) << endl;*/

    getMinAndMax(arrayOfNum, 5, &min, &max);
    cout << "Min: " << min << ", Max: " << max << endl;

    system("pause>0");
    return 0;
}
/*
int getMax(int arrayOfNum[], int size)
{
    int max = arrayOfNum[0];
    for (int i = 1; i < size; i++)
    {
        if (arrayOfNum[i] > max)
        {
            max = arrayOfNum[i];
        }
    }
    return max;
}
int getMin(int arrayOfNum[], int size)
{
    int min = arrayOfNum[0];
    for (int i = 1; i < size; i++)
    {
        if (arrayOfNum[i] < min)
        {
        min = arrayOfNum[i];
        }
    }
    return min;
}*/
void getMinAndMax(int arrayOfNum[], int size, int* min, int* max)
{
    for (int i = 1; i < size; i++)
    {
        if (arrayOfNum[i] < *min)
        {
            *min = arrayOfNum[i];
        }
        if (arrayOfNum[i] > *max)
        {
            *max = arrayOfNum[i];
        }
    }
}