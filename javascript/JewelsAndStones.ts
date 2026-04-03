function numJewelsInStones(jewels: string, stones: string): number {
    let ans : number = 0 ;
    
    let stone = stones.split("") ;

    stone.forEach( e => {
        if(jewels.includes(e)){
            ans++ ;
        }
    })
    return ans ;

    
};