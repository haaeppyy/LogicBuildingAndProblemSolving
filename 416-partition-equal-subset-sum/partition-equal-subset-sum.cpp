class Solution {
public:
    bool solveMem(vector<int>&nums,vector<vector<int>>&dp,int index, int target){
        if(index>= nums.size() || target<0) return false;
        if(target == 0) return true;
        if(dp[target][index]!= -1) return dp[target][index];

        dp[target][index]= (solveMem(nums,dp,index+1,target-nums[index]) || solveMem(nums,dp,index+1,target));
        return dp[target][index];
    }
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum&1) return false;
        int target = sum >> 1;
        vector<vector<int>>dp(target+1,vector<int>(nums.size()+1,-1));
        return solveMem(nums,dp,0,target);
    }
};