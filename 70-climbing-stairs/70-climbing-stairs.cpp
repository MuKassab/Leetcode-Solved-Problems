class Solution {
public:
    int dp[50];
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        return myAnswer(n);
    }
    
    int myAnswer(int n)
    {
        if(!n) return 1;
        else if(n < 0) return 0;
        int &ret = dp[n];
        if(~ret) return ret;
        ret = myAnswer(n - 1) + myAnswer(n - 2);
        return ret;
    }
};