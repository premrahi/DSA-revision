function findMaxConsecutiveOnes(nums: number[]): number {
    let maxOne = 0;
    let one = 0;

    for (let i = 0; i < nums.length; i++) {
        maxOne = Math.max(maxOne, one);

        if (nums[i] === 1) {
            one++;
        }
        else {
            one = 0;
        }
    }
        maxOne = Math.max(maxOne, one);


    return maxOne;
};