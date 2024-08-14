#include<iostream>
using namespace std;
void PrintPattrn(int num)
{   
    int n=1;
    for( int row=1 ; row < num; row++)
    {   n=n+row;
        for( int col=1; col<= num-row; col++)
        {
            if(col==1|| col== num-row || row =1 || row== n-1)
            {
                cout << n;
            }
            n++;
            else
            {
                cout << " ";
            }
            

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