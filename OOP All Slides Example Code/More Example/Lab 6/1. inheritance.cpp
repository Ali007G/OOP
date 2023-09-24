#include<iostream>
using namespace std;

class grandfather
{
public:
    string name;
    void showgrandfathername()
{
    cout<<"My grandfather name is Haider Ali"<<endl;
    }
};
class father:public grandfather
{
public:
    void showfathername()
{
    cout<<"My father name is Md Nurul Islam"<<endl;
}
};
class me:public father
{
public:
    void showmyname()
{
    cout<<"My name is "<<name<<endl;
}
};
class mysibling:public father
{
public:
    void showmysiblingname()
 {
    cout<<"My name is "<<name<<endl;
}
};
int main()
 {
    me obj1;
    obj1.name="Ali";
    obj1.showmyname();
    obj1.showfathername();
    obj1.showgrandfathername();
    cout<<endl;
    mysibling obj2;
    obj2.name="Faiaz";
    obj2.showmysiblingname();
    obj2.showfathername();
    obj2.showgrandfathername();
  return 0;
}
