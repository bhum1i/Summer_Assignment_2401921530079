class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyleft = 0;
        int sellright = 1;
        int profit = 0;
        int maxprofit = 0;
        while(sellright<prices.size()){
            if(prices[buyleft]>prices[sellright]){
                buyleft = sellright;
            }
            else if(buyleft<=sellright){
                profit = prices[sellright]-prices[buyleft];
                maxprofit = max(maxprofit,profit);
            }
            sellright++;
        }
        return maxprofit;
    }
};