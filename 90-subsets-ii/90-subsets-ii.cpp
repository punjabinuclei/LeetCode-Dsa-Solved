class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(), nums.end());
        
        helper(nums,ans, temp, 0);
        return ans;
    }
    
    void helper(vector<int>&nums, vector<vector<int>>&ans, vector<int>&subset, int currentIndex)
    {
        if(currentIndex>=nums.size())
        {
            ans.push_back(subset);
            return;
        }
        
        subset.push_back(nums[currentIndex]);
        helper(nums,ans,subset, currentIndex+1);
        subset.pop_back();
        
        while(currentIndex<nums.size()-1 && nums[currentIndex]==nums[currentIndex+1])
        {
            currentIndex++;
        }
        helper(nums,ans,subset,currentIndex+1);
        
    }
};