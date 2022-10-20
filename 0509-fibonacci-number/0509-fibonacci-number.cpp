class Solution {
public:
    int fib(int n) {
        
        return nthfib(n);
    }
    
    int nthfib(int n)
    {
        if(n==1)
            return 1;
        if(n==0)
            return 0;
        
        int a=nthfib(n-1);
        int b=nthfib(n-2);
        
        return a+b;
    }
    
};