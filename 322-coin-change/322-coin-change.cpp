// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
        
//         unordered_map<string,int>map;
        
//      int ans = minWays(0,coins,amount,map);
//         if(ans==100000) return -1;
//         else
//             return ans;
    
//     }
    
    
    
//     int minWays(int currentIndex, vector<int>&coins, int amount, unordered_map<string,int>&map)
//     {
        
//         int size=coins.size();
        
//         if(amount==0)
//             return 0;
        
//         if(currentIndex>=size)
//             return 10000;
        

//         string currentKey=to_string(currentIndex)+"-"+to_string(amount);
        
//         if(map.find(currentKey)!=map.end())
//             return map[currentKey];
        
        
        
//         int consider=10000;
        
//         if(amount>=coins[currentIndex])
//             consider=1+minWays(currentIndex, coins, amount-coins[currentIndex],map);
        
//       int notConsider=minWays(currentIndex+1, coins, amount,map);
        
        
//         map[currentKey]= min(consider,notConsider);
        
//         return map[currentKey];
        
            
        
        
        
//     }
// };

class Solution {
public:
    int Mincoins(int curridx, vector<int>& coins, int amount,vector<vector<int>>&dp){
        if (amount == 0) return 0;
        if(curridx >= coins.size()) return 100000;  //any maximum value 
        
        if(dp[curridx][amount]!=-1) return dp[curridx][amount];
        int consider = 100000;
        
        if(coins[curridx]<=amount){
            consider = 1 + Mincoins(curridx,coins,amount-coins[curridx],dp);
        }
        int notConsider = Mincoins(curridx+1,coins,amount,dp);
        
        return dp[curridx][amount] = min(consider,notConsider);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        int ans = Mincoins(0,coins,amount,dp);
        if(ans==100000) return -1;
        else
            return ans;
                              
    }
};