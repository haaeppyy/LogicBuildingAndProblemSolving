#include<iostream>
using namespace std;
int main()
{
    int a[10]={0,1,1,0,1,1,1,1};
    int countzero=0,countone=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]==0)
        {
            countzero++;
        }
        else
        {
            countone++;
        }

    }
    cout<<countone<<" no of one"<<endl << countzero <<" no of zeros";
 return 0;
}