class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>answer;
        vector<int>temp;
        
        subSets(0,nums,answer,temp);
        
        return answer;
    }
    
    void subSets(int currentIndex, vector<int>&nums, vector<vector<int>>&answer, vector<int>&temp)
    {
         // goal, once we reach the end, add it to the result
        if(currentIndex>=nums.size())
        {
            answer.push_back(temp);
            return;
        }
        
          // for every element we have two choices : keep it or drop it
        // choice 1, keep it
        temp.push_back(nums[currentIndex]);
        subSets(currentIndex+1, nums, answer, temp);
         // choice 2, drop it
        temp.pop_back();
        subSets(currentIndex+1, nums, answer, temp);
        
        
    
        
    }
    
};