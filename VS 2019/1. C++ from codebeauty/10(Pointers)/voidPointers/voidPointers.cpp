#include <iostream>
using namespace std;

void printNum(int* numPtr);
void printltr(char* ltrPtr);
void print(void* ptr, char type);

int main()
{
    int num = 5;
    char ltr = 'a';
    //printNum(&num);
    //printltr(&ltr);
    print(&num, 'i');
    print(&ltr, 'c');

    system("pause>0");
    return 0;
}

void printNum(int* numPtr)
{
    cout << *numPtr << endl;
}
void printltr(char* ltrPtr)
{
    cout << *ltrPtr << endl;
}
void print(void* ptr, char type) 
{
    switch (type)
    {
    case 'i': cout << *((int*)ptr) << endl; break; //expresion casts void pointer into int pointer
    case 'c': cout << *((char*)ptr) << endl; break;
    }
    
}