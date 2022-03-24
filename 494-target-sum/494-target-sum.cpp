class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
     
        return totalWays(nums,0,target);
        
    }
    
    
    
    int totalWays(vector<int>& nums, int currentIndex,int target)
    {
        
        if(currentIndex==nums.size() && target==0)
            return 1;
        
        if(currentIndex==nums.size() && target!=0)
            return 0;
        
        
        int positive=totalWays(nums,currentIndex+1,target-nums[currentIndex]);
        int negative=totalWays(nums,currentIndex+1,target+nums[currentIndex]);
        
        
        return positive+negative;
        
        
    }
};