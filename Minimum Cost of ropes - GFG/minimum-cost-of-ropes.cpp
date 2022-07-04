// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution

{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        
           priority_queue<long long, vector<long long> ,greater<long long>> minH;
       
       long long cost = 0;
       for(int i=0; i<n; i++){
           minH.push(arr[i]);
       }
       
       while(minH.size() >= 2){
           long long left = minH.top();
           minH.pop();
           
           long long right = minH.top();
           minH.pop();
           
           cost = cost + left + right;
           minH.push(left + right);
       }
       
       return cost;
   }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends