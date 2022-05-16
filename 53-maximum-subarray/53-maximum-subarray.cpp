class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = -1e6, curr = 0;
        for(int i = 0; i < (int)nums.size(); i++)
        {
            if(nums[i] >= 0 && curr < 0)
                curr = nums[i];
            else if(nums[i] + curr >= 0)
                curr += nums[i];
            else 
                curr = nums[i];
            ans = max(ans, curr);
        }
        return ans;
    }
};