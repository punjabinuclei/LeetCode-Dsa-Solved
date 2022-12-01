class Solution {
public:
    bool halvesAreAlike(string s) {
        
        unordered_set<char>ch;
        
        ch.insert('a');
        ch.insert('e');
        ch.insert('i');
        ch.insert('o');
        ch.insert('u');
        ch.insert('A');
        ch.insert('I');
        ch.insert('E');
        ch.insert('O');
        ch.insert('U');
        
        int vowelCountHalf1=0;
        int vowelCountHalf2=0;
        
        
        int i=0, j=s.length()-1;
        
        
        while(i<j)
        {
            if(ch.find(s[i++])!=ch.end())
            {
                vowelCountHalf1++;
            }
            
            if(ch.find(s[j--])!=ch.end())
            {
                vowelCountHalf2++;
            }
        }
        
        
        return vowelCountHalf1==vowelCountHalf2;
    }
};