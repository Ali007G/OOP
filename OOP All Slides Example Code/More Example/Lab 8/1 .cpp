#include<iostream>
using namespace std;

int main()
{
    int x;
    float y;
    double z;
    cin>>x>>y>>z;

    try
    {
     if(x==0)
        throw x;
     else if(y==0)
        throw y;
     else if(z==0)
        throw z;
    double mul=(double)x*y*z;
    cout<<"Multiplication is="<<mul;
    }
    catch(int x)
    {
        x=1;
       double mul=(double)x*y*z;
        cout<<"Multiplication is="<<mul;
     }
    catch(float y)
    {
        y=1;
       double mul=(double)x*y*z;
        cout<<"Multiplication is="<<mul;
     }
     catch(double z)
    {
        z=1;
        double mul=(double)x*y*z;
        cout<<"Multiplication is="<<mul;
     }
}
