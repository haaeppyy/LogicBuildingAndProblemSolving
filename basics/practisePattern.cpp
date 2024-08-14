#include<iostream>
using namespace std;
int main()
{
    int n,toprint=1;
    cout<<"enter number of rows";
    cin>> n;
    for(int row=0; row < n; row++)
    {   
        toprint=1;
        for(int col=0; col <=row ; col++)
        {
            if(col==0 || col==row || row ==1 || row == n-1)
            {
                cout << toprint;
                
            }
            else
            {
                cout <<" ";
            }
            toprint++;
        }
        cout << endl;
    }
    return 0;
}