#include<iostream>
using namespace std;

class StarWars {
public:
    int i;
    StarWars(int x)
    {
        i=x;
    }
    int falcon() const
    {
        cout<<"Falcon has left the Base\n";
    }
    int gamma()
    {
        i++;
    }
};

int main()
{
    StarWars objOne(10);
    // StarWars objTwo(20);
    const StarWars objTwo(20);

    objOne.falcon();
    objTwo.falcon();

    cout<< objOne.i << objTwo.i;

    objOne.gamma();
   // objTwo.gamma();
}
