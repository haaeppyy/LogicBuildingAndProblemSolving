class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>distinctElement;
        for( int i : nums) distinctElement.insert(i);

        unordered_map<int,int> map;

        int j = 0;
        int i = 0;
        int count = 0;
        while( j < nums.size()){
            map[nums[j]]++;

            while(map.size() == distinctElement.size()){
                count += nums.size() - j;
                map[nums[i]]--;
                if(map[nums[i]] == 0) map.erase(nums[i]);
                i++;

            }
            j++;
        }
        return count;
    }
};