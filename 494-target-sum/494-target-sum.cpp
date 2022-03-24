class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
     
        unordered_map<string,int>map;
        
        return totalWays(nums,0,target,map);
        
    }
    
    
    
    int totalWays(vector<int>& nums, int currentIndex,int target,                unordered_map<string,int>&map)
    {
        
        
        
        
        
        if(currentIndex==nums.size() && target==0)
            return 1;
        
        if(currentIndex==nums.size() && target!=0)
            return 0;
        
        
        
        string currentKey=to_string(currentIndex)+"_"+to_string(target);
        
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        int positive=totalWays(nums,currentIndex+1,target-nums[currentIndex],map);
        int negative=totalWays(nums,currentIndex+1,target+nums[currentIndex],map);
        
        
        map[currentKey]=positive+negative;
        
        return map[currentKey];
        
        
    }
};