class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 0, val = -1000;
        int ln = nums.size();
        for(int i = 0; i < ln; i++)
        {
            if(nums[i] == val) continue;
            val = nums[i];
            nums[idx++] = val;
        }
        return idx;
    }
};