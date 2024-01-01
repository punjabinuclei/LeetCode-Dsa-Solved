class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int totalContentKids = 0;
        int totalCookies = s.size();
        if (totalCookies == 0)
            return 0;

        int greedIndex = g.size() - 1, sizeIndex = s.size() - 1;

        while (greedIndex >= 0 && sizeIndex >= 0) {
            if (s[sizeIndex] >= g[greedIndex]) {
                totalContentKids++;
                sizeIndex--;
                greedIndex--;
            } else {
                greedIndex--;
            }
        }

        return totalContentKids;
    }
};