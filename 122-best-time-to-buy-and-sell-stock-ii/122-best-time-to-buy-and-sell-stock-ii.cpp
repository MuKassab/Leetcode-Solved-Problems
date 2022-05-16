class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, mini = 1e5;
        for(auto i : prices)
        {
            if(i > mini)
            {
                profit += i - mini;
                mini = 1e5;
            }
            mini = min(mini, i);
        }
        return profit;
    }
};