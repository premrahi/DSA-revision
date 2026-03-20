/**
 * @param {number[]} nums
 * @return {number[]}
 */
function merge(left, right) {
    let res = [];
    let i = 0, j = 0;

    while (i < left.length && j < right.length) {
        if (left[i] < right[j]) {
            res.push(left[i++]);
        } else {
            res.push(right[j++]);
        }
    }

    return [...res, ...left.slice(i), ...right.slice(j)];
}

var sortArray = function (nums) {
    if (nums.length <= 1) return nums;
    let mid = Math.floor(nums.length / 2);
    let left = nums.slice(0, mid);
    let right = nums.slice(mid);

    return merge(sortArray(left), sortArray(right));
};