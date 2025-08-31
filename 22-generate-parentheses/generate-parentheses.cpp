class Solution {
public:
    vector<string> genrate(int& n , int open , int close , string output){
        if(open + close == (2*n))    return {output};

        vector<string> result;
        
        if(open < n) {
            vector<string>v1 = genrate(n , open + 1 , close , output +'(');
            result.insert(result.end(), v1.begin() , v1.end());
        }
        if(close < open){
            vector<string>v2 = genrate(n , open , close + 1 , output + ')');
            result.insert(result.end(), v2.begin() , v2.end());
        }
        return result;

    }
    vector<string> generateParenthesis(int n) {
        return genrate( n , 0 , 0 , "");;
    }
};