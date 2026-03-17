function findSmallest(arr) {

  if (!Array.isArray(arr)) return false;
  if (arr.some(e => typeof e !== 'number' || !isFinite(e))) return false;
  if (arr.length === 0) return null;


  let smallest = arr[0];

  arr.map(e => {
    if (e < smallest) smallest = e;
  })

  return smallest;
}

module.exports = { findSmallest };