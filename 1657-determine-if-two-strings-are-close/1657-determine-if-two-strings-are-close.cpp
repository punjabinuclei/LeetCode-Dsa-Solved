class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1.length()!=word2.length())
            return false;
        
        set<char>s1,s2;
        vector<int>freq1(26,0), freq2(26,0);
        
        for(auto ch:word1)
        {
            freq1[ch-'a']++;
            s1.insert(ch);
        }
        
        for(auto ch:word2)
        {
            freq2[ch-'a']++;
            s2.insert(ch);
        }
        
        
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        
        return (s1==s2 && freq1==freq2);
    }
};