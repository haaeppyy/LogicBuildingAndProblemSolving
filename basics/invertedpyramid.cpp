#include<iostream>
using namespace std;
int main()
{
    cout<<" enter number of rows"<<endl;
    int row;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row-i;j++)
        {
           if(i==0||j==0||j==row-i-1)
           {
                cout<<"+";
           }
           else
           {
                cout<<" ";
           }
        }
        cout<<"\n";
    }
    return 0;
}