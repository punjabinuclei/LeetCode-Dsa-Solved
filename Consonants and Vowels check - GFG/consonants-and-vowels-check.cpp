// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void checkString(string s);


 // } Driver Code Ends
//User function Template for C++

void checkString(string s)
{
    int v=0;
    int c=0;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    vector<char>a(5);
    a[0]='a';
    a[1]='e';
    a[2]='i';
    a[3]='o';
    a[4]='u';
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==a[0]|| s[i]==a[1]|| s[i]==a[2] || s[i]==a[3]|| s[i]==a[4])
        {
            v++;
        }
        else if(s[i]==' ')
        {
            continue;
        }
        else
        {
            c++;
        }
    }
    
    if(v>c)
        cout<<"Yes";
    else if(c>v)
        cout<<"No";
    else
        cout<<"Same";
    
    cout<<endl;
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    
	    string s;
	    getline(cin,s);
	    
	    //function call
	    checkString(s);
	   
	}
	return 0;
}

  // } Driver Code Ends