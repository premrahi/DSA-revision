// You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2].
//  Each integer appears exactly once except a which appears twice and b which is missing. 
// The task is to find the repeating and missing numbers a and b.

// INPUT grid = [[1,3],[2,2]]
// OUTPUT [2,4]

// INPUT  grid = [[9,1,7],[8,9,2],[3,4,6]]
// OUTPUT [9,5]


class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans ;
        int n = grid.size() ;
        if(n == 0) return ans ;

        int a = 0 ;
        int b = 0 ;
        vector<int> hash(n*n+1 , 0) ;
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                hash[grid[i][j]] ++ ;
            }
        }

        for(int i = 1 ; i<hash.size() ; i++){
            if(hash[i] == 0){
                a = i ;
            }
            if(hash[i] == 2)
                b= i ;
            
        }

        ans.push_back(b);
        ans.push_back(a);

        return ans ; 
    }
};