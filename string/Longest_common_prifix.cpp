// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

//  strs = ["flower","flow","flight"]
// Output: "fl"


class Solution {
  public:
    string getLongestPal(string &s) {
        int n = s.size() ;
        int start = 0 ;
        int maxlen = 0 ;
        string a = s.substr(0,1);
        
        for(int i = 1 ; i<n ;i++){
            int low = i ;
            int high = i ;
            while(low >=0 && high < n && s[low] ==s[high]){

                if(high - low + 1 > maxlen){
                    start = low ;
                    maxlen = high - low + 1 ;
                }
                low-- ; 
                high-- ;
            }
            
            low = i-1 ;
            high = i ;
            while(low >=0 && high < n && s[low] ==s[high]){

                if(high - low + 1 > maxlen){
                    start = low ;
                    maxlen = high - low + 1 ;
                }
                low-- ; 
                high-- ;
            }
            
        }
        a = s.substr(start , maxlen) ;
        return a ;
    }
};