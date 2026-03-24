class Solution {
public:
    int secondHighest(string s) {
        
        int ans = -1;
        int largest = -1;

        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] >='0' && s[i] <='9' ){

                int digit = s[i] - '0' ;


                if(digit > largest){
                    ans = largest ; 
                    largest = digit ;
                }
                else if(digit > ans && digit != largest ){
                    ans = digit ;
                }
            }

        }
        return ans ;
        
    }
};