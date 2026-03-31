function singleNumber(nums: number[]): number {
    let ans : number = 0 ;

    for(let j = 0 ; j<nums.length ; j++){
        ans = ans ^ nums[j] ;
    }
    return ans ;
};