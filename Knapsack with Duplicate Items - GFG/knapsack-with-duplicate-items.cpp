// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>>dp(N,vector<int>(W+1,-1));
        
        return maxProfit(0,N,W,val,wt,dp);
    }
    
    
    
    int maxProfit(int currentIndex,int size,int capacity,int val[],int wt[],vector<vector<int>>&dp)
    {
        if(size==currentIndex ||capacity==0 )
         return 0;
         
         
         if(dp[currentIndex][capacity]!=-1)
         {
             return dp[currentIndex][capacity];
         }
         
         
         int consider=0;
         if(capacity>=wt[currentIndex])
         {
             consider=val[currentIndex]+maxProfit(currentIndex, size, capacity-wt[currentIndex], val, wt, dp);
         }
         
         int notConsider=maxProfit(currentIndex+1, size, capacity, val, wt, dp);
         
         
         dp[currentIndex][capacity]=max(consider, notConsider);
         
         return dp[currentIndex][capacity];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends