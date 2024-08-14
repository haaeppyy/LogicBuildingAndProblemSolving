#include<iostream>
using namespace std;
#include<cmath>
int convertb2d(int N)
{
    int n=N,decimal=0,count=0;
    while(n>0)
    {
        decimal= (n%10*pow(2,count))+decimal;
        n=n/10;
        count++;

    }
    return decimal;
}
int main()
{
    cout<<"enter binary num\n";
    int binary;
    cin >> binary;
    cout << "decimal number is :" << convertb2d(binary)<< endl;




}