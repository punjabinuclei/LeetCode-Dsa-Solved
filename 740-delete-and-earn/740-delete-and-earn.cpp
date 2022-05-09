class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        unordered_map<string,int>map;
      
         vector<int>freq(10001,0);
        
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size();i++)
             {
                 freq[nums[i]]++;
             }
        
        
        return maxPoints(0,freq,map);
        

    }
    
    
    int maxPoints(int currentIndex, vector<int>&freq, unordered_map<string,int>&map)
    {

        if(currentIndex>=freq.size())
            return 0;
        
        string currentKey=to_string(currentIndex)+"-";
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        
       int del =freq[currentIndex]*currentIndex+maxPoints(currentIndex+2, freq,map);
        
       int Notdel =maxPoints(currentIndex+1, freq,map);
        
        
        map[currentKey] = max(del, Notdel);
        
        return map[currentKey];
    
    }
    
    
    
};