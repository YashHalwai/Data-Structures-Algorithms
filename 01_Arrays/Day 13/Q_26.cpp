// Q. Best Time to Buy and Sell Stock III

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/

/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = prices.size(), mini = prices[0], maxi = prices[prices.size()-1], i, ans = 0;
        vector<int> front(n), back(n);
        for (i = 1; i < n; i++) {
            mini = min(mini, prices[i]);
            front[i] = max(prices[i]-mini, front[i-1]);                           
        }
        for (i = n-2; i >= 0; i--) {
            maxi = max(maxi, prices[i]);
            back[i] = max(maxi-prices[i], back[i+1]);                           
        }
        for (i = 0; i < n; i++) ans = max(ans, front[i]+back[i]);
        return ans;
    }
};
*/