class Solution {
public:
    void solveBT(vector<int>& nums , int target , int sum, int i,int &count){
        if( i == nums.size()){
            if(sum == target){
                count++;
            }
            return;
        }

        solveBT(nums, target , sum - nums[i] , i + 1 , count);
        solveBT(nums, target , sum + nums[i] , i + 1 , count);


    }
    int findTargetSumWays(vector<int>& nums, int target) {

        int count = 0;
        solveBT(nums,target , 0 , 0 , count);
        return count;
        
    }
};