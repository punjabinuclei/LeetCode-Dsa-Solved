class Solution {
public:
    int numTrees(int n) {
        
        unordered_map<int,int>map;
        
        return totalWays(n,map);
        
    }
    
    
    int totalWays(int n, unordered_map<int,int>&map)
    {
        if(n==1 || n==0)
            return 1;
        
        int currentKey=n;
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        
       int ans=0;
        
        for(int i=0;i<n;i++)
            ans+=totalWays(i,map)*totalWays(n-i-1,map);
        
        
        
        
       return  map[currentKey]= ans;
        
    }
    
    
    
};