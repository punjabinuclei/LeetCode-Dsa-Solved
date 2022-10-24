#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int *temp=a;
    a=b;
    b=temp;
    
}

int main()
 {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    
	    int i=0,j=n-1;
	    
	    while(i<=j)
	    {
	        swap(a[i++],a[j--]);
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    
	    cout<<endl;
	}
	
	return 0;
}