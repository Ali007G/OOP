/* Again, you have a class named uni where we have some students' info like name, id, phone number, and address.
   You need to save information for individual students and
   you need to print the university name each time you do so.
*/

#include<iostream>
using namespace std;

class uni{
public:
        string name;
        int id;
        long long phone;
        string address;
        uni(string n,int i,long long p,string a)
    {
         name=n;
         id=i;
         phone=p;
         address=a;
         cout<<"BAIUST.."<< n <<" "<<i<<" "<<p<<" " <<a <<" \n";
    }
};
 int main()
 {
     uni ob1(" \nKAFI", 1015,162363,"Bakhrabad_Cumilla");
     uni ob2(" \nAli", 1007,152135,"Housing_Cumilla");
     uni ob3(" \nFaiza", 1003,925738,"Mogoltuli_Cumilla");
   return 0;
 }

