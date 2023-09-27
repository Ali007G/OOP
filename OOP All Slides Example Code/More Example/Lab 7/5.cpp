/* Shape class method to calculate area and child class named rectangle has also the same
   method to calculate area of any rectangle. Write program where Shape class is abstract
   class.
*/

#include<iostream>
using namespace std;

class shape {
public:
    int length,width,area;
    shape(int l,int w)
    {
        length=l;
        width=w;
    }
    virtual void print_area()=0;
};

class rectangle:public shape {
public:
    int area;
    rectangle(int l,int w):shape(l,w){}

    void print_area()
    {
        area=length*width;
        cout<<"Area is= "<<area<<endl;
    }
};

int main()
{
    shape *s;
    rectangle obj1(28,7);
    s=&obj1;
    s->print_area();

    return 0;
}
