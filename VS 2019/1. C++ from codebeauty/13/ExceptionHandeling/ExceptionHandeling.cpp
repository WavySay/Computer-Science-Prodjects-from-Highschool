#include <iostream>
#include <string>
using namespace std;

class Printer
{
private:
    string _name;
    int _avaliblePaper;
public: 
    Printer(string name, int paper)
    {
        _name = name;
        _avaliblePaper = paper;
    
    }
    void Print(string txtDoc)
    {
        int requieredPaper = txtDoc.length() / 10;// 40/10 = 4

        if (requieredPaper > _avaliblePaper)
            throw 101;

        cout << "Printing..." << txtDoc << endl;

        _avaliblePaper -= requieredPaper;
    }
};

int main()
{
    // Program with constructor class to demonstrate exception handeling
    Printer myPrinter("HP deskjet 1234", 10);
    try 
    {
        myPrinter.Print("Hello the Name's Osayy! I am a software engineer");
        myPrinter.Print("Hello the Name's Osayy! I am a software engineer");
        myPrinter.Print("Hello the Name's Osayy! I am a software engineer");
    }
    catch (const char* txtException) 
    {
        cout << "Exception: " << txtException << endl;
    }
    catch (int exCode)
    {
        cout << "Exception: " << exCode << endl;
    }
    catch (...)
    {
        cout << "exception handled" << endl;
    }
    system("Pause>0");
    return 0;
}