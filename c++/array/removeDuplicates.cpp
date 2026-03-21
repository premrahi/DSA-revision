class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        if(arr.size() <= 1) return arr ;
        
        int i = 0 ;
        
        for(int j = 1 ; j<arr.size() ; j++){
            if(arr[i] != arr[j]){
                i++;
                arr[i] = arr[j];
            }
        }
        
        arr.resize(i+1) ;
        
        return arr ;
        
    }
};