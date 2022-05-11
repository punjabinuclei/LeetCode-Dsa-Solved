class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        vector<vector<int>>dp(prices.size(), vector<int>(2,-1));
        
        return maxProfit(prices,0,1,1,dp);
  
    }
    
    
      int maxProfit(vector<int>& prices, int currentIndex, int canBuy, int transCount, vector<vector<int>>&dp)
    {
        if(currentIndex>=prices.size())
            return 0;
        
//         string currentKey=to_string(currentIndex)+"-"+to_string(canBuy)+"-"+to_string(transCount);
        
//         if(map.find(currentKey)!=map.end())
//             return map[currentKey];
       
          
          if(dp[currentIndex][canBuy]!=-1)
              return dp[currentIndex][canBuy];
          
          
          
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
        
        
        
        
        return dp[currentIndex][canBuy]=ans;
    }
  
    
    
};