/* Suppose, you want to deposit some amount in your account. But initially, the amount must be 500 taka.
Then you will deposit your desired amount. You may consider bank class and
you need to create object of the bank class to perform the action.
*/

#include<iostream>
using namespace std;

class bank {
public:
      int amount=500;
      void deposit(int x)
    {
        amount=amount+x;
    }
};

int main()
{
    bank ob;
    ob.deposit(3000);
    cout<<ob.amount;

    return 0;
}

