#include <iostream>
using namespace std;

void introduction(string name, string city, int age=0);


int main()
{
    // This is a basic program made to test functions
    string name, city;
    int age;
    cout << "Enter a name: ";
    cin >> name;
    cout << "Enter a city: ";
    cin >> city;
    cout << "Enter an age: ";
    cin >> age;
    
    introduction(name, city, age);
    
    
    //introduction("Osay", "Kcitayyy", 17);
    //introduction("Bad Boy", "Ireland");

    system("Pause>0");
}


void introduction(string name, string city, int age)
{
    cout << "My name is " << name << endl;
    cout << "I live in " << city << endl;
    if (age != 0)
        cout << "And I am " << age << " years old!"<< endl;
}