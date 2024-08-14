#include<iostream>
using namespace std;
int main()
{
    // int num,row,i,j;
    // cout<< "enter number of rows"<<"\n";
    // cin>> num;
    // for(row=0;row < num; row++)
    // {
    //     for(i=0;i<num-row-1;i++)
    //     {
    //         cout<< " ";
    //     }
    //     for(j=0;j<(2*row)+1; j++)
    //     {
    //         if(row==num-1||j==0|| j==2*row)
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         {
    //             cout<<" ";
    //         }
    //     }
    //     cout<< endl;
    // }
    // return 0;
    int num,row,i,j;
    cout << " enter number of row";
    cin>> num;
    for(row=0; row<num;row++)
    {
        for(i=0;i<num-row-1;i++)
        {
             cout<<" ";
        }
        for(j=0;j<row+1;j++)
        {
            if(row==0 || row==num-1 || j==0 || j== row)
            cout<<"* ";
            else
            cout<<"  ";//double spacing (since ek star two space lerha first astrik then uske baad space;)

        }
        cout<<endl;

    }
    return 0;
}