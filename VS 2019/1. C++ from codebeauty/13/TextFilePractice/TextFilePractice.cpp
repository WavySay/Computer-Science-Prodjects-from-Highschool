#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream myFile;
    //myFile.open("osay.txt", ios::out);//write
    //if (myFile.is_open())
    //{
    //    myFile << "it is open..." << endl;
    //    myFile << "it is open... hehe" << endl;
    //    myFile.close();

    //}
    //myFile.open("osay.txt", ios::app);//append
    //if (myFile.is_open())
    //{
    //    myFile << "it is open... hehe2" << endl;
    //    myFile.close();
    //}
    myFile.open("osay.txt", ios::in);//read
    if (myFile.is_open())
    {
        string line;
        while (getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
    }
    system("pause>0");
    return 0;
}