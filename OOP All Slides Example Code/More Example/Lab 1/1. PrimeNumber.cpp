/* 1. Write a program to find out whether a number is prime
      or not given by the user. Please use class and object concepts.
*/

#include<iostream>
using namespace std;

class primeN{
public:
    int n,i;
    int num()
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                cout<<"not prime";
                exit(0);
            }
        }
        cout<<"prime";
    }
};
int main()
{
    primeN ob;
    int a;
    cin>>ob.n;
    a=ob.num();
    return 0;
}

