/**
 * @param {string} s
 * @return {number}
 */
var balancedStringSplit = function(s) {

    let answer = 0 ;
    let count = 0 ;

    for(const ch of s){
        if(ch === 'R') count++ ;
        if(ch === 'L') count-- ;

        if(count == 0) answer++ ;
    }

    return answer ;
    
};