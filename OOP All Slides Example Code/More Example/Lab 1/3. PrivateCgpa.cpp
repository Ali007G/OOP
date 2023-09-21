/* A class named student has private information named cgpa.
   But I want to the cgpa from the main function.
   Write a program to solve the problem.
*/
#include<iostream>
using namespace std;

class student{
private:
    float cgpa;

public:
    float getCgpa()
    {
        return cgpa;
    }
   void setCgpa(float i)
    {
        cgpa=i;
    }
};
int main()
 {
     student Ali;
     Ali.setCgpa(3.87);
     cout<<Ali.getCgpa();

     return 0;
}

