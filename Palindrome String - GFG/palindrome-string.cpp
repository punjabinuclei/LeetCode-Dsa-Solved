// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    string s1=S;
	    
	    int i=0,j=S.size()-1;
	    
	    while(i<=j)
	    {
	        char temp=S[i];
	        S[i]=S[j];
	        S[j]=temp;
	        
	        i++;
	        j--;
	    }
	    
	    if(s1==S)
	    {
  return 1;
}	  
else
return 0;
	    
	    
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends