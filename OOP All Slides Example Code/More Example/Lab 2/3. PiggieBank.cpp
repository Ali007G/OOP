#include<iostream>
using namespace std;

class piggiebank{
public:
    int amount=50;
    piggiebank(int i)
    {
        amount=amount+i;
    }
   void addamount(int j)
   {
       amount=amount+j;
   }
   friend void nonmember(int amount, int num);
};
void nonmember(int amount, int num)
{
    amount=amount+num;
    cout<<amount;
}
int main()
{
    piggiebank obj(10);
    obj.addamount(20);
    nonmember(obj.amount,30);
    return 0;
}
