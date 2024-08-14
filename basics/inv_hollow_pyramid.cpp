#include<iostream>
using namespace std;
int main()
{
  int row;
  cout <<"enter row\n";
  cin>> row;
 for(int i=row;i>0;i--)
  {
    int totalcol=i;
    for(int j=totalcol;j>0;j--)
    {   if(i==row||j+i==row+1||j==totalcol)
        {
            cout<<"*";
        }
        else
        {
            cout<< " ";
        }
    }
    cout<<"\n";
  }




}