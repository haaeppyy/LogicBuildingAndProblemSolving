#include<iostream>
using namespace std;
void PrintPattrn(int num)
{   
    int n=0;
    for( int row=1 ; row <=num; row++)
    {   n=row;
        for( int col=1; col<= num-row+1; col++)
        {
            if (col==1|| col== num-row+1|| row ==1 || row== num-1)
            {
                cout << n;
            }
            else
            {
                cout<<" ";
            }
            n=n+1;
            

        }
        cout << endl;
    }
    return;
}
int main()
{   int n;
    cout << " enter number of rows";
    cin >> n;
    PrintPattrn(n);

    return 0;
}