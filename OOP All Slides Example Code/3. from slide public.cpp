#include<iostream>
using namespace std;

class student{
 public:
    int rollno;
    string name;
};

int main()
{
    student A;
    student B;

    A.rollno= 1;
    A.name=" adam";
    B.rollno= 2;
    B.name=" bella";

    cout<<"Name and Roll of A is" << A.name<<"-"<<A.rollno;
   //cout<<"Name" << A.name<<"-"<<"Roll No "<< A.rollno;
    cout<<"\nName and Roll of B is"<< B.name<<"-"<<B.rollno;
}

