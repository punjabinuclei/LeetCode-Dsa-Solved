class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        unordered_map<char,string>mp{
            {'1', ""}, 
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"},
          };
        
         vector<string>ans;
        
        if(digits.size()==0) return ans;
        generateCombinations(digits,0,"",ans,mp);
        return ans;
        
    }
    
    
    
    void generateCombinations(string digits, int currentIndex, string currentString, vector<string>&ans, unordered_map<char,string>&map)
    {

        if(currentIndex>=digits.size())
        {
            ans.push_back(currentString);
            return;
        }
        
        
        char currentChar=digits[currentIndex];
        string mappings=map[currentChar];
        
        for(int i=0;i<mappings.size();i++)
        {
            generateCombinations(digits,currentIndex+1,currentString+mappings[i],ans,map);
        }
        
        
        return;
        
    
    }
};