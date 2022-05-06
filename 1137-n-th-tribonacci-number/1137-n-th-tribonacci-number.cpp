class Solution {
public:
    int tribonacci(int n) {
        
        unordered_map<int,int>map;
        
        return nthTrib(n,map);
    }
    
    
    int nthTrib(int n, unordered_map<int,int>&map)
    {
        if(n==0)
            return 0;
        
        if(n==1 || n==2)
            return 1;
        
        int currentKey=n;
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        int a=nthTrib(n-1,map);
        int b=nthTrib(n-2,map);
        int c=nthTrib(n-3,map);
        
        map[currentKey]=a+b+c;
        
        return map[currentKey];
        
            
    }
};