function missingNumber(nums: number[]): number {
    
    let size:number = nums.length ;

    const sum:number = (size * (size + 1) )/ 2;

    const calculatedSum:number = nums.reduce((acc , curr) => {
        return acc = acc + curr ;
    },0) ;


    return sum - calculatedSum ;
};