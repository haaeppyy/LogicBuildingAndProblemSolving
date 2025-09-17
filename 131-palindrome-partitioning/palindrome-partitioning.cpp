class Solution {
public:
    bool isPalindrome(string s , int start , int end){
     
        while(start <= end){
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    void solveBT(string& s , int i, vector<vector<string>>&ans,vector<string>&temp){
        if(i >= s.length()){
            ans.push_back(temp);
            return;
        }

        for(int j = i ; j < s.length() ; j++){
            string subS = s.substr(i,j - i + 1);
            if(isPalindrome(s, i , j)){
                temp.push_back(subS);
                solveBT(s , j+1 , ans , temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
           
        vector<vector<string>>ans;
        vector<string>temp;
        solveBT(s , 0 , ans , temp);
       
        return ans;
    }
};