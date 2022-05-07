class Solution {
public:
    int rob(vector<int>& nums) {
    
        unordered_map<int,int>map1,map2;
        
        int size=nums.size();
        
        if(size==1)
            return nums[0];
        
        int case1=maxMoney(0,nums,map1,size-1);
        int case2=maxMoney(1,nums,map2,size);
        
         return max(case1,case2);      
    }
    
    
    int maxMoney(int currentHouse, vector<int>& nums,unordered_map<int,int>&map,int size)
    {
        if(currentHouse>=size)
            return 0;
        
        
        int currentKey=currentHouse;
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        
        int rob=nums[currentHouse] + maxMoney(currentHouse+2,nums,map,size);
        int notRob=maxMoney(currentHouse+1,nums,map,size);
        
        
        map[currentKey]=max(rob,notRob);
        return map[currentKey];
           
    }
    
};