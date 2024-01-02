class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<vector<int>> answer;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        while (!mp.empty()) {
            vector<int> subarray;
            for (auto it = mp.begin(); it != mp.end();) {
                subarray.push_back(it->first);
                it->second--;

                if (it->second == 0)
                    it = mp.erase(it);
                else
                    ++it;
            }

            answer.push_back(subarray);
        }

        return answer;
    }
};