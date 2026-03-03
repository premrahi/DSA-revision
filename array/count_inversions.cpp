// Given an array of integers arr[]. You have to find the Inversion Count of the array. 
// Note : Inversion count is the number of pairs of elements (i, j) such that i < j and arr[i] > arr[j].

// Input: arr[] = [2, 4, 1, 3, 5]
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).


class Solution {
  public:
  
    void merge(vector<int> &arr , int & ans , int low , int mid , int high){
        int left = low ;
        int right  = mid+1 ;
        
        vector<int> temp ;
        
        while(left<=mid && right <= high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                ans += (mid - left + 1);
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        
        for(int i = low; i <= high; i++) {
             arr[i] = temp[i - low];
        }
    }
  
  
    void helper(vector<int>&arr , int &ans ,int low ,  int high) {
        if(low >= high) return  ;
        int mid = low + (high - low) / 2 ;
        helper(arr , ans , low , mid);
        helper(arr , ans , mid+1 , high);
        
        merge(arr,ans , low, mid , high) ;
    }
  
    int inversionCount(vector<int> &arr) {
        // Code Here
        int ans = 0 ;
    
        int n = arr.size() ;
        helper(arr , ans , 0 , n-1) ;
    
        return ans ;
    }
};