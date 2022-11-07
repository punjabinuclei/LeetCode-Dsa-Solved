//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
      
        if(N==0)
            return 0;
        
        unordered_map<int,int> mymap;   //Key = PrefixSUM, Value = Count of PrefixSUM.
        int currSUM = 0;
        int i = 0;
        int count = 0;
        
        while(i<N)
        {
            currSUM += Arr[i];
            
            if(currSUM == k)    //We found a new subArray with SUM = k
                count += 1;
            
            if(mymap.find(currSUM-k)!=mymap.end())
                count += mymap[currSUM-k];
            
            mymap[currSUM] += 1;
            i += 1;
        }
        return count;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends