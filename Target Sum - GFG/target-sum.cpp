// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    int findTargetSumWays(vector<int>&A ,int target) {
        
        unordered_map<string,int>map;
        
        return totalWays(0,A,target,map);
    }
    
    
    
    int totalWays(int currentIndex, vector<int>&nums, int target, unordered_map<string,int>&map)
    {
        
        int size=nums.size();
        
        if(currentIndex==size && target==0)
        return 1;
        
        if(currentIndex==size && target!=0)
        return 0;
        
        
        string currentKey=to_string(currentIndex) + "-" + to_string(target);
        
        
        if(map.find(currentKey)!=map.end())
        return map[currentKey];
        
        int positive=totalWays(currentIndex+1, nums, target-nums[currentIndex], map);
        int negative=totalWays(currentIndex+1, nums, target+nums[currentIndex], map);
        
        
        map[currentKey]=negative+positive;
        
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
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends