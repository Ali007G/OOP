// const
#include<iostream>
using namespace std;

class Something {
public:
    int m_value;
    void resetValue(){m_value=0;}
    void setValue(int value) {m_value=value;}

    int getValue() const {return m_value;}
};

int main()
{
    Something ob1;
    ob1.setValue(5);
    cout<< ob1.getValue();
}
