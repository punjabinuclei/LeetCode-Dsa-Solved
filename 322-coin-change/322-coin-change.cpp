class Solution {
public:
    
    int coinChange(vector<int>& coins, int amount) {
        
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        
        int ans = Mincoins(0,coins,amount,dp);
        
        if(ans==100000) return -1;
        else
            return ans;
                              
    }
    
    
    
    int Mincoins(int currentIndex, vector<int>& coins, int amount,vector<vector<int>>&dp)
    {
        if (amount == 0)
            return 0;
        if(currentIndex >= coins.size())
            return 100000;  //any maximum value 
        
        if(dp[currentIndex][amount]!=-1)
            return dp[currentIndex][amount];
        
        int consider = 100000;
        
        if(coins[currentIndex]<=amount){
            consider = 1 + Mincoins(currentIndex,coins,amount-coins[currentIndex],dp);
        }
        int notConsider = Mincoins(currentIndex+1,coins,amount,dp);
        
        return dp[currentIndex][amount] = min(consider,notConsider);
    }
    
};