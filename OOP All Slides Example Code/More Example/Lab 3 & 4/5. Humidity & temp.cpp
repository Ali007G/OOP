#include<iostream>
using namespace std;

void func(double x,double y)
{
    cout<<"\nThe humidity of Cumilla region is "<<x;
    cout<<"\nThe temperature of Cumilla region is "<<y<<"\n";
}

int main()
{
    double humidity,temperature;
    cout<<"Enter the humidity: ";
    cin>>humidity;
    cout<<"Enter the temperature: ";
    cin>>temperature;
    func(humidity,temperature);
 return 0;
}

