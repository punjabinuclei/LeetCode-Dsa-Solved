class Solution {
public:
    int jump(vector<int>& nums) {
        unordered_map<int,int>map;
        
        return minWays(nums, 0, map);
    }
    
    
    int minWays(vector<int>&nums, int currentIndex, unordered_map<int,int>&map)
    {
        
     if(currentIndex>=nums.size()-1)
       return 0;
        
        
        if(nums[currentIndex]==0)
            return 100001;
        
        int currentKey=currentIndex;
        
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        int ans=100001;
        
        for(int i=1;i<=nums[currentIndex];i++)
        {
            int getAnswer=1+minWays(nums,currentIndex+i,map);
             ans=min(ans, getAnswer);          
        }

        map[currentIndex]=ans;
        
        return map[currentIndex];
    }
    
};

