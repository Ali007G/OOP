/* Suppose we need to show, whether objects are created in successive order or reverse order.
   Write a program to demonstrate the concept and you must provide id of the object while creating it.
   Remember that, you must free the object memory beforing terminating the program.
*/

#include<iostream>
using namespace std;

class student
{
public:
    int id;
    student(int x)
    {
        id=x;
        cout<<"ID \n";
    }
    ~student()
    {
        cout<<"ID "<<id<<"\n";
    }
};
int main()
{
    student st1(1),st2(2),st3(3),st4(4);
    return 0;
}
