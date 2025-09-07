class Solution {
public:
    void solveBackTrack(int &k , int n , vector<vector<int>> &ans , vector<int>&temp , int i){
        if( n < 0) return;
        if(temp.size() == k && n == 0){
            ans.push_back(temp);
            return;
        }
        for(int j =  i ; j < 10 ; j++){
            temp.push_back(j);
            solveBackTrack(k , n - j , ans , temp , j + 1);
            temp.pop_back();


        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        int i = 0;
        solveBackTrack(k , n , ans , temp , 1);
        return ans;

        
    }
};