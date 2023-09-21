#include<iostream>
using namespace std;

class Chainshop
{
public:
  //  int ID;
    Chainshop()
    {
        cout<<"Chainshop"<<endl;
    }
};

class Shopno:public virtual Chainshop
{
public:
    Shopno()
    {
        cout<<"Shopno"<<endl;
    }

};
class Meenabazar:public virtual Chainshop
{
public:
    Meenabazar()
    {
        cout<<"Meenabazar"<<endl;
    }
};
class Groccery:public Shopno,public Meenabazar
{
public:
    Groccery()
    {
        cout<<"Grocecery"<<endl;
    }
};

int main()
{
    Groccery object;
    return 0;
}
