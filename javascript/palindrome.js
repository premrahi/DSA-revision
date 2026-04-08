let word = "naman";

function palindrome(x) {
    let original = x ;
  let revWord = x.split("").reverse().join("");
  let result = original === revWord;
  console.log(result);
}

palindrome(word) ;