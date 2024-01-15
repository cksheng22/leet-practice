int maxProfit(int* prices, int pricesSize) {
    int max = 0;
    int buy = prices[0];
    for(int i=0; i<pricesSize; i++){
        if(prices[i] <= buy){
            buy = prices[i];
        }
        else{
            if(prices[i] - buy >= max) max = prices[i] - buy;
        }
    }

    return max;
}