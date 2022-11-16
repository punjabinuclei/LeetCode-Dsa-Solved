class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        int n=nums.size()-1;
        for(auto x:nums)
        {
            map[x]++;
        }
        
        for(auto it:map)
        {
            if(it.second>(n/2))
            return it.first;
        }
        
        return 0;
    }
};