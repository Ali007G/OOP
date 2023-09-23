#include<iostream>
using namespace std;

void print(double a, int b)
{
    double square;
    square= a*a;
   cout<< square<< "\n";
   int cube;
    cube=(b*b*b);
    cout << cube<< "\n";
}

int main()
{
             print(2.5);
             print(3.5);

             return 0;
}
