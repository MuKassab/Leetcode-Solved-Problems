class Solution {
public:
    int mem[110];
    int rob(vector<int>& nums) {
        memset(mem, -1, sizeof mem);
        int sz = nums.size();
        return dp(nums, sz - 1);
    }
    
    int dp(vector<int>& nums, int idx)
    {
        if(idx < 0) return 0;
        int &ret = mem[idx];
        if(~ret) return ret;
        ret = max(nums[idx] + dp(nums, idx - 2), dp(nums, idx - 1));
        return ret;
    }
};