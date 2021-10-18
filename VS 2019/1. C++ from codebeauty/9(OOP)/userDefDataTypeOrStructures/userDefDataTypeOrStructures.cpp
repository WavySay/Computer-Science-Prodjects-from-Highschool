#include <iostream>
using namespace std;

struct smartPhone
{
    string name;
    int storageSpace;
    string color;
    float price;
};
struct person
{
    string name;
    int age;
    smartPhone phone;
};

void printInfo(smartPhone phone);
void printPerson(person p);

int main()
{
    smartPhone phone;
    phone.name = "iPhone 12";
    phone.storageSpace = 64;
    phone.color = "blue";
    phone.price = 999.99;
    smartPhone phone2;
    phone2.name = "iPhone 8";
    phone2.storageSpace = 32;
    phone2.color = "black";
    phone2.price = 230.49;

    //printInfo(phone);
    //cout << endl;
    //printInfo(phone2);

    person p;
    p.name = "osay";
    p.age = 17;
    p.phone = phone;

    printPerson(p);

    system("pause>0");
    return 0;
}
void printPerson(person p)
{
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    printInfo(p.phone);

}
void printInfo(smartPhone phone)
{
    cout << "Name: " << phone.name << endl;
    cout << "Storage Space: " << phone.storageSpace << endl;
    cout << "Color: " << phone.color << endl;
    cout << "Price: " << phone.price << endl;
}
