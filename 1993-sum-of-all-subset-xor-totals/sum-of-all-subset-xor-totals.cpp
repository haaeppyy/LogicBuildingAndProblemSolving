class Solution {
public:
    void solveBT(vector<int>&nums , int i , int count ,int &total){
        total+= count;

        for(int j = i ; j < nums.size() ; j++){
            cout << nums[j] <<"  xor " << count <<endl;
            solveBT(nums , j + 1 , count ^ nums[j] , total);
        }
        
    }
    int subsetXORSum(vector<int>& nums) {
        int total = 0;
        int count = 0;
        solveBT(nums , 0 , count,total);
        return total;
        
    }
};