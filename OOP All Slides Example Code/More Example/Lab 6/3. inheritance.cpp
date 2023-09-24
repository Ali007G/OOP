#include<iostream>
using namespace std;

class area
{
public:
    int a,b,area;
};
class triangle:public area
{
public:
    void showarea()
{
    area=(a*b)/2;
    cout<<"The triangle area is = "<<area<<endl;
}
};
class rectangle:public area
{
public:
    void showarea()
{
    area=a*b;
    cout<<"The rectangle area is = "<<area<<endl;
}
};
class square:public rectangle
{
public:
    void showarea()
{
    area=a*a;
    cout<<"The square area is = "<<area<<endl;
}
};
int main()
{
    triangle A;
    A.a=12;
    A.b=10;
    A.showarea();
    cout<<endl;
    rectangle B;
    B.a=15;
    B.b=12;
    B.showarea();
    cout<<endl;
    square C;
    C.a=7;
    C.showarea();
return 0;
}
