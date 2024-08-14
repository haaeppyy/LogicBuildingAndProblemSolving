#include<iostream>
using namespace std;
int main()
{ 
    cout<< "enter number of rows";
    int n,row,col,t=0;
    cin>> n;
    for(row=0;row<n;row++)
    {
        t=0;
        for(col=0;col<row+1;col++)
        {
            t++;
            cout<< t<<" ";
        }
        cout<< "\n";
    }
    return 0;
     
}