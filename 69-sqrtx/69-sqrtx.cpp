class Solution {
    #define ll long long
public:
    int mySqrt(int x) {
        ll start=0, end=x;
        ll sqrt=-1;
        while(start<=end)
        {
            ll mid=start+(end-start)/2;
            
            if(mid*mid==x)
                return mid;
            else if(mid*mid<x)
            {
                sqrt=mid;
                start=mid+1;
            }
            else
                end=mid-1;
                   
        }
        
        
        return sqrt;
    }
};