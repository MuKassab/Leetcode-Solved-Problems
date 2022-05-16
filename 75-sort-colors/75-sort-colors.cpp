class Solution {
public:
    void sortColors(vector<int>& nums) {
        int o = 0, t = 0, z = 0;
        for(auto i : nums)
            if(!i) ++z;
            else if(i == 1) ++o;
            else ++t;
        for(int i = 0; i < (int)nums.size(); i++)
            if(i < z) nums[i] = 0;
            else if(i < z + o) nums[i] = 1;
            else nums[i] = 2;
    }
};