#include<iostream>
using namespace std;
int Akshat_don(int* nums, int numsSize) {
    int TotalSum=0;
    int LeftSum=0, RightSum=0;
    for(int i=0 ; i < numsSize  ;i++)
    {
        TotalSum+=nums[i];

    }
    RightSum=TotalSum;
    for(int i=0 ; i < numsSize ;i++)
    {
        RightSum-=nums[i];
        if(RightSum==LeftSum)
        {
            return i;
        }
        LeftSum+=nums[i];
    }

  return -1;

    
}
int main()
{
    int arr[10];
    int size ;
    cout << " enter size";
    cin >> size;
    for(int i=0 ; i< size ;i++)
    {
        cin >> arr[i];
    }
    cout << Akshat_don(arr, size);

}