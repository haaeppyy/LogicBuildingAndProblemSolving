#include<iostream>
using namespace std;
int returnSqRoot(int n)
{float s=0-n;
    float e=n;
    float mid=0;
    float ans=-1;
    while(s<=e)
    {
        if(mid *mid ==n)
        {
            return mid;
        }
        
        else{
            if(mid * mid < n)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter number";
    cin>> n;
   cout<< "squar root of number is:" <<returnSqRoot(n);
    
    
}