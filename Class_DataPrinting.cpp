/*
Write a C++ Class Template with two data members a and b and two member functions 
to read and display the data members. 
*/

#include <iostream>
#include <string>

using namespace std;

template <class T, class U>
class Read_Display
{
    T a;
    U b;

    public:
    void Read()
    {
        cout << "Enter First Element :: ";
        cin >> a;

        cout << "Enter Second Element :: ";
        cin >> b;
    }

    T Display()
    {
        cout << "a = " << a << "\n";
        cout << "b = " << b << "\n\n";

        return 0;
    }
};


int main()
{
    Read_Display <int, double> n1;
    n1.Read();
    cout << "\n";
    Read_Display <double, string> n2;
    n2.Read();
    cout << "\n";
    Read_Display <int, string> n3;
    n3.Read();
    cout << "\n";
    n1.Display();
    n2.Display();
    n3.Display();

    return 0;
}