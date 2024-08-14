#include<iostream>
using namespace std;
int main()
{ 
    cout<< "enter number of rows";
    int n,row,col;
    cin>> n;
    // for(row=0;row<n;row++)
    // {
        
    //     for(col=0;col<n;col++)//row , col n-1 tak he chlenge but 
    //     //occurance of number of space and star matters;
    //     {
    //         if(col>=n-1-row)
    //         {
    //             cout << "+ ";
            
    //         }
    //         else
    //         {
    //             cout <<" ";
    //         }
          
    //     }
    //         cout<<endl;
    // }
    // return 0;
     //method 2:
     for(int row=0;row < n; row++)
     {  //space loop
        for(int col =0 ; col<n-row-1; col++)
        {
            cout<<" ";
        }
        for(int col=0; col< row+1;col++)
        {
            cout <<"* ";
     }cout << "\n";
     }
     return 0;
}
