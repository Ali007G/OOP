#include<iostream>
using namespace std;

void func(string x)
{
      int i,temp=0;
      for(i=0;i<x.size()-1;i++)
      {
        if(x[i]>x[i+1])
         temp++;
       }
        if(temp==0)
          cout<<"true";
        else
          cout<<"false";
}
int main()
{
      string a;
      cin>>a;
      func(a);
      return 0;
}
