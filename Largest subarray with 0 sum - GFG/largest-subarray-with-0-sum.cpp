// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int>map;
        
        int prefixSum=0;
        int answer=0;
        
        map.insert({prefixSum, -1});
        
        for(int i=0;i<n;i++)
        {
            prefixSum+=A[i];
            
            
            if(map.find(prefixSum)!=map.end())
            {
                answer=max(answer, i-map[prefixSum]);
            }
            else
            {
                map.insert({prefixSum, i});
            }
        }
        
        return answer;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends