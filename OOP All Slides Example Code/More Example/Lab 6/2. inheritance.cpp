#include<iostream>
using namespace std;

class Person
{
public:
    void displayperson()
{
    cout<<"Person"<<endl;
}
};
class BaseballPlayer:public Person
{
public:
    void displayBaseballPlayer()
{
    cout<<"BaseballPlayer"<<endl;
}
};
class Employee:public Person
{
public:
    void displayEmployee()
{
    cout<<"Employee"<<endl;
}
};
class Supervisor:public Employee
{
public:
    void displaySupervisor()
{
    cout<<"Supervisor"<<endl;
}
};

int main()
{
    Supervisor ob1;
    ob1.displaySupervisor();
    ob1.displayEmployee();
    ob1.displayperson();
    cout<<endl;
    BaseballPlayer ob2;
    ob2.displayBaseballPlayer();
    ob2.displayperson();
  return 0;

}
