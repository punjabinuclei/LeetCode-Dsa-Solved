class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        
        combinations(candidates, target, 0, temp, ans);
        
        return ans;
    }
    
    
    void combinations(vector<int>&candidates, int target, int currentIndex, vector<int>&temp, vector<vector<int>>&ans)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        
        
        if(currentIndex>=candidates.size())
            return;
        
        if(candidates[currentIndex]<=target)
        {
            temp.push_back(candidates[currentIndex]);
            combinations(candidates, target-candidates[currentIndex], currentIndex, temp, ans);
            temp.pop_back();
        }
        
        combinations(candidates, target, currentIndex+1, temp, ans);
        
        
        
        
    }
};