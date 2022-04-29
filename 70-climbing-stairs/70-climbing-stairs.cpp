class Solution {
public:
    int climbStairs(int n) {
        
        unordered_map<int,int>map;
        
        return totalWays(0,n,map);
    
    }
    
    
    
    int totalWays(int currentStep, int targetStep, unordered_map<int,int>&map)
    {
        
        if(currentStep>targetStep)
            return 0;
        
        if(currentStep==targetStep)
            return 1;
        
        int currentKey=currentStep;
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        int oneStep=totalWays(currentStep+1, targetStep, map);
        int twoStep=totalWays(currentStep+2, targetStep, map);
        
        map[currentKey]=oneStep+twoStep;
        
        return map[currentKey];
        
        
        
    }
};