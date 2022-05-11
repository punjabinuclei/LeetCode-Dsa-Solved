class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        
        vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2, vector<int>(3,-1)));
        
        // unordered_map<string,int>map;
        
        return maxProfit(prices,0,1,1,dp);
        
    }
    
    
    int maxProfit(vector<int>& prices, int currentIndex, int canBuy, int transCount, vector<vector<vector<int>>>&dp)
    {
        if(currentIndex>=prices.size()||transCount==0)
            return 0;
        
        
         if(dp[currentIndex][canBuy][transCount]!=-1)
            return dp[currentIndex][canBuy][transCount];
       
        
        
        int ans=0;
        
        if(canBuy==1)
        {
            int ideal=maxProfit(prices, currentIndex+1, canBuy, transCount,dp);
            int buy=-prices[currentIndex]+maxProfit(prices, currentIndex+1, 0, transCount,dp);
            
            ans= max(ideal, buy);
        }
        else
        {
            int ideal=maxProfit(prices, currentIndex+1, canBuy, transCount,dp);
            int sell=prices[currentIndex]+maxProfit(prices, currentIndex+1, 1, transCount-1,dp);
            
            ans = max(ideal, sell);
            
        }
        
        
        return dp[currentIndex][canBuy][transCount]=ans;
        
    }
    
    
};