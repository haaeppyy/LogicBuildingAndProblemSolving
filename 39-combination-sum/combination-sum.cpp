class Solution {
public:
    void solveBackTrack(vector<int>& candidates , int &target , int sum , int i , vector<vector<int>> &result, vector<int>&temp){
        if(sum > target) return;
        if(sum == target){
            result.push_back(temp);
            return;
        }

        for(int j = i ; j < candidates.size() ; j++){
            if(target >= candidates[j]){
                temp.push_back(candidates[j]);
                solveBackTrack(candidates , target , sum + candidates[j] , j , result , temp);
                temp.pop_back();
            }
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        int sum = 0;
        int i = 0;
        vector<int>temp;
        solveBackTrack(candidates , target , sum , i , result,temp);
        return result;
    }
};