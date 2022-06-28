#include<bits/stdc++.h>
using namespace std;
int main()
 {
       priority_queue<int, vector<int>, greater<int>>minHeap;
	    vector<int>answer;
	  
     
	int testCases;
	
	cin>>testCases;
	
	while(testCases--)
	{
	    int n,k;
	    
	    cin>>n>>k;
	    
	    vector<int>array(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>array[i];
	    }
	    
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        minHeap.push(array[i]);
	        
	        if(minHeap.size()>k)
	        {
	            answer.push_back(minHeap.top());
	            minHeap.pop();
	        }
	    }
	    
	    
	    while(!minHeap.empty())
	    {
	        answer.push_back(minHeap.top());
	        minHeap.pop();
	    }
	    
	    for(int i=0;i<answer.size();i++)
	    {
	    cout<<answer[i]<<" ";
	    }
	
	    cout<<endl; 
	    answer.clear();
	}
	
	return 0;
}