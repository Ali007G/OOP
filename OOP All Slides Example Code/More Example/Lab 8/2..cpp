#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    try
    {
        if(y!=0)
            throw y;
        else
            throw 'c';
    }
    catch(int a)
    {
        float div=(float)x/y;
        cout<<div;
    }
    catch(char c)
    {
        cout<<"Exception: Divisible by zero";
    }
    catch(...)
    {
        cout<<"Default case";
    }}
