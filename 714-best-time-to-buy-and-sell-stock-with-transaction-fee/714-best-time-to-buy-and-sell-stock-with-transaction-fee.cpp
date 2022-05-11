class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
     
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        
        // unordered_map<string,int>map;
        return maxProfit(prices,0,1,1, fee,dp);
        
    }
    
    
    int maxProfit(vector<int>&prices,int currentIndex, int canBuy, int transCount, int fee, vector<vector<int>>&dp)
    {
        
        if(currentIndex>=prices.size())
            return 0;
        
        
//         string currentKey=to_string(currentIndex)+"-"+to_string(canBuy);
            
//             if(map.find(currentKey)!=map.end())
//                map[currentKey];
        
        
        if(dp[currentIndex][canBuy]!=-1)
            return dp[currentIndex][canBuy];
        
        int ans=0;
        if(canBuy==1)
        {
            int idle=maxProfit(prices,currentIndex+1,canBuy,transCount,fee, dp);
            int buy=-prices[currentIndex]+maxProfit(prices, currentIndex+1, 0, transCount, fee, dp);
            
            ans=max(idle, buy);
        }
        else
        {
            int idle=maxProfit(prices,currentIndex+1,canBuy,transCount,fee, dp);
            int sell=-fee+prices[currentIndex]+maxProfit(prices, currentIndex+1, 1, transCount-1,fee, dp);
            
               ans=max(idle, sell);
            
        }
        
        
          return dp[currentIndex][canBuy]=ans;
        
        
        
        
    }
    
    
    
};