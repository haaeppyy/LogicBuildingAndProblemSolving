#include<iostream>
using namespace std;
void sort_0_1_2(int arr[],int size)
{
    for(int i=0 ; i< size ; i++)
    {
        for(int j=i+1 ; j < size ; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main()
{
    int array[10]={0,0,2,1,1,2,2,0,0,0};
    int n=10;
    sort_0_1_2(array,n);
    for(int i=0 ; i< n ; i++)
    {
        cout << array[i] << " ";

    }
    return 0;
}