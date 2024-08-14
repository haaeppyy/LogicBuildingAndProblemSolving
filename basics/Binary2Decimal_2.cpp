#include<iostream>
#include<cmath>
using namespace std;
int Binary2DecimalConverter(int N)
{
    int temp=N,decimal=0,base=1;
    while(N>0)
    {
        decimal=N%10*pow(2,base)+decimal;
        N=N/10;
        base++;
    }
    return decimal;
}
int main()
{
    int n;
    cout << " please enter the binary number ";
    cin >> n ;
    cout<< "\nbinary is :" << Binary2DecimalConverter(n)<< endl;
    return 0;

}