class Solution {
public:
    bool checkAnagram(string s1 ,  string s2){
       if(s1.length() != s2.length()) return false;
       string temp1 = s1;
       string temp2 = s2;
       sort(temp1.begin() , temp1.end());
       sort(temp2.begin() , temp2.end());

       return temp1 == temp2;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        if(words.size() == 1) return words;
        vector<string>result;
        result.push_back(words[0]);
        for(int i = 1 ; i < words.size() ; i++){
            string s1 = words[i];
            string s2 = result.back();
            if(!checkAnagram(s1,s2)) result.push_back(s1);
        }

        return result;
        
    }
};