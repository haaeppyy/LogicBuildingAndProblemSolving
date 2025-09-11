class Solution {
public:
    void solveBT(vector<int> &nums , vector<vector<int>>&result , int i, vector<bool>& vis, vector<int>temp){
        if(i == nums.size()){
            result.push_back(temp);
            return;
        }

        for( int j = 0 ; j < nums.size() ; j++){
     
            if (vis[j]) continue;
            if (j > 0 && nums[j] == nums[j - 1] && !vis[j - 1]) continue;
    
                temp.push_back(nums[j]);
                vis[j] = true;
                solveBT(nums , result , i + 1 , vis,temp);
                vis[j] = false;
                temp.pop_back();
            
        }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        vector<bool> vis(nums.size(),false);
        vector<int>temp;
        solveBT(nums , result , 0 , vis,temp);
        return result;
    }
};