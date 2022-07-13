class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
//         mappings of number to characters
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
        
//         if string is empty then we return empty vector directly
        if(digits.size()==0) return ans;
        generateCombinations(digits,0,"",ans,mp);
        return ans;
        
    }
    
    
//     Function to perform backtracking
    void generateCombinations(string digits, int currentIndex, string currentString, vector<string>&ans, unordered_map<char,string>&map)
    {

//         if we reach the end we push the final string into answer and return from their
        if(currentIndex>=digits.size())
        {
            ans.push_back(currentString);
            return;
        }
        
        
//         we will transfer the first digit into a char variable
        char currentChar=digits[currentIndex];
//         we will find the corresponding mapped string to the current digit in the map
        string mappings=map[currentChar];
        
        // we will keep on updating our string 
            
        for(int i=0;i<mappings.size();i++)
        {
            generateCombinations(digits,currentIndex+1,currentString+mappings[i],ans,map);
        }
        
        
        return;
        
    
    }
};