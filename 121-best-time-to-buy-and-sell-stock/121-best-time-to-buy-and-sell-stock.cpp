class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int mini = 1e9;
        for(auto i : prices)
        {
            ans = max(ans, i - mini);
            mini = min(mini, i);
        }
        return ans;
    }
};