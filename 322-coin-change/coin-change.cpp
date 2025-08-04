class Solution {
public:
    int solveMem(vector<int>&coins,int amount,vector<int>&dp){
        if(amount <=0) return 0;
        if(coins.size() ==0) return -1;

        if(dp[amount]!=-1) return dp[amount];
        int minUsed = INT_MAX-1;

        for(int i=0 ;i< coins.size();i++){
            int coin =coins[i];
            if(coin <= amount){
                int recSolution = 1+ solveMem(coins,amount-coin,dp);
                 
                    minUsed = min(minUsed,recSolution);
                   
            
        }
        }
        dp[amount]=minUsed;
        return dp[amount];
        
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        int ans=solveMem(coins,amount,dp);
        if(ans+1 ==INT_MAX) return -1;
        return ans;
    }
};