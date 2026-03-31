/**
 Do not return anything, modify nums in-place instead.
 */
function moveZeroes(nums: number[]): void {
    const size:number = nums.length ;

    let i :number = 0 ;
    for(let j= 0 ; j<size ;j++){
        if(nums[j] !== 0){
            nums[i] = nums[j] ;
            i++;
        }
    }
    while(i<size){
        nums[i++] = 0; 
    }
    
};