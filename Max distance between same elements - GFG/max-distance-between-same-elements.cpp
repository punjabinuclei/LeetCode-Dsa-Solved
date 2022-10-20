//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
int maxDist=0;
        unordered_map<int,int>map;
        
        for(int i=0;i<n;i++)
        {
            if(map.find(arr[i])==map.end())
            {
                map[arr[i]]=i;
            }
            else
            {
                int diff=i-map[arr[i]];
                maxDist=max(diff, maxDist);
            }
        }

return maxDist;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends