class Solution {
public:
    int maxProfit(vector<int>& prices) {
             
           vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,vector<int>(3,-1)));
        
        // unordered_map<string,int>map;
        return maxProfits(prices,0,1,2,dp);
        
    }
    
    int maxProfits(vector<int>&prices,int currentIndex, int canBuy, int transCount,vector<vector<vector<int>>>&dp)
    {
        
        if(currentIndex>=prices.size()|| transCount==0)
            return 0;
        
        
//         string currentKey=to_string(currentIndex)+"-"+to_string(canBuy);
            
//             if(map.find(currentKey)!=map.end())
//                map[currentKey];
        
         if(dp[currentIndex][canBuy][transCount]!=-1)
            return dp[currentIndex][canBuy][transCount];
       
        
        
        int ans=0;
        if(canBuy==1)
        {
            int idle=maxProfits(prices,currentIndex+1,canBuy,transCount, dp);
            int buy=-prices[currentIndex]+maxProfits(prices, currentIndex+1, 0, transCount, dp);
            
            ans=max(idle, buy);
        }
        else
        {
            int idle=maxProfits(prices,currentIndex+1,canBuy,transCount, dp);
            int sell=prices[currentIndex]+maxProfits(prices, currentIndex+1, 1, transCount-1, dp);
            
               ans=max(idle, sell);
            
        }
        
        
          return dp[currentIndex][canBuy][transCount]=ans;
        
        
        
    }
    
    
    
    
    
    
};