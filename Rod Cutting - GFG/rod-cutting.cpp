// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
    
    
    unordered_map<string,int>map;
    
    return maxProfit(0, price, n, map);
    
    }
    
    
    int maxProfit(int currentIndex, int price[], int rodLength, unordered_map<string,int>&map)
    {
        
        if(currentIndex>=rodLength || rodLength==0)
        return 0;
        
        
        string currentKey=to_string(currentIndex)+"-"+to_string(rodLength);
        
        if(map.find(currentKey)!=map.end())
        return map[currentKey];
        
        int cut=0;
        
        int currentRodSize=currentIndex+1;
        
        if(rodLength>=currentRodSize)
        {
            cut=price[currentIndex]+maxProfit(currentIndex, price, rodLength-currentRodSize, map);
        }
        
    int dontCut=maxProfit(currentIndex+1, price, rodLength, map);
    
    return map[currentKey]=max(cut, dontCut);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends