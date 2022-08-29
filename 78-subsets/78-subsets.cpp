class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>answer;
        vector<int>subSet;
        
        solve(answer, subSet, 0, nums);
        
        return answer;
    }
    
    void solve(vector<vector<int>>&answer, vector<int>&subSet, int currentIndex, vector<int>& nums)
    {
        if(currentIndex>=nums.size())
        {
            answer.push_back(subSet);
            return;
        }
        
        
        subSet.push_back(nums[currentIndex]);
        solve(answer, subSet, currentIndex+1, nums);
        subSet.pop_back();
        solve(answer, subSet, currentIndex+1, nums);
        
    }
};