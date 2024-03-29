class Solution
{
    public:

        int lengthOfLIS(vector<int> &nums)
        {
            vector<vector < int>> dp(nums.size(), vector<int> (nums.size() + 1, -1));

            return solve(nums, 0, -1, dp);
        }
    int solve(vector<int> &nums, int i, int prev_i, vector<vector<int>>&dp)
    {
        if (i >= size(nums)) return 0;
        
        
        if (dp[i][prev_i + 1] != -1)
            return dp[i][prev_i + 1];
        
        int take = 0;
        int dontTake = solve(nums, i + 1, prev_i,dp);
        
        if (prev_i == -1 || nums[i] > nums[prev_i])
            take = 1 + solve(nums, i + 1, i, dp);	// try picking current element if no previous element is chosen or current > nums[prev_i]
        return dp[i][prev_i + 1] = max(take, dontTake);
    }
};