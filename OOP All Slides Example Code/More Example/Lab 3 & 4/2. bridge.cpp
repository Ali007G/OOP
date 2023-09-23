#include<iostream>
using namespace std;

int func(string x)
{
    int i,countA=0;
    for(i=0;i<x.size();i++)
    {
        if(x[i]!='#')
           countA++;
    }
   if(countA==0)
        cout<<"true";
    else
       cout<<"false";
       return 0;
}
int main()
{
    string a;
    cin>> a;
    func(a);
    return 0;
}
