class Solution {
public:
   void solve(vector<int>nums,vector<vector<int>>&result,int i){
        if(i == nums.size()){
            result.push_back(nums);
        }


        for(int j = i ; j < nums.size(); j++){
            swap(nums[i],nums[j]);
            solve(nums,result,i+1);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        int i = 0;
        vector<vector<int>>result;
        solve(nums,result,0);
        return result;
        
    }
};