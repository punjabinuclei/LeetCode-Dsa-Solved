class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        
        unordered_map<string,int>map;
        
        return totalWays(n,k,target,map);
        
    }
    
    
    int totalWays(int n, int faces, int targetSum, unordered_map<string,int>&map)
    {
        
        
        int mod=1000000007;
        
        if(n==0 && targetSum==0)
            return 1;
        
          if(targetSum <= 0 || n==0){ 
            return 0; 
        } 

        string currentKey=to_string(n)+"-"+to_string(targetSum);
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        
      int ways=0;
        
        
        for(int i=1;i<=faces;i++)
        {
            int tempAns=0;
            tempAns=totalWays(n-1, faces, targetSum-i,map)%mod; 
            ways=ways%mod;
            ways=(ways+tempAns)%mod;
         }
                
        return map[currentKey]= ways;
        
    }
    
    
    
};