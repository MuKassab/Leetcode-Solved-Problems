class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz = nums.size();
        int z = 0;
        for(int i = 0, j = 0; i < sz; i++)
        {
            if(!nums[i])
            {
                ++z;
                continue;
            }
            nums[j++] = nums[i];
        }
        for(int i = sz - z; i < sz; i++)
            nums[i] = 0;
    }
};