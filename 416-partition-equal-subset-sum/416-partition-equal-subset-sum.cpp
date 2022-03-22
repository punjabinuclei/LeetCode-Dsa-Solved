class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        
        unordered_map<string,bool>map;
        
        int totalSum=0;
        for(int nums:nums)
            totalSum+=nums;
        
        if(totalSum%2!=0)
            return false;
        
        return checkPartition(0,nums,totalSum/2,map);
            
    }
    
    
    bool checkPartition(int currentIndex,vector<int>& nums,int targetSum,unordered_map<string,bool>&map)
    {
        if(currentIndex>=nums.size())
            return false;
        
        if(targetSum==0)
            return true;
        
        
        string currentKey=to_string(currentIndex)+ "_" +to_string(targetSum);
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        
        bool consider=false;
        
        if(targetSum>=nums[currentIndex])
        {
            consider=checkPartition(currentIndex+1,nums,targetSum-nums[currentIndex],map);
        }
        if(consider){
             map[currentKey] = consider;
            return true;
        }
            
        bool notConsider=checkPartition(currentIndex+1,nums,targetSum,map);
        
        
        map[currentKey]= (consider||notConsider);
        
        return consider||notConsider;
            
    }
    
    
    
};