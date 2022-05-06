class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        unordered_map<int,int>map;
        
        int a=minCost(0,cost,map);
        int b=minCost(1,cost,map);
        
        return min(a,b);
    }
    
    
   int minCost(int currentIndex, vector<int>& cost, unordered_map<int,int>&map)
   {
       
       if(currentIndex>cost.size())
           return 1001;
       
       if(currentIndex==cost.size())
           return 0;
       
       int currentKey=currentIndex;
       
       if(map.find(currentKey)!=map.end())
           return map[currentKey];
       
       
       int oneStep=cost[currentIndex]+minCost(currentIndex+1,cost,map);
       
       int twoStep=cost[currentIndex]+minCost(currentIndex+2,cost,map);
       
       map[currentKey]=min(oneStep,twoStep);
       
       return map[currentKey];
   }
    
    
};