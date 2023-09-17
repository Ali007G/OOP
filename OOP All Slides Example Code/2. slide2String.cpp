#include<iostream>
using namespace std;
class Geeks
{
public:                  // Access specifier
    string geekname;     // Data Members
    void printname()     // Member Functions
{
     cout << "Geekname is: " << geekname;
}
};
int main()
{
     Geeks obj1;               // Declare an object of class geeks
     obj1.geekname = "Abhi";   // accessing data member
     obj1.printname();         // accessing member function
}

