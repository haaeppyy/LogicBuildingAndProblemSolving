class Solution {
public:
    void solve(vector<int>&candidates,vector<vector<int>>&result,vector<int>temp,int index,int target){
        if( target<0) return;
        if(target ==0){
         result.push_back(temp);
            return;
        }

        for(int i=index; i<candidates.size();i++){
            temp.push_back(candidates[i]);
            solve(candidates,result,temp,i,target-candidates[i]);
            temp.pop_back();
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>temp;
         solve(candidates,result,temp,0,target);
         return result;
         
    }
};