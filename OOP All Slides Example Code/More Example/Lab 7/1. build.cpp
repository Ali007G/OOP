#include<iostream>
using namespace std;

class building {
    public:
    int floors;
    int rooms,door,windows;
    int area;
};

class house:public building {
public:
    void print1(int n)
    {
        rooms=n;
        cout<<"Number of room: "<<rooms<<endl;
    }
};

class flat:public house {
public:
    void print2(int a,int b)
    {
        door=a;
        windows=b;
        cout<<"The number of windows and door: "<<windows<<" "<<door<<endl;
    }
};

int main()
{
    flat obj;
    obj.print1(4);
    obj.print2(6,7);

    return 0;
}
