class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        if(arr.size() < 3) return -1 ;
        
        int ans = 0 ;
        
        sort(arr.begin() ,arr.end()) ;
        for(int i = 0 ; i<arr.size()-1  ; i++ ){
            
            
            int j = i+1 ;
            int k = arr.size() -1 ;
            
            while(j<k){
                int s = arr[i] + arr[j] + arr[k] ;
                
                if(s < sum){
                    ans += (k-j) ;
                    j++ ;
                }else{
                    k-- ;
                }
            }
        }
        
        return ans ;
        
    }
};