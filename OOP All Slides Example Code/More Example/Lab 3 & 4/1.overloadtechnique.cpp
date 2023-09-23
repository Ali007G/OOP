#include<iostream>
using namespace std;

class obj{
public:
    int c=5;

    void operator ++()
    {

       cin>> c;
    }
    void operator --()
    {
        cout<< c;
    }
    void func()
    {
        cout<<c;
    }
};
int main()
{
    obj ob;
    ++ ob;
    -- ob;
   ob.func();
}
