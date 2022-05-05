class Solution {
public:
    int fib(int n) {
        unordered_map<int,int>map;
        return nthfib(n,map);
    }
    
    
    int nthfib(int n,unordered_map<int,int>&map)
    {
        
    if(n==0)
       return 0;
        
    if(n==1)
       return 1;
        
        int currentKey=n;
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        int a=nthfib(n-1,map);
        int b=nthfib(n-2,map);
        
        map[currentKey]=a+b;
        
        return map[currentKey];
        
    }
    
    
};