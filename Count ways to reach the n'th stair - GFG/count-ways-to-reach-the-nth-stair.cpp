// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        unordered_map<int,int>map;
        
         return totalWays(0,n,map);
    }
    
    int totalWays(int currentStep, int targetStep, unordered_map<int,int>&map)
    {
        int pow = 1000000007;
        if(currentStep==targetStep)
        return 1;
        
        if(currentStep>targetStep)
        return 0;
        
        int currentKey=currentStep;
        
        if(map.find(currentKey)!=map.end())
        
        return map[currentKey];
        
        int oneStep=totalWays(currentStep+1,targetStep,map);
        int twoSteps=totalWays(currentStep+2,targetStep,map);
        
        map[currentKey]=(oneStep+twoSteps)%pow;
        
        return map[currentKey];
        
        
    }
    
    
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends