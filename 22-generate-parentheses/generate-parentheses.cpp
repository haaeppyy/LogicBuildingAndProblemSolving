class Solution {
public:
    void genrate(vector<string>&ans,int& n , int open , int close , string output){
        if(open + close == (2*n)){
            ans.push_back(output);
            return;
        }
        if(open < n) genrate(ans,n , open + 1 , close , output +'(');
        if(close < open) genrate(ans,n , open , close + 1 , output + ')');

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        genrate(ans, n , 0 , 0 , "");
        return ans;
    }
};