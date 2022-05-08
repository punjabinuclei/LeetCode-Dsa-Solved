class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        unordered_map<string,bool>map;
        
        int totalSum=0;
        
        for(int sum:nums)
            totalSum+=sum;
        
        if(totalSum%2!=0)
            return false;
        
        return Partition(0,nums,totalSum/2,map);
            
    }
    
    
    bool Partition(int currentIndex,vector<int>&nums,int targetSum, unordered_map<string,bool> &map)
    {
        if(targetSum==0)
            return true;
        
        if(currentIndex>=nums.size())
            return false;
        
         int currentPosValue=nums[currentIndex];
        
        string currentKey=to_string(currentIndex) + "-" + to_string(targetSum);
        
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        bool consider=false;
        
        if(targetSum>=currentPosValue)
            consider=Partition(currentIndex+1, nums, targetSum-currentPosValue,map);
               if(consider)
               {
                   map[currentKey]=consider;
        return map[currentKey];
               }
        
        bool notConsider=Partition(currentIndex+1, nums, targetSum,map);
        
        map[currentKey]= consider || notConsider;
        
        
        return map[currentKey];
        
    }
    
    
    
    
    
    
};