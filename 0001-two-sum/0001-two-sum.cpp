class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
  
        unordered_map<int,int>map;
        vector<int>answer;
        
        for(int i=0;i<nums.size();i++)
        {
            if(map.find(target-nums[i])!=map.end())
            {
                answer.push_back(map[target-nums[i]]);
                answer.push_back(i);
                return answer;
            }
            
            map[nums[i]]=i;
        }
        
        return answer;
    }
};