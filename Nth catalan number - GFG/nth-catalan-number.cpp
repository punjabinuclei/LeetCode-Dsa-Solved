// { Driver Code Starts
//Initial template for C++

#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;  // https://www.geeksforgeeks.org/factorial-large-number-using-boost-multiprecision-library/
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find the nth catalan number.
    cpp_int findCatalan(int n) 
    {
        
        // unordered_map<cpp_int,cpp_int>map;
        
        vector<cpp_int>dp(1001,-1);
        
        return nthCatalan(n,dp);
    }
    
    
    cpp_int nthCatalan(int n, vector<cpp_int>&dp)
    {
        if(n==0||n==1)
        return 1;
        
        int currentKey=n;
        
        // if(map.find(currentKey)!=map.end())
        // return map[currentKey];
        
        
        if(dp[currentKey]!=-1)
        return dp[n];
        
        
        cpp_int ways=0;
        
        
        
        for(int i=0;i<n;i++)
        {
        ways+=nthCatalan(i,dp)*nthCatalan(n-i-1,dp);
        }
        
        
       return dp[currentKey]= ways; 
        
    }
    
    
};

// { Driver Code Starts.

int main() 
{
    //taking count of testcases
	int t;
	cin>>t;
	while(t--) {
	    
	    //taking nth number
	    int n;
	    cin>>n;
	    Solution obj;
	    //calling function findCatalan function
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}  // } Driver Code Ends