#include<iostream>
using namespace std;

class shape{
public:
    int square;
    int rectangle;
  void operator ++(int square)
    {
       cin>> square;
    }
    void operator ++(int l, int w)
    {
        cin>> l>> w;
    }
    void func()
    {
        square=a*a;
        rectangle=l*w;
        cout<< area;
        cout<< area;
    }
};
int main()
{
    shape ob1;
    ++ob;
   ob.func();
}

