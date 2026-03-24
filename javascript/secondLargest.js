/**
 * @param {string} s
 * @return {number}
 */
var secondHighest = function (s) {

    let largest = -1
    let secondLargest = -1

    for (let l = 0; l <= s.length ; l++) {
        if (s[l] >= '0' && s[l] <= '9') {
            let digit = parseInt(s[l]);

            if (digit > largest) {
                secondLargest = largest;
                largest = digit;
            }
            else if (digit > secondLargest && digit != largest) {
                secondLargest = digit;
            }
        }
    }
    return secondLargest;
};