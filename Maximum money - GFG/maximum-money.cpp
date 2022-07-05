// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int maximizeMoney(int N , int K) {
        // unordered_map<int,int>map;
        vector<int>dp(N,-1);
        
        return maxMoney(0,N,K,dp);
    }
    
    
    int maxMoney(int currentIndex, int size,int money, vector<int>&dp)
    {
        if(currentIndex>=size)
        return 0;
        
        int currentKey=currentIndex;
        
        if(dp[currentKey]!=-1)
        return dp[currentKey];
        
        int rob=money+maxMoney(currentIndex+2, size, money, dp);
        int notRob=maxMoney(currentIndex+1, size, money, dp);
        
        return dp[currentKey]=max(rob,notRob);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;

        cin>>N>>K;

        Solution ob;
        cout << ob.maximizeMoney(N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends