// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        
        // unordered_map<string,int>map;
        vector<vector<vector<int>>>dp(N, vector<vector<int>>(2, vector<int>(K+1,-1)));
        
        return profit(A, N, 0, 1, K,dp);
        
    }
    
    
    int profit(int *a, int size, int currentIndex, int canBuy, int trans, vector<vector<vector<int>>>&dp)
    {
        if(currentIndex>=size || trans==0)
           return 0;
           
           
        //   string currentKey=to_string(currentIndex)+'-'+to_string(canBuy)+"-"+to_string(trans);
           
           if(dp[currentIndex][canBuy][trans]!=-1)
           return dp[currentIndex][canBuy][trans];
           
        //   if(map.find(currentKey)!=map.end())
        //   return map[currentKey];
           
           
           int ans=0;
           
           if(canBuy==1)
           {
               int ideal=profit(a,size,currentIndex+1,canBuy, trans,dp);
               int buy=-a[currentIndex]+profit(a,size,currentIndex+1,0, trans,dp);
               
               ans=max(ideal,buy);
            }
            else
            {
               
               int ideal=profit(a,size,currentIndex+1,0, trans,dp);
               int sell=a[currentIndex]+profit(a,size,currentIndex+1,1, trans-1,dp);
               
               ans=max(ideal,sell);
               
                
            }
        
        
        return dp[currentIndex][canBuy][trans]=ans;
    }
    
    
    
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}  // } Driver Code Ends