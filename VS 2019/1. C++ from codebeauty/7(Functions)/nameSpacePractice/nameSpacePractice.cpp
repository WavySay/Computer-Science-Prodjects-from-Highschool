#include <iostream>
using std::cout;
using std::endl;
using std::string;
//using namespace std; 
//"using namespace std" is considered a bad practice because it includes hundreds of unessasry tools.


namespace namespace1
{

    int age = 25;
    string name = "Osay";

}
namespace namespace2
{

    int age = 26;

}

int main()
{
    cout << namespace2::age << endl;
    cout << namespace1::name << endl;

    system("Pause>0");
}
