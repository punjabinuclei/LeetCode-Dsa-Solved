// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        vector<vector< int>> answer;
            vector<int> temp;
            
             set<int> s(A.begin(),A.end());
        A.assign(s.begin(),s.end());
        sort(A.begin(),A.end());
            
            
            combinations(0, B, A, answer, temp);


            return answer;
        }

    void combinations(int currentIndex, int target, vector<int> &candidates, vector< vector< int >> &answer, vector< int > &temp)
    {
        //store the solution and backtrack
        if(target==0)
        {
            answer.push_back(temp);
            return;
        }
        //backtrack
        if(currentIndex>=candidates.size())
            return;
        
         //try all possible options for the next level
        if(candidates[currentIndex]<=target)
        {
             //put 1 option into the combination
            temp.push_back(candidates[currentIndex]);
            
             //try with this combination, whether it gives a solution or not.
            combinations(currentIndex, target-candidates[currentIndex], candidates, answer, temp);
            
             //when this option backtrack to here, remove this and go on to the next option
            temp.pop_back();
        }
        
            combinations(currentIndex+1, target, candidates, answer, temp);
        
        
    }

  
  
  
  
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends