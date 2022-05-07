// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        unordered_map<string,int>map;
        return  maxProfit(0,W,wt,val,n,map);
    }
    
    
    int maxProfit(int currentIndex, int capacity, int *weight, int *value, int n, unordered_map<string,int>& map)
    {
        if(currentIndex>=n)
        return 0;
        
        
        int currentWeight=weight[currentIndex];
        int currentValue=value[currentIndex];
        
        string currentKey=to_string(currentIndex)+"-"+to_string(capacity);
        
        if(map.find(currentKey)!=map.end())
        return map[currentKey];
        
        
        int consider=0;
        
        if(capacity>=currentWeight)
                 consider=currentValue+maxProfit(currentIndex+1,capacity-currentWeight, weight, value, n,map);
                 
        int notConsider=maxProfit(currentIndex+1,capacity, weight, value, n,map);         
        
        
        map[currentKey]= max(consider,notConsider);
        
        return map[currentKey];
    }
    
    
    
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends