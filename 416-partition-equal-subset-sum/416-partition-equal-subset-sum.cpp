class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
//         map is used for optimization from overlapping sub problems
        unordered_map<string,bool>map;
        
        int totalSum=0;
        
        for(int sum:nums)
            totalSum+=sum;
        
//     if sum is odd we return false as we cannot divide it into two sets of equal size
        if(totalSum%2!=0)
            return false;
        
//         we pass sum/2 to check if half is present in  a subset or not
        return Partition(0,nums,totalSum/2,map);
            
    }
    
    
    bool Partition(int currentIndex,vector<int>&nums,int targetSum, unordered_map<string,bool> &map)
    {
//         result is reached
        if(targetSum==0)
            return true;
        
        if(currentIndex>=nums.size())
            return false;
        
         int currentPosValue=nums[currentIndex];
        
//         Key for the map we take currentIndex and targetSum because they are unique they are changing at every value
        string currentKey=to_string(currentIndex) + "-" + to_string(targetSum);
        
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        bool consider=false;
        
        if(targetSum>=currentPosValue)
            consider=Partition(currentIndex+1, nums, targetSum-currentPosValue,map);
//         optimised approach below if we get true we directly return it and we dont check noConsider
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