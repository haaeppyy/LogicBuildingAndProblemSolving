class Solution {
public:
    string solveBt(vector<string>&nums , unordered_map<string,int>&map , string temp){
        if(temp.size() == nums[0].size()){
            if(map.count(temp) == 0){
                return temp;
            }
            else return "";
        }

      string ans = solveBt(nums,map,temp+'0');
      if(ans!= "") return ans;
      ans = solveBt(nums,map, temp+'1');
      if(ans != "") return ans;
      
      return ans;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<string , int>mapping;
        for(auto i : nums){
            mapping[i]++;
        }
        string s = "";
        return solveBt(nums, mapping  , s);
        
    }
};