class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Iterative Approach 1
//         if(n==0)
//             return false;
        
//         while(n%2==0)
//         {
//             n=n/2;
//         }
        
//         return n==1;
        
        
//         ---------------------------------------------------------------

        
//         Recursive Approach 2
        
//         if(n==0)
//             return false;
        
//         return (n==1|| n%2==0 && isPowerOfTwo(n/2));
        
        
//         Ceil and floor approach
        
        if(n==0)
            return false;
        
        return (ceil(log2(n))==floor(log2(n)));
        
    }
};