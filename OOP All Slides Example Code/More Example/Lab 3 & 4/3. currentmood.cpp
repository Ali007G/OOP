#include<iostream>
using namespace std;

void abc()
{
    cout<<"Today, I am feeling neutral\n";
}
void abc(string x)
{
    cout<<"Today, I am feeling "<<x;
}
int main()
{
    string a;
    cout<<"moodToday ";
    cin>>a;
    if(a=="happy" || a=="sad")
    abc(a);
    else
        abc();
    return 0;
}
