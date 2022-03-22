class Solution {
public:
    int rob(vector<int>& nums) {
    
        unordered_map<int,int>map;
        
        return maxMoney(0,nums,map);
        
    }
    
    
    int maxMoney(int currentHouse, vector<int>& nums,unordered_map<int,int>&map)
    {
        if(currentHouse>=nums.size())
            return 0;
        
        
        int currentKey=currentHouse;
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        
        int rob=nums[currentHouse] + maxMoney(currentHouse+2,nums,map);
        int notRob=maxMoney(currentHouse+1,nums,map);
        
        
        
        
        map[currentKey]=max(rob,notRob);
        return map[currentKey];
        
        
    }
    
    
    
    
    
};