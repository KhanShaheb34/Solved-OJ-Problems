class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        prices.push_back(0);
        int start = -1, end = 0, profit = 0;
        for(int i=0; i<prices.size() - 1; i++) {
            if(start == -1 && prices[i] > prices[i+1]) continue;
            if(start == -1 && prices[i] < prices[i+1]) start = i;
            
            if(prices[i] > prices[i+1]) {
                profit += prices[i] - prices[start];
                end = i;
                start = i+1;
            }
        }
        return profit;
    }
};
