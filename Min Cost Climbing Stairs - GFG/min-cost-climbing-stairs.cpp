// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    int minCostClimbingStairs(vector<int>&cost ,int N) {
    unordered_map<int,int>map;
    
    int a=minCost(0,cost,map);
    int b=minCost(1,cost,map);
    
    return min(a,b);
    
    }
    
    int minCost(int currentIndex,vector<int>&cost, unordered_map<int,int>&map)
    {
        
        if(currentIndex>cost.size())
          return 1001;
          
        if(currentIndex==cost.size())
          return 0;
          
         int currentKey=currentIndex;
         
         if(map.find(currentKey)!=map.end())
          return map[currentKey];
          
          int oneStep=cost[currentIndex]+minCost(currentIndex+1,cost,map);
          int twoStep=cost[currentIndex]+minCost(currentIndex+2,cost,map);
          
         map[currentKey]= min(oneStep,twoStep);


         return map[currentKey];        
        
        
    }
    
    
    
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>cost(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>cost[i];
        }

        Solution ob;
        cout<<ob.minCostClimbingStairs(cost,N);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends