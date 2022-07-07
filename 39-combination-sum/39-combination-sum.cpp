class Solution
{
    public:
        vector<vector < int>> combinationSum(vector<int> &candidates, int target)
        {
            vector<vector< int>> answer;
            vector<int> temp;
            combinations(0, target, candidates, answer, temp);

            return answer;
        }

    void combinations(int currentIndex, int target, vector<int> &candidates, vector< vector< int >> &answer, vector< int > &temp)
    {
        
        if(target==0)
        {
            answer.push_back(temp);
            return;
        }
        if(currentIndex>=candidates.size())
            return;
        
        if(candidates[currentIndex]<=target)
        {
            temp.push_back(candidates[currentIndex]);
            combinations(currentIndex, target-candidates[currentIndex], candidates, answer, temp);
            temp.pop_back();
        }
        
            combinations(currentIndex+1, target, candidates, answer, temp);
        
        
    }

};