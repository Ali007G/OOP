#include<iostream>
using namespace std;

int info(int x)
throw(int,char,double)
{
    if(x>0)
        throw x;
    else
        throw 'c';
}
int main()
{
    int a;
    cin>>a;
    try
    {
          info(a);
    }
    catch(int a)
    {
        cout<<"Number is positive";
    }
    catch(char c)
    {
        cout<<"Error...";
    }
}
