class Solution {
public:
    unordered_map<char , string> createMapping(string digits){
        unordered_map<char, string> mapping;
        mapping['2'] = "abc";
        mapping['3'] = "def";
        mapping['4'] = "ghi";
        mapping['5'] = "jkl";
        mapping['6'] = "mno";
        mapping['7'] = "pqrs";   // 4 chars
        mapping['8'] = "tuv";
        mapping['9'] = "wxyz";   // 4 chars
        return mapping;
        
    }
void createAns(string digits , vector<string> &ans ,string output ,int i , unordered_map<char , string > &mapping ){
       

        if(i >= digits.length() ){
            ans.push_back(output);
            return;
        }
        
            string tempString = mapping[digits[i]];
          for(auto c : tempString){
              //iterate over each character , and include and exclude
              output.push_back(c);
              createAns(digits , ans , output , i+1 , mapping);
              output.pop_back();
          }
    
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(!digits.empty()) {
            string output = "";
            unordered_map<char , string > mapping = createMapping(digits);
            createAns( digits, ans , output , 0 , mapping);
       }

        
        return ans;
    }
};