// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        unordered_map<int,int>map;
        return maxMoney(0,arr,n,map);
    }
    
    
    int maxMoney(int currentHouse,int *arr, int n, unordered_map<int,int>&map)
    {
        if(currentHouse>=n)
        return 0;
        
        
        int currentKey=currentHouse;
        
        
        if(map.find(currentKey)!=map.end())
         return map[currentKey];
         
         
         int rob=arr[currentHouse]+maxMoney(currentHouse+2,arr,n,map);
         int notRob=maxMoney(currentHouse+1,arr,n,map);
        
        map[currentKey]=max(rob,notRob);
        
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
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends