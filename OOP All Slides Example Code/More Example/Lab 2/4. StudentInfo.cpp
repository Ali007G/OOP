#include<iostream>
using namespace std;

class Student{
     int id;
     string name;
public:
    Student(int i, string n)
    {
        id=i;
        name=n;
        cout<< i <<" "<< n <<"\n";
    }
    static void print()
      {
          cout<<"BAIUST"<<endl;
      }
};

int main()
 {
     Student::print();
     Student st1(1111015,"Kafi");
     Student st2(1111007,"Ali");
     Student st3(1111003, "Faiza");

     return 0;
 }

