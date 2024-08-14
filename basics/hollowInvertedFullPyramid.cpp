#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "enter number";
    cin >> n;
    for(int i=0; i< n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout <<" ";
        }   
        for(int k=n-i; k >0 ;k--)
        {   
            if(k==1 || k== n-i || i==0 || i==n-1)
                cout << "* ";//one star and one space , tabhi full pyaramid banega
            else
                cout << "  "; //double space (since one star contains one star  and one space)

        }
        cout <<endl;
    }

    return 0;
}