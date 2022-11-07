class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n=nums.size();
        
        if(n==0)
            return 0;
        
        int currSum=0;
        int i=0;
        int count=0;
        unordered_map<int,int>map;
        
        while(i<n)
        {
            currSum+=nums[i];
            
            if(currSum==k)
                count++;
            
            if(map.find(currSum-k)!=map.end())
            {
                count+=map[currSum-k];
            }
            
            map[currSum]++;
            i++;
        }
        
        return count;
    }
};