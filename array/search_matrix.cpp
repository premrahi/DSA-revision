// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size() ;
        int m = matrix[0].size() ;
     
        int low = 0 ;
        int high = (n*m) - 1 ;


        while(low <= high){
            int mid = low + (high -low ) / 2 ;
            int row = mid / m ;
            int col = mid % m ;

            if(matrix[row][col] == target) return true ;

            if(matrix[row][col] > target){
                high = mid -1 ;
            }
            else{
                low = mid +1 ;
            }
        }

        return false ;

        
    }
};

/*

the approach we used here is that we had hypothetically(not in real) flatten the matrix
and mid is calculated as 1D index to convert it into real 2D index we need to use these formulas

int row = mid / m ;
int col = mid % m ;

m here is column.

*/