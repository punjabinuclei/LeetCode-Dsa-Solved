class Solution
{
    public:
        int climbStairs(int n)
        {

           	//          function to return the answer, we pass 
           	//          the currentIndex and the target step as
           	//          paramters in the function
        
//             we initialise a map to store overlapping subproblems
//             to decrease the time complexity to O(n) from O(2^n)
            
            unordered_map<int,int>map;
            return totalWays(0, n,map);
        }

   	// function to return totalWays to reach target    
//     we pass map by reference
    
    int totalWays(int currentIndex, int targetStep, unordered_map<int,int>&map)
    {
       	//baseCase
        if (currentIndex > targetStep)
            return 0;

        if (currentIndex == targetStep)
            return 1;

//         Map=key-value pair
//         here the key will be the one thing thats changing ie
//         the currentIndex will be the key and value will be what its returning
        
        
        int currentKey=currentIndex;
        
//         search for key in map, if found we directly return it or else we move forward
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
       	//Recursively call The functions for 1 steps and 2 steps
        
        int oneStep=totalWays(currentIndex+1, targetStep, map);
        int twoStep=totalWays(currentIndex+2, targetStep, map);
        
//         we store the answer in the map directly for the currentIndex
//         and return it
        return  map[currentKey]=oneStep+twoStep;

    }
};