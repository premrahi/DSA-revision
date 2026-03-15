function countNegatives(arr) {
  if (!arr || !Array.isArray(arr)) return false; 
  if (arr.some((e) => typeof e !== 'number' || !isFinite(e))) return false;
  

  return arr.filter(e => e < 0).length;
}

module.exports = { countNegatives };