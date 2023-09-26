#include<iostream>
using namespace std;

 class A
{
public:
    int id;

};

 class B:virtual public A
{
public:
    virtual void showh()
    {
        cout<<"Class B id: "<<id<<endl;
    }
};

class C:virtual public A
{
public:
     virtual void showh()
    {
        cout<<"Class C id: "<<id<<endl;
    }
};

class D:public B,public C
{
public:
     void showh()
    {
        cout<<"Class D id: "<<id<<endl;
    }
};

int main()
{
    B*b,obj;
    obj.id=3;
    obj.showh();

    C ob;
    ob.id=7;
    ob.showh();

    D d;
    b=&d;
    b->id=15;
    b->showh();

    return 0;
}
