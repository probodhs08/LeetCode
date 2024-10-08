class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int least=prices[0];
    int n=prices.size();
    int profit=0;
    for(int i=1;i<n;i++){
        if(least>prices[i]){
        least=prices[i];
        }else if(prices[i]-least>profit){
            profit=prices[i]-least;
        }
    }
    return profit;
    }
};