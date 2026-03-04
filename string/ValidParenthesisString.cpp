// Given a string s containing only three types of characters: '(', ')' and '*', return true if s is valid.

// The following rules define a valid string:

// Any left parenthesis '(' must have a corresponding right parenthesis ')'.
// Any right parenthesis ')' must have a corresponding left parenthesis '('.
// Left parenthesis '(' must go before the corresponding right parenthesis ')'.
// '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".
 

class Solution {
public:
    bool checkValidString(string s) {

        int min = 0 ; 
        int max = 0 ;

        for(char c : s){
            if(c == '('){
                min++ ;
                max++ ;
            }
            else if(c == ')'){
                min-- ;
                max-- ;
            }
            else{
                min-- ;
                max++ ;
            }
            if(max < 0) return false ;
            if(min < 0) min = 0 ;
        } 

        return (min == 0) ;        
    }
};