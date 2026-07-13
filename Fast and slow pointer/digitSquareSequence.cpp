class Solution {
  public:
    
    int help (int  n) {
        int sum = 0 ;
        while(n>0){
            int digit = n % 10 ;
            sum += digit*digit ;
             n = n/10 ;
        }
        return sum ;
        
    }
  
    bool reachesOne(int n) {
         unordered_set<int> mp  ;
         
         while(n!=1){
             if(mp.find(n) != mp.end()) return false ;
             
             mp.insert(n) ;
             n = help(n) ;
            }
            
            return true ;
        
    }
};