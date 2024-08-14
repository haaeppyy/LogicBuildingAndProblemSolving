#include<iostream>
using namespace std;
 int Reverse(int n)
 {
   int temp=n,rev=0;
   while(temp>0)
 {
     rev=rev*10+temp%10;
     temp=temp/10;
   }
   return rev;
 }
int binaryconv(int n)
{
  int bconverted=0;
  while(n>0)
  {
    bconverted=10*bconverted+n%2;
    n=n/2;
}
return  Reverse(bconverted);
 
  }
int main()
{
    int n;
    cout<<"enter the number to convert to binary"<< endl;
    cin>>n;
    cout<<binaryconv(n);
    return 0;


}