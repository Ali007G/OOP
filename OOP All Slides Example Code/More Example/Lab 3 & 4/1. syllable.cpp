#include<iostream>
using namespace std;

void count(string x)
{
    int i,countA=0;
    for(i=0;i<100;i++)
    {
        if(x[i]=='-')
            countA++;
    }
    cout<<countA+1;
}

int main()
{
    string a;
    cin>> a;
    count(a);
    return 0;
}
