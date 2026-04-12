/**
 * @param {string} s
 * @return {number}
 */
var maxFreqSum = function(s) {

    const vowel = new Set(['a','e','i','o','u'])
    const freq = new Array(26).fill(0) ;

    for(const ch of s){
        freq[ch.charCodeAt(0) - 97]++ ;
    }


    let maxVowel = 0;
    let maxConsonent = 0;

    for(let i = 0 ; i<26 ; i++){
        const ch = String.fromCharCode(97+i); 

        if(vowel.has(ch)){
            maxVowel = Math.max(maxVowel,freq[i]) ;
        }else{
            maxConsonent = Math.max(maxConsonent,freq[i]) ;
        }
    }
    
    return maxConsonent + maxVowel ;
};