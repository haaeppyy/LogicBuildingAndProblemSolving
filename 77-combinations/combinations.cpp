class Solution {
public:
    void solveBackTrack(int n, int k,int i ,vector<vector<int>>&res , vector<int>&temp){
        if(temp.size() == k)
        {
            res.push_back(temp);
            return;
        }
        for(int j = i+1 ; j <= n ; j++){
            temp.push_back(j);
            solveBackTrack(n , k , j  ,res, temp );
            temp.pop_back();
        }

    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>temp;
        solveBackTrack(n , k , 0 ,res, temp );
        return res;

    }
};