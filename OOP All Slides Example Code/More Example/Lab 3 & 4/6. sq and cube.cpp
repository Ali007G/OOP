#include<iostream>
using namespace std;

void area(int a)
{
    int square;
    square= a*a;
    cout<< square<< "\n";
}
void print(int b)
{
    int cube;
    cube=(b*b*b);
    cout << cube<< "\n";
}

int main()
{
        area(4);
        print(3);
    return 0;
}
