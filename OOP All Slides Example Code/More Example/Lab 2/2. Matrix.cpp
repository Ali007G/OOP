#include<iostream>
using namespace std;

class matrix
{
    int i,j,k;
public:
    matrix(int x,int y)
    {
     int a[x][y], mul[x][y];
        for(i=0;i<x;i++)
           for(j=0;j<y;j++)
     {
        cout<<"Enter a["<<i+1<<"]["<<j+1<<"] element: ";
        cin>>a[i][j];
       }
        for(i=0;i<x;i++)
            for(j=0;j<y;j++)
         {
                mul[i][j]=0;
                for(k=0;k<y;k++)
                mul[i][j]+=a[i][k]*a[k][j];
            }
           cout<<"\n-square matrix:\n";
            for(i=0;i<x;i++)
         {
                for(j=0;j<y;j++)
           {
                cout<<"\t"<<mul[i][j];
            }
          cout<<"\n";
        }
    }
};
int main()
{
    int r,c;
    cout<<"Enter the number of row: ";
    cin>>r;
    cout<<"Enter the number of column: ";
    cin>>c;
    matrix obj(r,c);
    return 0;
}
