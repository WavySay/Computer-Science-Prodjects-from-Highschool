#include <iostream>
using namespace std;

class SmartPhone
{
    //abstraction allows functionalities to be used
    //without knowing the specific details
public:
	virtual void TakeASelfie() = 0;
    virtual void MakeACall() = 0;
};

class Android:public SmartPhone
{
public:
    void TakeASelfie()
    {
        cout << "Android selfie taken...";
    }
    void MakeACall()
    {
        cout << "Android calling...";
    }
};
class Apple :public SmartPhone
{
public:
    void TakeASelfie()
    {
        cout << "Apple selfie taken...";
    }
    void MakeACall()
    {
        cout << "Apple calling...";
    }
};
int main()
{
    SmartPhone* s1 = new Apple();
    s1->MakeACall();

    system("pause>0");
    return 0;
}