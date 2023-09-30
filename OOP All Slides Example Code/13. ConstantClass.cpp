#include<iostream>
using namespace std;

class Something {

public:
    int m_value;
    Something()
    {
        m_value=0;
    }
    void setvalue(int value)
    {
        m_value=value;
    }
    int getvalue()
    {
        return m_value;
    }
};

int main()
{
    const Something something;
    cout<<something.m_value;
   // something.m_value=5;
   // something.setvalue(5);
    return 0;
}
