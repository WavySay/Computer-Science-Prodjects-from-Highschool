#include <iostream>
using namespace std;

class Instrument {
public:
	virtual void MakeSound() = 0;
};

class Accordion :public Instrument {
public:
	void MakeSound()
	{
		cout << "Accordian is playing..." << endl;
	}
};
class Piano :public Instrument {
public:
	void MakeSound()
	{
		cout << "Piano is playing..." << endl;
	}
};
int main()
{
    Instrument* i1 = new Accordion();
    //i1->MakeSound();
	Instrument* i2 = new Piano();
	//i2->MakeSound();

	Instrument* instrument[2] = {i1, i2};

	for (int i = 0; i < 2; i++)
	{
		instrument[i]-> MakeSound();
	}

    system("pause>0");
    return 0;
}