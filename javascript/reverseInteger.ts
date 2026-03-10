function reverse(x: number): number {
    const isNegative:boolean = (x < 0) ;  

    const revNumber:number = parseInt(
        Math.abs(x).toString().split('').reverse().join('') );

    if( revNumber > Math.pow(2, 31)- 1 || revNumber < -Math.pow(2, 31) ) return 0 ;
    

    return isNegative ? -revNumber : revNumber ;

};