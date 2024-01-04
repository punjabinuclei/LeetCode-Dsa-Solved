class Solution {
public:
    int minimumRounds(vector<int>& tasks) {

        unordered_map<int, int> mp;
        int count = 0;

        for (auto val : tasks) {
            mp[val]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++) {
            int value = it->second;

            if (value == 1)
                return -1;
            count += value / 3;

            if (value % 3)
                count++;
        }
        return count;
    }
};