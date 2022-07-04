// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    #define ll long long
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
     
   ll  k1=min(K1,K2);
    ll k2=max(K1,K2);
     
     ll a=kthSmallest(A,k1,N);
     ll b=kthSmallest(A,k2,N);
     
     int sum=0;
     for(ll i=0;i<N;i++)
     {
         if(A[i]>a && A[i]<b)
         sum+=A[i];
     }
     
     return sum;
    
    }
    
    
    ll kthSmallest(ll *A, ll k, ll N)
    {
        priority_queue<ll>maxHeap;
        
        for(ll i=0;i<N;i++)
        {
            maxHeap.push(A[i]);
            if(maxHeap.size()>k)
            {
                maxHeap.pop();
            }
        }
        
        return maxHeap.top();
    }
    
    
};

// { Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends