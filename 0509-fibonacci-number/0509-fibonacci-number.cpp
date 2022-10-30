class Solution {
public:
    int fib(int n) {
         
        if(n<=1)
            return n;
        
        
        int current,previous=1, previous2=0;
        for(int i=2;i<=n;i++)          
        {
            current=previous+previous2;
            previous2=previous;
            previous=current;
        }
        
        return previous;
        
        
        
    }
    
};