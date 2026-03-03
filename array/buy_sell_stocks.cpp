// LC 121 buy and sell stocks
// You are given an array prices where prices[i] is the price of a given stock on the ith day.
//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

     int maxProfit(vector<int>& prices) {
        if(prices.size() == 0 ) return 0 ;
       
        int maxprof = 0 ;
        int minprof = INT_MAX ;
        for(int k = 0 ; k<prices.size() ;k++){
         minprof = min(prices[k] , minprof) ;
         maxprof = max(maxprof ,prices[k]-minprof);
        }
        return maxprof ;
        
    }