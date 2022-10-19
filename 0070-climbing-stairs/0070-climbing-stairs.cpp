class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int,int>map;
        
        return totalWays(0,n,map);
    }
    
    
    int totalWays(int currentStep, int targetStep, unordered_map<int,int>&map)
    {
        if(currentStep==targetStep)
            return 1;
        
        if(currentStep>targetStep)
            return 0;
        
        int currentKey=currentStep;
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        int oneStep=totalWays(currentStep+1, targetStep, map);
        int twoSteps=totalWays(currentStep+2, targetStep, map);
        
        return map[currentKey]=oneStep+twoSteps;
            
    }
};