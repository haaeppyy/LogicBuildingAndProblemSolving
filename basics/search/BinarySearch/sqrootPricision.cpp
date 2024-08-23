#include<iostream>

using namespace std;
double precision_root(int n)
{
   
    double start = 0;
    double end = n;
    double ans ;
    double mid; 

    while (end - start > 0.0000001)
    {
        mid = (start + end) / 2;
        double sqr = mid * mid;

        if (sqr <= n)
        {
            ans = mid;
            start = mid;
        }
        else
        {
            end = mid;
        }
    }

    return ans;

}
int main()
{
    int n;
    cout << " enter number";
    cin >> n;
   double result = precision_root(n);
    printf(" %.7f",result);
    return 0;
}