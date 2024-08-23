int findPeakElement(int* nums, int numsSize) {
    if(numsSize==1){
           return 0;
    }
    if(nums[0]>nums[1]){
        return 0;
    }
    if(nums[numsSize-1]>nums[numsSize-2]){
        return numsSize-1;
    }
    int left=1;
    int right=numsSize-2;
    while(left<=right){
           int mid=(left+right)/2;
           if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            return mid;
           }else if(nums[mid]>nums[mid-1]){
            left=mid+1;
           }else {
            right=mid-1;
           }
    }
    return -1;
}