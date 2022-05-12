class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        
        return Solve(prices,0,1,1,dp);
        
    }
    
    
    int Solve(vector<int>&prices,int currentIndex, int canBuy, int transCount, vector<vector<int>>&dp)
    {
        
        int size=prices.size();
        
        if(currentIndex>=size)
            return 0;
        
        
        if(dp[currentIndex][canBuy]!=-1)
        {
            return dp[currentIndex][canBuy];
        }
        
        
        int ans=0;
        
        if(canBuy==1)
        {
            int idle=Solve(prices,currentIndex+1,canBuy,transCount,dp);
            
            int buy=-prices[currentIndex]+Solve(prices,currentIndex+1,0, transCount,dp);
            
            ans=max(idle,buy);
        }
        else
        {
            int idle=Solve(prices,currentIndex+1,canBuy,transCount,dp);
            
            int sell=prices[currentIndex]+Solve(prices, currentIndex+2, 1, transCount-1,dp);
            
            ans=max(idle,sell);
        }
        
        
        
        return dp[currentIndex][canBuy]=ans;
        
        
        
        
        
    }
    
    
};