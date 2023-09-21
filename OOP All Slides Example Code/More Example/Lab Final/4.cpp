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
    Chainshop *c,obj;
    obj.updatelocation();

    Meenabazar m;

    c=&m;
    c->updatelocation();

    return 0;
}
