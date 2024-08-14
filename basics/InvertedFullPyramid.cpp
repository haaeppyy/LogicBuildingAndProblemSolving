#include<iostream>
using namespace std;
int main()
{
    cout<< "enter rows";
    int n,col,row;
    cin >> n;
  for(row=0;row<n;row++)
    {
        //sirf inner loop reverse ;
        for(col=n;col>0;col--)//row , col n-1 tak he chlenge but 
        //occurance of number of space and star matters;
        {
            if(col<=n-1-row)
            {
                cout << "+ ";
            
            }
            else
            {
                cout <<" ";
            }
          
        }
            cout<<endl;
    }
    return 0;
}