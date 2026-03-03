// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation


// matrix = [[1,2,3]
//          ,[4,5,6]
//          ,[7,8,9]]

//output =  [[7,4,1]
//          ,[8,5,2]
//          ,[9,6,3]]


void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(); 
        
        if(n==0) return  ;

        // vector<vector<int>> ans(n,vector<int>(n)) ;

        // for(int i = 0 ; i<n ;i++){
        //     for(int j = 0 ; j <n ; j++){
        //         ans[j][(n-1)-i] = matrix[i][j] ;
        //     }
        // }

        
        // for(int i= 0 ; i<n ;i++){
        //     for(int j = 0 ; j<n; j++){
        //         matrix[i][j] = ans[i][j] ;
        //     }
        // }


        // above piece of code uses another matrix of n^2 size. 
        
        for(int i= 0 ; i<n-1 ; i++){
            for(int j = i+1  ; j<n ; j++){
                swap(matrix[i][j] , matrix[j][i]) ;
            }
        }

        for(int i = 0  ; i < n ; i++){
            reverse(matrix[i].begin() , matrix[i].end()) ;  // this reverses each row in the matrix
        }
        
}


// if we had to reverse the column of the matrix
for(int j = 0 ; j<n ;j++){
    int top = 0 ;
    int bottom= n-1 ;
    while(top<bottom){
        swap(mat[top][j] ,mat[bottom][j]);
        top++;
        bottom--;
    }
}