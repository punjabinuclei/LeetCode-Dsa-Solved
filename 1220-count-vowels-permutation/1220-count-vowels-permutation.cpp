class Solution {
    const int MOD=1e9+7;  
  const unordered_map<char, vector<char>> mapping       { {'s', {'a', 'e', 'i', 'o', 'u'} }, // start
                                                      {'a', {'e'}                     }, 
                                                      {'e', {'a', 'i'}                }, 
                                                      {'i', {'a', 'e', 'o', 'u'}      }, 
                                                      {'o', {'i', 'u'}                },
                                                      {'u', {'a'}                     }  };  
    
public:
    
    
    int countVowelPermutation(int n) {
        unordered_map<string,int>map;
        return totalCount(n ,'s', map); //start with s
        
    }
    
    int totalCount(int remaining, char prev, unordered_map<string,int>&map)
    {
        if(remaining==0)
            return 1;
        
        string currentKey=to_string(remaining)+"-"+to_string(prev);
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        
        int ans=0;
        
        
        for(auto c: mapping.at(prev))
        {
            ans=(ans+totalCount(remaining-1, c, map)) %MOD;
        }
        
        map[currentKey]=ans;
        return map[currentKey];
    }
    
};