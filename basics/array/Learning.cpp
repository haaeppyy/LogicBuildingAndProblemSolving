#include<iostream>
using namespace std;
int main()
{
    int a[10];
    fill(a,a+10,10);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}