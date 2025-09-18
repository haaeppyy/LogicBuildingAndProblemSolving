class Solution {
public:
    void solveBT(string s, vector<string>& ans, string temp, int i) {
        if (i == s.size()) {
            ans.push_back(temp);
            return;
        }

        char curr = s[i];
        solveBT(s, ans, temp + curr, i + 1);

        if (!isdigit(curr)) {
            curr = islower(curr)   ? toupper(curr)
                   : isupper(curr) ? tolower(curr)
                                   : curr;
            solveBT(s, ans, temp + curr, i + 1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string temp = "";
        solveBT(s, ans, temp, 0);
        return ans;
    }
};