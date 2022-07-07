class Solution
{
    public:
        vector<vector < int>> combinationSum2(vector<int> &candidates, int target)
        {
            sort(candidates.begin(), candidates.end());

            vector<vector < int>> ans;
            vector<int> subset;

            helper(candidates, target, ans, subset, 0);

            return ans;
        }

    void helper(vector<int> &nums, int target, vector<vector< int >> &answer, vector< int > &subset, int currentIndex)
    {
        if (target == 0)
        {
            answer.push_back(subset);
            return;
        }

        if (currentIndex >= nums.size())
            return;

        if (target >= nums[currentIndex])
        {
            subset.push_back(nums[currentIndex]);
            helper(nums, target - nums[currentIndex], answer, subset, currentIndex + 1);
            subset.pop_back();
        }

        while (currentIndex < nums.size() - 1 && nums[currentIndex] == nums[currentIndex + 1])
        {
            currentIndex++;
        }
        helper(nums, target, answer, subset, currentIndex + 1);
    }
};