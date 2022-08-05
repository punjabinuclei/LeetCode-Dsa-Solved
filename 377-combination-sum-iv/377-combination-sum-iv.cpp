class Solution
{
    public:
        int combinationSum4(vector<int> &nums, int target)
        {    
            int size=nums.size();
            vector<vector<unsigned int>>dp(size,vector<unsigned int>(target+1,-1));
            
           return combinations(nums, target, 0, size,dp);
        }

    int combinations(vector<int> &nums, int target, int currentIndex, int size, vector<vector<unsigned int>>&dp)
    {
        if (target == 0)
            return 1;

        if (currentIndex >= size)
            return 0;
        
        int consider=0;
        
       if(dp[currentIndex][target]!=-1)
            return dp[currentIndex][target];
        if (nums[currentIndex] <= target)
            consider = combinations(nums, target - nums[currentIndex], 0, size,dp);

        int notConsider=combinations(nums, target, currentIndex + 1, size,dp);
        
        return dp[currentIndex][target]=consider+notConsider;
    }
};