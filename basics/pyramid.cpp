#include<iostream>
using namespace std;
int main()
{
  int row;
  cout <<"enter row\n";
  cin>> row;
 for(int i=0;i<row;i++)
  {
    int totalcol=i+1;
    for(int j=0;j<totalcol;j++)
    {   if(i==row-1||j==i||j==0)
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