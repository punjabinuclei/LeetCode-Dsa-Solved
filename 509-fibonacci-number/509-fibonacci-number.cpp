class Solution {
public:
    int fib(int n) {
        
        return nthfib(n);
    }
    
    
    int nthfib(int n)
    {
        
    if(n==0)
       return 0;
        
    if(n==1)
       return 1;
        
        int one=nthfib(n-1);
        int two=nthfib(n-2);
        
        
        return one+two;
        
    }
    
    
};