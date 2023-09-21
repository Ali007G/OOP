#include<iostream>
using namespace std;

class Shopno
{
public:
    int tea,coffee;
    Shopno()
    {
        tea=0;
        coffee=0;
    }
    Shopno(int a,int b)
    {
        tea=a;
        coffee=b;
    }
    void show()
    {
        cout<<tea<<"\t"<<coffee<<endl;
    }
};
int main()
{
    Shopno obj1,obj2(7,28);
    obj1.show();
    obj2.show();
    return 0;
}
