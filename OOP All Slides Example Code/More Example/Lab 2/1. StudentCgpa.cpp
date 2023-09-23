#include<iostream>
using namespace std;

class student1{
private:
    float s1;
public:
    float getcgpa()
    {
        return s1;
    }
    void setcgpa1(float x)
    {
        s1=x;
    }
    friend float High_CGPA();
};
class student2{
private:
    float s2;
public:
    float getcgpa()
    {
        return s2;
    }
    void setcgpa2(float y)
    {
        s2=y;
    }
    friend float High_CGPA();
};
float High_CGPA()
{
    student1 ob1;
    float x;
    cin>> x;
    ob1.setcgpa1(x);
    student2 ob2;
    float y;
    cin>> y;
    ob2.setcgpa2(y);
    if(x>y)
        cout<< "positive";
    else if(x<y)
        cout<< "negative";
    else
        cout<< "0";
    return 0;  }
int main()
{
    High_CGPA();
    return 0;
}
