function findLargest(arr) {
  if (!Array.isArray(arr)) return false;
  if (arr.some(e => typeof e !== 'number' || !isFinite(e))) return false;
  if (arr.length === 0) return null;

  let largest = arr[0];
  arr.forEach(e => {
    if (e > largest) largest = e;
  })

  return largest;
}

module.exports = { findLargest };
