#include<iostream>
using namespace std;

class Chainshop
{
public:
    virtual void updatelocation()
    {
        cout<<"Location from Chainshop"<<endl;
    }
};
class Meenabazar:public Chainshop
{
public:
    void updatelocation()
    {
        cout<<"Location from Meenabazar"<<endl;
    }
};
int main()
{
    Chainshop *c,obj1;
    obj1.updatelocation();

    Meenabazar M;
    c=&M;
    c->updatelocation();
    return 0;
}
