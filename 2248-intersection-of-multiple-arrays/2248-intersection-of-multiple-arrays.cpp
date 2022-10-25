class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
     
        vector<int>answer;
        map<int,int>map;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                map[nums[i][j]]++;
            }
        }
        
        
        for(auto element:map)
        {
            if(element.second==n)
            {
                answer.push_back(element.first);
            }
        }
        
        
        return answer;
    }
};