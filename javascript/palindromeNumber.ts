function isPalindrome(x: number): boolean {
  let revN: number = 0;
  let original: number = x;
  if (x < 0) return false;

  while (x > 0) {
    let digit: number = x % 10;
    if (
      revN > Math.floor((Math.pow(2, 31) - 1) / 10) ||
      revN < Math.ceil(-Math.pow(2, 31) / 10)
    )
      return false;
    revN = revN * 10 + digit;

    x = Math.floor(x / 10);
  }

  if (revN != original) return false;

  return true;
}
