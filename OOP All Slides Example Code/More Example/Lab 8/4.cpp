#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    try
    {
        if(x!=0&&y!=0)
        {
            if(x>y)
                throw x;
            else
                throw 'c';
        }
        cout<<"One number is zero";
    }
    catch(int x)
    {
        float div=(float)x/y;
        cout<<div;
    }
    catch(char c)
    {
        float div=(float)y/x;
        cout<<div;
    }}
