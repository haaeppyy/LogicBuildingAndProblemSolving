#include<iostream>
using namespace std;
int main()
{
    int n,t=0;
    cout << " enter number of rows";
    cin >> n; 
    for( int row=0 ; row < n ; row++)
    {   
        t=1;
        for( int sp=0 ; sp <n-row-1; sp++ )
        {
            cout << " ";
        }
        for( int i=0; i <= row; i++ )
        {
            cout << t;
            t++;
        }
        t--;
        while(t>1)
        {
           t--;
           cout<< t;
        }
    cout << endl;
    }
    return 0;
}