// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int>>answer;
        vector<int>temp;
        
        subSets(0, A, answer, temp);
        
        sort(answer.begin(), answer.end());
        
        return answer;
    }
    
    
    void subSets(int currentIndex, vector<int>&array, vector<vector<int>>&answer, vector<int>&temp)
    {
        if(currentIndex>=array.size())
        {
            answer.push_back(temp);
            return;
        }
        
        
        temp.push_back(array[currentIndex]);
        subSets(currentIndex+1, array, answer, temp);
        
        temp.pop_back();
        subSets(currentIndex+1, array, answer, temp);
        
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends