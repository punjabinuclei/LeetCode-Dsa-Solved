class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        // unordered_map<string,int>map;
        
        int size=coins.size();
        
        vector<vector<int>>dp(size,vector<int>(amount+1,-1));
        
        
        return combinations(0, coins, amount,dp);
        
    }
    
    
    int combinations(int currentIndex, vector<int>&coins, int amount, vector<vector<int>>&dp)
    {
        
        int size=coins.size();
        
        if(currentIndex>=size)
            return 0;
        
        if(amount==0)
            return 1;
        
//         string currentKey=to_string(currentIndex)+"-"+to_string(amount);
        
//         if(map.find(currentKey)!=map.end())
//             return map[currentKey];
        
        
        if(dp[currentIndex][amount]!=-1)
            return dp[currentIndex][amount];
        
        int consider=0;
        
        if(amount>=coins[currentIndex])
           consider=combinations(currentIndex, coins, amount-coins[currentIndex],dp);
        
        int notConsider=combinations(currentIndex+1, coins, amount,dp);
        
        
       dp[currentIndex][amount]=consider+notConsider;
        
        return dp[currentIndex][amount];
    }
    
};