#include <iostream>
using namespace std;


//Generics project
template<typename T>

void Swap(T& a, T& b) //& is to pass by referance
{
    T temp = a;
    a = b;
    b = temp;
}

//void swap(T& a, T& b); //& is to pass by referance
int main()
{
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap<int>(a, b);//the "<int>" is not manditory if specifided already
    cout << a << " - " << b << endl;

    char c = 'c', d = 'd';
    cout << c << " - " << d << endl;
    Swap<char>(c, d);
    cout << c << " - " << d << endl;

    system("pause>0");
    return 0;
}
