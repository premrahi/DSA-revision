/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function(n) {
  return ((n>0) && (n & (n-1))==0) ;  
};



// if we do and operation of a number with its predecessor and it turns out ot be zero then the number is a power of 2