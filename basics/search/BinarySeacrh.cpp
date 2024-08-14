#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int target)
{
    int start=0,end=size-1, mid=0;
    while(start <=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==target)
        {
            return mid;
            
        }
        if(arr[mid]>target)
        {
            start=0;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        
        }
    }
    return -1;
}
int main()
{
    int arr[10];
    printf("please enter sorted array\n");
    printf("enter size of array then enter array");
    int n,target; 
    cin >> n;
    for(int i=0 ; i< n ; i++)
    {
        cin >> arr[i];
    }
    cout << "enter target";
    cin >> target;
    cout << " \n" <<BinarySearch(arr, n ,target)+1;
    return 0;
    

}