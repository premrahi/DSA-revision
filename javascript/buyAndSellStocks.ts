function maxProfit(prices: number[]): number {
    let maxProfit :number = 0 ;
    let mini:number = Infinity ;

    for( let k:number = 0 ; k<prices.length ; k++){
        mini = Math.min(mini , prices[k])
        maxProfit = Math.max(maxProfit ,prices[k] - mini);
    }
    return maxProfit; 
};