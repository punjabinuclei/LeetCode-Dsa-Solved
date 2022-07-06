// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int sumOfDigits(int N){
        return sum(N);
    }
    
    int sum(int n)
    {
        if(n==0)
        return 0;
        
        return n%10+sum(n/10);
    }
    
    
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends