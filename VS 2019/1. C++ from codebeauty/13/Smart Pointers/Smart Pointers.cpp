#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "Constructor is envoked" << endl;
    }
	~MyClass() 
    {
        cout << "Constructor is destroyed" << endl;
    }

};

int main()
{
    //unique_ptr<int>unPtr1 = make_unique<int>(25);
    /*cout << unPtr1 << endl;
    cout << *unPtr1 << endl;*/

    //Unique Pointers cannot be shared but can be moved
    //previous owner of pointer becomes null pointer
    //unique_ptr<int>unPtr2 = move(unPtr1);
    /*cout << *unPtr2 << endl;
    cout << *unPtr1 << endl;*/

    /*{
        unique_ptr<MyClass>unPtr1 = make_unique<MyClass>();
    }*/

    shared_ptr<MyClass>shptr1

    system("pause>0"); 
    return 0;
}