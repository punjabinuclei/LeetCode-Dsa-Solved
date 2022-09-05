class Solution {
public:
    int climbStairs(int n) {
        
        unordered_map<int,int>map;
        
     return totalWays(0,n, map);   
    }
    
    int totalWays(int currentStep,int totalSteps, unordered_map<int,int>&map)
    {
        if(currentStep>totalSteps)
            return 0;
        
        if(currentStep==totalSteps)
            return 1;
        
        int currentKey=currentStep;
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        int oneStep=totalWays(currentStep+1, totalSteps, map);
        int twoSteps=totalWays(currentStep+2, totalSteps, map);
        
        return map[currentKey]=oneStep+twoSteps;
    }
    
};