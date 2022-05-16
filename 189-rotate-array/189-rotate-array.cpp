class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v(nums);
        int ln = nums.size();
        k = k % ln;
        for(int i = 0; i < ln; i++)
            v[(i + k) % ln] = nums[i];
        nums = v;
    }
};