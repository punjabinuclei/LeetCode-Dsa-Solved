class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
  
        unordered_map<string,int>map;
        
        return maxProfit(prices,0,1,k,map);


        
    }
    
    
    
     int maxProfit(vector<int>& prices, int currentIndex, int canBuy, int transCount, unordered_map<string,int>&map)
    {
        if(currentIndex>=prices.size()||transCount==0)
            return 0;
        
        string currentKey=to_string(currentIndex)+"-"+to_string(canBuy)+"-"+to_string(transCount);
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        int ans=0;
        
        if(canBuy==1)
        {
            int ideal=maxProfit(prices, currentIndex+1, canBuy, transCount,map);
            int buy=-prices[currentIndex]+maxProfit(prices, currentIndex+1, 0, transCount,map);
            
            ans= max(ideal, buy);
        }
        else
        {
            int ideal=maxProfit(prices, currentIndex+1, canBuy, transCount,map);
            int sell=prices[currentIndex]+maxProfit(prices, currentIndex+1, 1, transCount-1,map);
            
            ans = max(ideal, sell);
            
        }
        
        
        map[currentKey]=ans;
        
        return ans;
    }
   
    
    
    
    
    
    
    
    
    
    
};