#include<iostream>

using namespace std;
int main()
{

//HollowPyramid.cpp
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
        //hollowInvertedFullPyramid.cpp
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
        cout << endl;
    }

    return 0;

    }

}